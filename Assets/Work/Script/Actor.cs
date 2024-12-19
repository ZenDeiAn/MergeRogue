using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IActor
{
    public ActorStatus Status { get; set; }

    public void Initialize();
}

public static class ActorUtility
{
    public static void InitializeStatus(this IActor self,Status statusOriginal)
    {
        self.Status = new ActorStatus(statusOriginal);
    }

    public static void Act(this IActor self, IActor target, object data)
    {
        
    }
}

[Serializable]
public enum ActType
{
    Attack,
    Buff,
    DeBuff
}

public interface IActorData
{
    public string ID { get; set; }
    public Status Status { get; set; }
}