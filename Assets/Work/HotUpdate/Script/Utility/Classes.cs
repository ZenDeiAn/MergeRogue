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
    [JsonIgnore, SerializeField, Range(0, 100)] protected int dodge;
    [JsonIgnore, SerializeField] protected int attack;
    [JsonIgnore, SerializeField] protected int shield;
    [JsonIgnore, SerializeField] protected int comboChance;
    [JsonIgnore, SerializeField] protected int comboMaximum;
    [JsonIgnore, SerializeField, Range(0, 100)] protected int criticalChance;
    [JsonIgnore, SerializeField] protected int criticalDamage;
    [JsonIgnore, SerializeField, Range(0, 100)] protected int healthStealth;
    [JsonIgnore, SerializeField, Range(0, 100)] protected int skillCharge = 25;
    
    public int SpeedRoot => speed;
    public int HealthMaximumRoot => healthMaximum;
    public int AttackRoot => attack;
    public int ShieldRoot => shield;
    public int ComboMaximumRoot => comboMaximum;
    public int ComboChanceRoot => comboChance;
    public int HealthStealthRoot => healthStealth;
    public int DodgeRoot => dodge;
    public int CriticalChanceRoot => criticalChance;
    public int CriticalDamageRoot => criticalDamage;
    
    public Status() { }

    public Status(Status status)
    {
        speed = status.speed;
        healthMaximum = status.healthMaximum;
        dodge = status.dodge;
        attack = status.attack;
        shield = status.shield;
        comboChance = status.comboChance;
        comboMaximum = status.comboMaximum;
        criticalChance = status.criticalChance;
        criticalDamage = status.criticalDamage;
        healthStealth = status.healthStealth;
        skillCharge = status.skillCharge;
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
public class BuffInstance
{
    public BuffType type;
    public int duration;
    public Actor source;
    public Actor target;
    public float strength;
    public object extra;
}

[Serializable, Flags]
public enum ActorActionType
{
    None = 0,
    Attack = 1 << 0,
    Skill = 1 << 1,
    Relic = 1 << 2,
    Weapon = 1 << 3,
    All = ~0
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
        
        characters.Add(new CharacterStatus(null, characterInfo));
        
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
    public static readonly int Dodge = Animator.StringToHash("Dodge");
}