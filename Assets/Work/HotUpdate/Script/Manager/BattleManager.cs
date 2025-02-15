using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.UI;

public class BattleManager : Processor<BattleManager, BattleState>
{
    public MonsterType TestMonsterType = MonsterType.None;
    public List <IActor> actors = new List<IActor>();
    public List<Character> characters;
    public List<Monster> monsters;
    public List<Transform> monsterAnchors;
    public CinemachineVirtualCamera cvc_perform;
    public EnumPairList<BattleState, PlayableDirector> playableDirectors = new EnumPairList<BattleState, PlayableDirector>();
    
    [SerializeField] private Button btn_performStart;
    [SerializeField] private Button btn_cardReload;
    [SerializeField] private Vector3 viewMin;
    [SerializeField] private Vector3 viewMax;

    private CinemachineTransposer _cvcTransposer;
    private AdventureManager _avm;
    private AddressableManager _adm;
    private Vector3 _originalShoulderOffset;
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

    private IEnumerator BattleTurnLoopIE()
    {
        //while()
        yield return null;
    }
    
    void Activate_Intro()
    {
        int index = 0;
        foreach (var character in characters)
        {
            // TODO : Multi Player initialize.  
            character.gameObject.SetActive(index == 0);
            character.Initialize();
            actors.Add(character);
            index++;
        }

        monsters = new List<Monster>();

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
                    
                    GameObject monsterObject = Instantiate(monsterDataSets[i].prefab, monsterAnchors[i]);
                    monsterObject.transform.localPosition = Vector3.zero;
                    monsterObject.transform.localRotation = Quaternion.identity;
                    Monster monster = monsterObject.GetComponent<Monster>();
                    monster.Info = monsterDataSets[i];
                    monster.Initialize();
                    monsters.Add(monster);
                    
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
        actors.OrderBy(a => a.Status.SpeedCalculated);
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
                        Vector3 offset = Input.touches[0].deltaPosition * Time.deltaTime;
                        _cvcTransposer.m_FollowOffset -= offset;
                        break;
            
                    case PerformViewAction.Zoom:
                        _cvcTransposer.m_FollowOffset.z = _originalShoulderOffsetZ -
                            (Vector2.Distance(Input.touches[0].position, Input.touches[1].position) - _originalZoom) * Time.deltaTime;
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
        _originalShoulderOffset = _cvcTransposer.m_FollowOffset;
        
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