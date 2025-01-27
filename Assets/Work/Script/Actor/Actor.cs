using System;
using System.Collections.Generic;
using UnityEngine;

public interface IActor
{
    public ActorType ActorType { get; }
    public ActorStatus Status { get; set; }
    public ActorAttackData AttackData { get; }
    public ActorSkillData SkillData { get; }
    public void Attack(List<IActor> target);
    public void Skill(List<IActor> target);
    public void Initialize();
}

public static class ActorUtility
{
    public static void InitializeStatus(this IActor self, Status status)
    {
        self.Status = new ActorStatus(status);
    }

    public static void Act(this IActor self, List<IActor> target, ActionType type)
    {
        EventManager.Instance.ActorActing(self, target, type);
    }
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
}
