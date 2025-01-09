using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using XLua;

public class BattleManager : Processor<BattleManager, BattleState>
{
    public List<Character> characters;
    public List<Monster> monsters;
    public List<Transform> monsterAnchors;
    public VirtualCameraRotateController vcrc;
   
    [CSharpCallLua] public delegate void BattleActionDelegate(IActor source, IActor target);
    private BattleActionDelegate _calculateNormalDamage;
    private BattleActionDelegate _checkActionLegalAndApplyBuff;
    
    void Activate_Intro()
    {
        int index = 0;
        foreach (var character in characters)
        {
            // TODO : Multi Player initialize.  
            character.gameObject.SetActive(index == 0);
            Debug.Log(character.gameObject.activeSelf);
            character.Initialize();
            index++;
        }

        monsters = new List<Monster>();
        if (GameManager.Instance.AdventureCurrentMapData.TryParseMonsterType(out MonsterType monsterType))
        {
            List<MonsterGroup> monsterGroup = new List<MonsterGroup>();
            foreach (var list in AddressableManager.Instance.MonsterProbabilities[monsterType])
            {
                if (list.deep > GameManager.Instance.AdventurePosition.y)
                {
                    break;
                }
                monsterGroup = list.monsterGroup;
            }

            if (monsterGroup.Count > 0)
            {
                int randomGroupIndex = Random.Range(0, monsterGroup.Count);
                List<MonsterDataSet> monsterDataSets = monsterGroup[randomGroupIndex].monsters;
                for (int i = 0; i < monsterDataSets.Count; ++i)
                {
                    if (i >= monsterAnchors.Count)
                        break;
                    
                    GameObject monsterObject = Instantiate(monsterDataSets[i].prefab, monsterAnchors[i]);
                    monsterObject.transform.localPosition = Vector3.zero;
                    monsterObject.transform.localRotation = Quaternion.identity;
                    Monster monster = monsterObject.GetComponent<Monster>();
                    monster.DataSet = monsterDataSets[i];
                    monster.Initialize();
                    monsters.Add(monster);
                }
            }
        }
    }

    void DeActivate_Intro()
    {
        vcrc.enabled = true;
    }
    
    void Activate_Over()
    {
        vcrc.enabled = false;
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        // Random seed initialize for lua.
        AddressableManager.Instance.LuaEnv.DoString("math.randomseed(os.time())");
        // Get Battle Action function.
        _calculateNormalDamage = AddressableManager.Instance.LuaEnv.Global.
            Get<BattleActionDelegate>("CalculateNormalDamage");
        _checkActionLegalAndApplyBuff = AddressableManager.Instance.LuaEnv.Global.
            Get<BattleActionDelegate>("CheckActionLegalAndApplyBuff");
        
        vcrc.enabled = false;
        State = BattleState.Intro;
    }
}

public enum BattleState
{
    Intro,
    Prepare,
    Battle,
    Over
}