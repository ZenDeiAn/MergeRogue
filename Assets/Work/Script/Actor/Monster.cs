using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IActor
{
    [SerializeField] private Animator animator;
    
    public MonsterDataSet DataSet { get; set; }

    public ActorStatus Status { get; set; }
    public ActorStatus InBattleStatus { get; set; }
    public ActorAttackData AttackData => DataSet.AttackData;
    public ActorSkillData SkillData => DataSet.SkillData;
    public ActionType CurrentAction { get; set; }

    public void Attack(List<IActor> target)
    {
        this.Act(target, ActionType.Attack);
    }

    public void Skill(List<IActor> target)
    {
        this.Act(target, ActionType.Skill);
    }

    public void Initialize()
    {
        this.InitializeStatus(DataSet.Status);
    }
}
