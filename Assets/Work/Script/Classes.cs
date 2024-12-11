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
    
    public Status() { }

    public Status(Status statusOriginal)
    {
        healthMaximum = statusOriginal.healthMaximum;
        attack = statusOriginal.attack;
        shield = statusOriginal.shield;
        dodge = statusOriginal.dodge;
        critical = statusOriginal.critical;
        criticalDamage = statusOriginal.criticalDamage;
    }
}

[Serializable]
public class ActorStatus : Status
{
    public int HealthCurrent { get; set; }
    public Dictionary<string, int> Buff { get; set; } = new Dictionary<string, int>();
    
    public ActorStatus() { }

    public ActorStatus(Status status) : base(status)
    { 
        Buff.Clear();
        HealthCurrent = status.healthMaximum;
    }
}

[Serializable]
public class PlayerStatus : ActorStatus
{
    public List<int> Items { get; set; } = new List<int>();
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

public interface IActor
{
    public string ID { get; set; }
    public Status Status { get; set; }
}

[Serializable]
public struct UIDataSet
{
    public string id;
    public Sprite sprite;
}