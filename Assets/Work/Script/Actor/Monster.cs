using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : MonoBehaviour, IActor
{
    [SerializeField] private Animator animator;
    
    public MonsterDataSet DataSet { get; set; }

    public ActorStatus Status { get; set; }

    public void Attack(IActor target)
    {
        this.Act(target, ActType.Attack);
    }

    public void Skill(IActor target)
    {
        this.Act(target, ActType.Skill);
    }

    public void Initialize()
    {
        this.InitializeStatus(DataSet.Status);
    }
}
