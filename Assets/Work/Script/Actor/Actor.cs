using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IActor
{
    public ActorStatus Status { get; set; }
    
    public void Attack(IActor target);
    public void Skill(IActor target);
    public void Initialize();
}

public static class ActorUtility
{
    public static void InitializeStatus(this IActor self,Status statusOriginal)
    {
        self.Status = new ActorStatus(statusOriginal);
    }

    public static void Act(this IActor self, IActor target, ActType type)
    {
        EventManager.Instance.ActorActing(self, target, type);
    }
}

[Serializable]
public enum ActType
{
    Attack,
    Skill
}

public interface IActorData
{
    public string ID { get; }
    public Status Status { get; set; }
    public ActorAttackData AttackData { get; }
    public ActorSkillData SkillData { get; }
}

[Serializable]
public struct ActorAttackData
{
    public string name;
    public string description;
    public Sprite icon;
    public GameObject effectPrefab;
    public float multiply;
}

[Serializable]
public struct ActorSkillData
{
    public string name;
    public string description;
    public Sprite icon;
    public GameObject effectPrefab;
    public bool targetHostile;      // Enemy targeting or not
    public int number;
    public float multiply;
    public BuffType buffType;
    public int buffRound;
}