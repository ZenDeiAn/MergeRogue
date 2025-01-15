using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using XLua;

[Serializable, LuaCallCSharp]
public class Status
{
    [SerializeField] protected int speed;
    [SerializeField] protected int healthMaximum;
    [SerializeField] protected int attack;
    [SerializeField] protected int shield;
    [SerializeField] protected int comboMaximum;
    [SerializeField] protected float comboChance;
    [SerializeField, Range(0, 1)] protected float healthStealth;
    [SerializeField, Range(0, 1)] protected float dodge;
    [SerializeField, Range(0, 1)] protected float criticalChance;
    [SerializeField] protected float criticalDamage;
    
    public int SpeedRoot => speed;
    public int HealthMaximumRoot => healthMaximum;
    public int AttackRoot => attack;
    public int ShieldRoot => shield;
    public int ComboMaximumRoot => comboMaximum;
    public float ComboChanceRoot => comboChance;
    public float HealthStealthRoot => healthStealth;
    public float DodgeRoot => dodge;
    public float CriticalChanceRoot => criticalChance;
    public float CriticalDamageRoot => criticalDamage;
    
    public Status() { }

    public Status(Status status)
    {
        healthMaximum = status.healthMaximum;
        attack = status.attack;
        shield = status.shield;
        dodge = status.dodge;
        criticalChance = status.criticalChance;
        criticalDamage = status.criticalDamage;
    }
}

[Serializable, LuaCallCSharp]
public class ActorStatus : Status
{
    public int speedAdditional;
    public int health;
    public int healthMaximumAdditional;
    public int attackAdditional;
    public int shieldAdditional;
    public int armedShield;
    public int comboMaximumAdditional;
    public float comboChanceAdditional;
    public float healthStealthAdditional;
    public float dodgeAdditional;
    public float criticalChanceAdditional;
    public float criticalDamageAdditional;
    public Dictionary<BuffType, BuffData> Buff = new Dictionary<BuffType, BuffData>();

    public int SpeedCalculated => speed + speedAdditional;
    public int Health => health;
    public int HealthMaximumCalculated => healthMaximum + healthMaximumAdditional;
    public int AttackCalculated => attack + attackAdditional;
    public int ShieldCalculated => shield + shieldAdditional;
    public int ArmedShield => armedShield;
    public int ComboMaximumCalculated => comboMaximum + comboMaximumAdditional;
    public float ComboChanceCalculated => comboChance + comboChanceAdditional;
    public float HealthStealthCalculated => healthStealth + healthStealthAdditional;
    public float DodgeCalculated => dodge + dodgeAdditional;
    public float CriticalCalculated => criticalChance + criticalChanceAdditional;
    public float CriticalDamageCalculated => criticalDamage + criticalDamageAdditional;
    
    public ActorStatus() { }

    public ActorStatus(Status status) : base(status)
    { 
        Buff.Clear();
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

[Serializable, LuaCallCSharp]
public class Item
{
    public BuffType type;
    public int duration;
    public IActor source;
    public int strength;
}

[Serializable, LuaCallCSharp]
public class Equipment
{
    public BuffType type;
    public int duration;
    public IActor source;
    public int strength;
}