using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[Serializable]
public class Status
{
    [SerializeField] private int speed;
    [SerializeField] private int healthMaximum;
    [SerializeField] private int attack;
    [SerializeField] private int shield;
    [SerializeField] private float healthStealth; 
    [SerializeField, Range(0, 1)] private float dodge;
    [SerializeField, Range(0, 1)] private float critical;
    [SerializeField] private float criticalDamage;
    
    public int Speed => speed;
    public int HealthMaximum => healthMaximum;
    public int Attack => attack;
    public int Shield => shield;
    public float HealthStealth => healthStealth;
    public float Dodge => dodge;
    public float Critical => critical;
    public float CriticalDamage => criticalDamage;
    
    
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
    public int CurrentSpeed { get; set; }
    public int CurrentHealth { get; set; }
    public int CurrentHealthMaximum { get; set; }
    public int CurrentAttack { get; set; }
    public int CurrentShield { get; set; }
    public float CurrentDodge { get; set; }
    public float CurrentCritical { get; set; }
    public float CurrentCriticalDamage { get; set; }

    public Queue<BuffData> Buff { get; set; } = new Queue<BuffData>();
    
    public ActorStatus() { }

    public ActorStatus(Status status) : base(status)
    { 
        Buff.Clear();
        CurrentSpeed = status.Speed;
        CurrentHealthMaximum = CurrentHealth = status.HealthMaximum;
        CurrentAttack = status.Attack;
        CurrentShield = status.Shield;
        CurrentDodge = status.Dodge;
        CurrentCritical = status.Critical;
        CurrentCriticalDamage = status.CriticalDamage;
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
public struct UIDataSet
{
    public string id;
    public Sprite sprite;
}

public class BuffData
{
    public BuffType type;
    public int aliveRound;
    public IActor source;
    public int number;
}