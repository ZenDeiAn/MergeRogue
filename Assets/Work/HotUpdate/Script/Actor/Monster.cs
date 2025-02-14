using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IActor
{
    [SerializeField] private Animator animator;
    
    public MonsterInfo Info { get; set; }
    public ActorType ActorType => ActorType.Enemy;
    public ActorActingType ActingType { get; set; }
    public ActorStatus Status { get; set; }
    public ActorAttackData AttackData => Info.AttackData;
    public ActorSkillData SkillData => Info.SkillData;
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
        this.InitializeStatus(Info.Status);
    }
}
