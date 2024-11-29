using System;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class Status
{
    public int healthMaximum;
    public int attack;
    public int shield;
    [Range(0, 1)]
    public float dodge;
    [Range(0, 1)]
    public float critical;
    public float criticalDamage;
}

[Serializable]
public class ActorStatus : Status
{
    public int healthCurrent;
    public Dictionary<string, int> buff = new Dictionary<string, int>();

    public void Initialize(Status statusOriginal)
    {
        buff.Clear();
        healthCurrent = healthMaximum = statusOriginal.healthMaximum;
        dodge = statusOriginal.dodge;
        critical = statusOriginal.critical;
        criticalDamage = statusOriginal.criticalDamage;
    }
}

[Serializable]
public class WeaponData 
{
    public WeaponSocketType socketType;
    public Mesh mesh;
    public Vector3 offsetPosition;
    public Vector3 offsetRotation;
}

[Serializable]
public abstract class Buff
{
    public abstract string ID { get; }
    public abstract bool IsDeBuff { get; }

    public virtual void AddedAction(Actor target)
    {
        
    }

    public virtual void RoundStartAction(Actor target)
    {
        
    }

    public virtual void RoundEndAction(Actor target)
    {
        
    }

    public virtual void RemoveAction(Actor target)
    {
        
    }
}

public class ActorData : ScriptableObject
{
    public string id;
    public Status statusOriginal;
}

[Serializable]
public struct UIData
{
    public string id;
    public Sprite sprite;
}