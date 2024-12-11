using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Actor : MonoBehaviour
{
    public ActorStatus Status { get; set; }

    public abstract void Initialize();

    public void Act(Actor target, ActType type, object data)
    {
        
    }

    public void InitializeStatus(Status statusOriginal)
    {
        Status = new ActorStatus(statusOriginal);
    }
}
