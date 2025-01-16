using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using XLua;

[LuaCallCSharp]
public class BattleManager : Processor<BattleManager, BattleState>
{
    public List<Character> characters;
    public List<Monster> monsters;
    public List<Transform> monsterAnchors;
    public VirtualCameraRotateController vcrc;
    
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
        if (AdventureManager.Instance.CurrentMapData.TryParseMonsterType(out MonsterType monsterType))
        {
            List<MonsterGroup> monsterGroup = new List<MonsterGroup>();
            foreach (var list in AddressableManager.Instance.MonsterProbabilities[monsterType])
            {
                if (list.deep > AdventureManager.Instance.Position.y)
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

    void Activate_Prepare()
    {
        
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