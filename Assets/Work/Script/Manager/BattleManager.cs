using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class BattleManager : Processor<BattleManager, BattleState>
{
    public MonsterType TestMonsterType = MonsterType.None;
    public List<Character> characters;
    public List<Monster> monsters;
    public List<Transform> monsterAnchors;
    public VirtualCameraRotateController vcrc;

    private AdventureManager _avm;
    private AddressableManager _adm;
    
    void Activate_Intro()
    {
        int index = 0;
        foreach (var character in characters)
        {
            // TODO : Multi Player initialize.  
            character.gameObject.SetActive(index == 0);
            character.Initialize();
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
                }
            }
        }
    }

    void Activate_Prepare()
    {
        MergeCardHandler.Instance.DrawRandomCards();
    }
    
    void Activate_Over()
    {
        vcrc.enabled = false;
    }

    void DeActivate_Intro()
    {
        vcrc.enabled = true;
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _avm = AdventureManager.Instance;
        _adm = AddressableManager.Instance;
        
        vcrc.enabled = false;
        if (TestMonsterType == MonsterType.None)
        {
            State = BattleState.Intro;
        }
        else
        {
            _adm.PatchAllAddressableAssets(null,
                null,
                null,
                () =>
                {
                    GameManager.Instance.LoadSaveData();
                    GameManager.Instance.NewGame();
                    _avm.Data.Position = new Vector2Int(0, _adm.MapBlockProbabilities[^1].deep - 1);
                    _avm.CurrentMapData.EventType = TestMonsterType.ToMapBlockEventType();
                    State = BattleState.Intro;
                });
        }
    }
}

public enum BattleState
{
    Intro,
    Prepare,
    Battle,
    Over
}