using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using XLua;

[Serializable, LuaCallCSharp]
public class Status
{
    [SerializeField] private int speed;
    [SerializeField] private int healthMaximum;
    [SerializeField] private int attack;
    [SerializeField] private int shield;
    [FormerlySerializedAs("healthStealth")] [SerializeField] private float getHealthStealth; 
    [SerializeField, Range(0, 1)] private float dodge;
    [FormerlySerializedAs("critical")] [SerializeField, Range(0, 1)] private float getCritical;
    [FormerlySerializedAs("criticalDamage")] [SerializeField] private float getCriticalDamage;
    
    public int GetSpeed => speed;
    public int GetHealthMaximum => healthMaximum;
    public int GetAttack => attack;
    public int GetShield => shield;
    public float GetHealthStealth => getHealthStealth;
    public float GetDodge => dodge;
    public float GetCritical => getCritical;
    public float GetCriticalDamage => getCriticalDamage;
    
    
    public Status() { }

    public Status(Status status)
    {
        healthMaximum = status.healthMaximum;
        attack = status.attack;
        shield = status.shield;
        dodge = status.dodge;
        getCritical = status.getCritical;
        getCriticalDamage = status.getCriticalDamage;
    }
}

[Serializable, LuaCallCSharp]
public class ActorStatus : Status
{
    public int Speed { get; set; }
    public int Health { get; set; }
    public int HealthMaximum { get; set; }
    public int Attack { get; set; }
    public int Shield { get; set; }
    public int ArmedShield { get; set; }
    public float HealthStealth  { get; set; }
    public float Dodge { get; set; }
    public float Critical { get; set; }
    public float CriticalDamage { get; set; }
    public Dictionary<BuffType, BuffData> Buff { get; set; } = new Dictionary<BuffType, BuffData>();
    
    public ActorStatus() { }

    public ActorStatus(Status status) : base(status)
    { 
        Buff.Clear();
        Speed = status.GetSpeed;
        HealthMaximum = Health = status.GetHealthMaximum;
        HealthStealth = status.GetHealthStealth;
        Attack = status.GetAttack;
        Shield = status.GetShield;
        Dodge = status.GetDodge;
        Critical = status.GetCritical;
        CriticalDamage = status.GetCriticalDamage;
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
public struct UIDataSet
{
    public string id;
    public Sprite sprite;
}

[Serializable, LuaCallCSharp]
public class BuffData
{
    public BuffType type;
    public int duration;
    public IActor source;
    public int strength;
}