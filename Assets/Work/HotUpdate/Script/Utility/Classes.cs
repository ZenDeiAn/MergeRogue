using System;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;

public static class UtilityFunctions
{
    public static Rect GetWorldRect(this RectTransform rectTransform)
    {
        Vector3[] corners = new Vector3[4];
        rectTransform.GetWorldCorners(corners);

        Vector3 bottomLeft = corners[0];
        Vector3 topRight = corners[2];

        return new Rect(bottomLeft, topRight - bottomLeft);
    }
    public static int GetFibonacciNumber(int n)
    {
        if (n <= 0) return 0;
        if (n == 1) return 1;

        int a = 0, b = 1;
        for (int i = 2; i <= n; i++)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

[Serializable]
public class Status
{
    [JsonIgnore, SerializeField] protected int speed;
    [JsonIgnore, SerializeField] protected int healthMaximum;
    [JsonIgnore, SerializeField] protected int attack;
    [JsonIgnore, SerializeField] protected int shield;
    [JsonIgnore, SerializeField] protected int comboMaximum;
    [JsonIgnore, SerializeField] protected float comboChance;
    [JsonIgnore, SerializeField, Range(0, 1)] protected float healthStealth;
    [JsonIgnore, SerializeField, Range(0, 1)] protected float dodge;
    [JsonIgnore, SerializeField, Range(0, 1)] protected float criticalChance;
    [JsonIgnore, SerializeField, Range(0, 1)] protected float skillCharge = 0.25f;
    [JsonIgnore, SerializeField] protected float criticalDamage;
    
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

[Serializable]
public class ActorStatus : Status
{
    [JsonProperty]
    public int speedAdditional;
    [JsonProperty]
    public int health;
    [JsonProperty]
    public int healthMaximumAdditional;
    [JsonProperty]
    public int attackAdditional;
    [JsonProperty]
    public int shieldAdditional;
    [JsonIgnore]
    public int armedShield;
    [JsonProperty]
    public int comboMaximumAdditional;
    [JsonProperty]
    public float comboChanceAdditional;
    [JsonProperty]
    public float healthStealthAdditional;
    [JsonProperty]
    public float dodgeAdditional;
    [JsonProperty]
    public float criticalChanceAdditional;
    [JsonProperty]
    public float criticalDamageAdditional;
    [JsonIgnore]
    public float skillCharging;
    [JsonProperty]
    public float skillChargeAdditional;
    [JsonIgnore]
    public Dictionary<BuffType, BuffData> buff = new Dictionary<BuffType, BuffData>();
    public Action<string, float> UpdateStatus;

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
    public float CriticalChanceCalculated => criticalChance + criticalChanceAdditional;
    public float CriticalDamageCalculated => criticalDamage + criticalDamageAdditional;
    public float SkillChargeCalculated => skillCharge + skillChargeAdditional;

    public void AddBuff(BuffData buffData)
    {
        buff[buffData.type] = buffData;
        UpdateStatus(nameof(buff), buffData.duration);
    }
    
    public void BuffProcess(BuffType buffType)
    {
        if (!BuffAlive(buffType))
            return;
        
        if (BattleLogicLibrary.Instance.BuffLibrary.ContainsKey(buffType))
        {
            BattleLogicLibrary.Instance.BuffLibrary[buffType](buff[buffType], this);
        }

        buff[buffType].duration -= 1;
        UpdateStatus(nameof(buff), buff[buffType].duration);
    }

    public bool BuffAlive(BuffType buffType)
    {
        return buff.ContainsKey(buffType) && buff[buffType].duration > 0;
    }
    
    public void UpdateHealth(int variable)
    {
        health = Mathf.Clamp(health + variable, 0, HealthMaximumCalculated);
        UpdateStatus(nameof(health), health);
    }

    public void UpdateArmedShield(int variable)
    {
        armedShield = Mathf.Max(armedShield + variable, 0);
        UpdateStatus(nameof(armedShield), armedShield);
    }

    public void UpdateSkillCharging(bool clear = false)
    {
        skillCharging = Mathf.Clamp01(clear ? 0 : skillCharging + SkillChargeCalculated);
        UpdateStatus(nameof(skillCharging), skillCharging);
    }
    
    public ActorStatus() { }

    public ActorStatus(Status status) : base(status)
    {
        health = HealthMaximumRoot;
        armedShield = 0;
        buff.Clear();
        skillCharging = 0;
    }

    public ActorStatus(ActorStatus status) : base(status)
    {
        speedAdditional = status.speedAdditional;
        health = status.health;
        healthMaximumAdditional = status.healthMaximumAdditional;
        attackAdditional = status.attackAdditional;
        shieldAdditional = status.shieldAdditional;
        armedShield = status.armedShield;
        comboMaximumAdditional = status.comboMaximumAdditional;
        comboChanceAdditional = status.comboChanceAdditional;
        healthStealthAdditional = status.healthStealthAdditional;
        dodgeAdditional = status.dodgeAdditional;
        criticalChanceAdditional = status.criticalChanceAdditional;
        criticalDamageAdditional = status.criticalDamageAdditional;
        buff = status.buff;
    }

    public override string ToString()
    {
        return $"speed : {speed}(+{speedAdditional})\n" + 
               $"health : {health}\n" +
               $"health maximum : {healthMaximum}(+{healthMaximumAdditional})\n" +
               $"attack : {attack}(+{attackAdditional})\n" +
               $"shield : {shield}(+{shieldAdditional})\n" +
               $"armed shield : {armedShield}\n" + 
               $"combo maximum: {comboMaximum}(+{comboMaximumAdditional})\n" +
               $"combo chance : {comboChance}(+{comboChanceAdditional})\n" +
               $"health stealth : {healthStealth}(+{healthStealthAdditional})\n" +
               $"dodge : {dodge}(+{dodgeAdditional})\n" + 
               $"critical chance : {criticalChance}(+{criticalChanceAdditional})\n" +
               $"critical damage : {criticalDamage}\n" + 
               $"buff : {buff.Count}";
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

[Serializable]
public class BuffData
{
    public BuffType type;
    public int duration;
    public Actor source;
    public int strength;
}

[Serializable]
public class Relic
{
    public string name;
    public ObserverMessage triggerMessage;
}

[Serializable]
public class PlayerStatus
{
    public List<CharacterStatus> characters = new List<CharacterStatus>();
    public List<int> ItemList = new List<int>();
    public List<string> EquipmentList = new List<string>();
    public Dictionary<string, float> MergeCardDeck = new Dictionary<string, float>();   // float is random weight
    public int MergeCardHandlerSize;
    public List<int> MergeCardLevelWeight  = new List<int>();

    public void Initialize(CharacterInfo characterInfo, List<string> cardList)
    {
        var cardLibrary = AddressableManager.Instance.MergeCardDataLibrary;
        
        characters.Add(new CharacterStatus(characterInfo));
        
        // Init Item count.
        ItemList = new List<int>(3);
        // Init merge card bag(only add Common category cards)
        MergeCardDeck = new Dictionary<string, float>();
        foreach (var t in cardList)
        {
            MergeCardDeck.Add(t, cardLibrary[t].RandomWeight);
        }
        
        // TODO : Data need by Ruin
        MergeCardHandlerSize = 3;
    }
}

public static class AnimationHashKey
{
    public static readonly int Idle = Animator.StringToHash("Idle");
    public static readonly int Moving = Animator.StringToHash("Moving");
    public static readonly int Attack = Animator.StringToHash("Attack");
    public static readonly int Skill = Animator.StringToHash("Skill");
    public static readonly int Die = Animator.StringToHash("Die");
    public static readonly int Hurt = Animator.StringToHash("Hurt");
}