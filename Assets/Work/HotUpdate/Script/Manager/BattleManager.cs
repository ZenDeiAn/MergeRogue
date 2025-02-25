using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class BattleManager : Processor<BattleManager, BattleState>
{
    public MonsterType TestMonsterType = MonsterType.None;
    public List <Actor> actors = new List<Actor>();
    public List<Transform> monsterAnchors;
    public List<Transform> characterAnchors;
    public CinemachineVirtualCamera cvc_perform;
    public EnumPairList<BattleState, PlayableDirector> playableDirectors = new EnumPairList<BattleState, PlayableDirector>();
    public GameObject characterPrefab;
    
    [SerializeField] private Button btn_performStart;
    [SerializeField] private Button btn_cardReload;
    [SerializeField] private Vector3 viewMin;
    [SerializeField] private Vector3 viewMax;

    private CinemachineTransposer _cvcTransposer;
    private AdventureManager _avm;
    private AddressableManager _adm;
    private PerformViewAction _performViewAction;
    private float _originalZoom;
    private float _originalShoulderOffsetZ;

    public void Btn_BattlePerformStart()
    {
        if (State == BattleState.Prepare)
        {
            State = BattleState.PerformStart;
        }
    }
    
    void Activate_Intro()
    {
        var playerCharacters = _avm.Data.PlayerStatus.characters;
        for (int i = 0; i < playerCharacters.Count; ++i)
        {
            Character character =
                Instantiate(characterPrefab, characterAnchors[i]).
                    GetComponent<Character>();
            character.Initialize(i, playerCharacters[i]);
            actors.Add(character);
        }
        
        MonsterType monsterType = _avm.CurrentMapData.EventType.ToMonsterType();
        if (monsterType != MonsterType.None)
        {
            List<MonsterGroup> monsterGroup = new List<MonsterGroup>();
            foreach (var list in _adm.MonsterProbabilities[monsterType])
            {
                if (list.deep > _avm.Data.Position.y)
                {
                    break;
                }
                monsterGroup = list.monsterGroup;
            }

            if (monsterGroup.Count > 0)
            {
                int randomGroupIndex = Random.Range(0, monsterGroup.Count);
                List<MonsterInfo> monsterDataSets = monsterGroup[randomGroupIndex].monsters;
                for (int i = 0; i < monsterDataSets.Count; ++i)
                {
                    if (i >= monsterAnchors.Count)
                        break;

                    Monster monster =
                        Instantiate(monsterDataSets[i].prefab, monsterAnchors[i]).
                            GetComponent<Monster>();
                    monster.Initialize(monsterDataSets[i]);
                    actors.Add(monster);
                }
            }
        }
    }

    void Activate_Prepare()
    {
        MergeCardHandler.Instance.DrawRandomCards();
        btn_performStart.interactable = true;
        btn_cardReload.interactable = true;
    }

    void Activate_PerformStart()
    {
        btn_cardReload.interactable = false;
        btn_performStart.interactable = false;
        MergeCardHandler.Instance.ClearHandCards();
    }

    void Activate_TurnCalculate()
    {
        actors.OrderByDescending(a => a.Status.SpeedCalculated);
        State = BattleState.TurnPerform;
    }
    
    private IEnumerator BattleTurnLoopIE()
    {
        IEnumerable<Actor> allies = actors.Where(a => a.ActorType == ActorType.Ally);
        IEnumerable<Actor> enemies = actors.Where(a => a.ActorType == ActorType.Enemy);
        foreach (var actor in actors)
        {
            if (actor.Status.Health == 0)
                continue;
            
            if (actor.Status.BuffAlive(BuffType.Stun))
            {
                actor.Status.BuffProcess(BuffType.Stun);
                continue;
            }
            
            // Skill logic
            if (actor.Status.skillCharging >= 1)
            {
                actor.ActingType = ActType.Skill;
                BattleLogicLibrary.Instance.ActorSkillLibrary[actor.ActorData.ID](actor, actors);
                actor.Status.UpdateSkillCharging(true);
            }
            // Attack logic
            else
            {
                actor.ActingType = ActType.Attack;
                BattleLogicLibrary.Instance.ActorAttackLibrary[actor.ActorData.ID](actor, actors);
                actor.Status.UpdateSkillCharging();
            }
            
            // Waiting for acting logic end
            var currentActor = actor;
            yield return new WaitUntil(() => currentActor.ActingType == ActType.Idle);
            // Check Result
            if (allies.All(a => a.Status.Health == 0))
            {
                State = BattleState.GameOver;
                yield break;
            }

            if (enemies.All(a => a.Status.Health == 0))
            {
                State = BattleState.Win;
                yield break;
            }
        }
        
        State = BattleState.TurnCalculate;
    }

    void Activate_TurnPerform()
    {
        StartCoroutine(BattleTurnLoopIE());
    }
    
    protected override void Update()
    {
        base.Update();

        // Perform Virtual Camera View Action.
        if (State is BattleState.Intro or > BattleState.TurnPerform)
            return;

        if (Input.touchCount > 0)
        {
            bool viewDragging = true;
            foreach (var touch in Input.touches)
            {
                if (touch.position.y < Screen.height / 2)
                {
                    viewDragging = false;
                }
            }

            if (viewDragging)
            {
                if (Input.touchCount == 1 && _performViewAction != PerformViewAction.Move)
                {
                    _performViewAction = PerformViewAction.Move;
                }
                else if (Input.touchCount > 1 && _performViewAction != PerformViewAction.Zoom)
                {
                    _originalShoulderOffsetZ = _cvcTransposer.m_FollowOffset.z;
                    _originalZoom = Vector2.Distance(Input.touches[0].position, Input.touches[1].position);
                    _performViewAction = PerformViewAction.Zoom;
                }

                switch (_performViewAction)
                {
                    case PerformViewAction.Move:
                        Vector3 offset = Input.touches[0].deltaPosition;
                        _cvcTransposer.m_FollowOffset = Vector3.Lerp(_cvcTransposer.m_FollowOffset,
                            _cvcTransposer.m_FollowOffset - offset,
                            Time.deltaTime * 2);
                        break;
            
                    case PerformViewAction.Zoom:
                        _cvcTransposer.m_FollowOffset.z = Mathf.Lerp(_cvcTransposer.m_FollowOffset.z,
                            _originalShoulderOffsetZ + (Vector2.Distance(Input.touches[0].position, Input.touches[1].position) - _originalZoom),
                            Time.deltaTime * 2);
                        break;
                }
                
                _cvcTransposer.m_FollowOffset = new Vector3(
                    Mathf.Clamp(_cvcTransposer.m_FollowOffset.x, viewMin.x, viewMax.x),
                    Mathf.Clamp(_cvcTransposer.m_FollowOffset.y, viewMin.y, viewMax.y),
                    Mathf.Clamp(_cvcTransposer.m_FollowOffset.z, viewMin.z, viewMax.z)
                );
            }
            else
            {
                _performViewAction = PerformViewAction.None;
            }
        }
        else
        {
            _performViewAction = PerformViewAction.None;
        }
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _avm = AdventureManager.Instance;
        _adm = AddressableManager.Instance;
        
        btn_performStart.interactable = false;
        btn_cardReload.interactable = false;

        StateTriggerEvent += (type, battleState) =>
        {
            if (type == ProcessorStateTriggerType.Activate)
            {
                if (playableDirectors[battleState] != null)
                {
                    playableDirectors[battleState].Play();
                }
            }
        };

        _cvcTransposer = cvc_perform.GetCinemachineComponent<CinemachineTransposer>();
        
        if (TestMonsterType == MonsterType.None)
        {
            State = BattleState.Intro;
        }
        else
        {
            HotUpdateManager.Instance.PatchAllAddressableAssets(null, null, null,
                () =>
                {
                    _adm.LoadAllAddressableAssets(null,
                        () =>
                        {
                            GameManager.Instance.LoadSaveData();
                            GameManager.Instance.NewGame();
                            _avm.Data.Position = new Vector2Int(0, _adm.MapBlockProbabilities[^1].deep - 1);
                            _avm.CurrentMapData.EventType = TestMonsterType.ToMapBlockEventType();
                            State = BattleState.Intro;
                        });
                });
        }
    }

#if UNITY_EDITOR
    private void OnGUI()
    {
        if (AdventureManager.Instance.Data.PlayerStatus.characters.Count == 0 && !Input.GetKey(KeyCode.BackQuote))
            return;
        
        GUI.skin.label.fontSize = (int)(Screen.width * 0.03f);
        GUI.Label(new Rect(10, 10, Screen.width, Screen.height / 2),
            AdventureManager.Instance.Data.PlayerStatus.characters[0].ToString());
    }
#endif
}

public enum BattleState
{
    Intro,
    Prepare,
    PerformStart,
    TurnCalculate,
    TurnPerform,
    Win,
    GameOver,
}

public enum PerformViewAction
{
    None,
    Move,
    Zoom
}