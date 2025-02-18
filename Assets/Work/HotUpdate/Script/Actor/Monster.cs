using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Monster : Actor
{
    public MonsterInfo Info { get; set; }
    public override IActorData ActorData => Info;
    public override ActorType ActorType => ActorType.Enemy;
    public override ActType ActingType { get; set; }
    public override ActorStatus Status { get; set; }

    public void Initialize(IActorData actorData)
    {
        Info = actorData as MonsterInfo;
        ActorUtility.Initialize(this, actorData);
    }
}
