using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IActor
{
    [SerializeField] private Animator animator;
    
    public MonsterInfo Info { get; set; }
    public ActorType ActorType => ActorType.Enemy;
    public ActType ActingType { get; set; }
    public ActorStatus Status { get; set; }
    public ActorAttackData AttackData => Info.AttackData;
    public ActorSkillData SkillData => Info.SkillData;
    public ActType CurrentAct { get; set; }

    public void Attack(List<IActor> target)
    {
        this.Act(target, ActType.Attack);
    }

    public void Skill(List<IActor> target)
    {
        this.Act(target, ActType.Skill);
    }

    public void Initialize()
    {
        animator.runtimeAnimatorController = Info.animation;
        this.InitializeStatus(Info.Status);
    }
}
