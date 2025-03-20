using System;
using System.Collections.Generic;
using Unity.Plastic.Newtonsoft.Json;
using UnityEditor;
using UnityEngine;

public abstract class Actor : MonoBehaviour
{
    public Animator animator;
    public SkinnedMeshRenderer meshRenderer;
    public CanvasActor canvasActor;
    public Action ActionTriggerEvent;
    
    public abstract IActorData ActorData { get; }
    public abstract ActorType ActorType { get;}
    public abstract ActType ActingType { get; set; }
    public abstract ActorStatus Status { get; set; }

    private void UpdateStatus(string property, int value)
    {
        switch (property)
        {
            case nameof(ActorStatus.buff):
                int idle;
                for (idle = (int)BuffType._SplitForAnimation; idle > 0; --idle)
                {
                    BuffType buffType = (BuffType)idle;
                    if (Status.buff.ContainsKey(buffType))
                    {
                        if (Status.buff[buffType].duration > 0)
                        {
                            break;
                        }
                    }
                }
                animator.SetFloat(AnimationHashKey.Idle, idle);
                break;
        }

        canvasActor.UpdateCanvas();
    }
    
    public void TriggerAnimationEvent()
    {
        ActionTriggerEvent?.Invoke();
    }

    protected virtual void Initialize()
    {
        Status.UpdateStatus += UpdateStatus;
        animator.SetFloat(AnimationHashKey.Idle, 0);
    }
}

public interface IActorData
{
    public string ID { get; }
    public Status Status { get; set; }
    
}

public static class ActorUtility
{
    public static void Initialize(this Actor self, IActorData actorData)
    {
        self.gameObject.name = actorData.ID;
        self.Status = new ActorStatus(self, actorData.Status);
        self.transform.localPosition = Vector3.zero;
        self.transform.localRotation = Quaternion.identity;
        self.transform.localScale = Vector3.one;
        self.canvasActor.Initialize(self);
    }
    
    public static void Initialize(this Actor self, CharacterStatus characterStatus)
    {
        self.gameObject.name = characterStatus.ID;
        self.Status = new ActorStatus(self, characterStatus);
        self.transform.localPosition = Vector3.zero;
        self.transform.localRotation = Quaternion.identity;
        self.transform.localScale = Vector3.one;
        self.canvasActor.Initialize(self);
    }

    public static void Act(this Actor self, List<Actor> target, ActType type)
    {
        EventManager.Instance.ActorActing(self, target, type);
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
    public int comboChanceAdditional;
    [JsonProperty]
    public int healthStealthAdditional;
    [JsonProperty]
    public int dodgeAdditional;
    [JsonProperty]
    public int criticalChanceAdditional;
    [JsonProperty]
    public int criticalDamageAdditional;
    [JsonIgnore]
    public int skillCharging;
    [JsonProperty]
    public int skillChargeAdditional;
    [JsonIgnore]
    public Dictionary<BuffType, BuffInstance> buff = new Dictionary<BuffType, BuffInstance>();
    public Action<string, int> UpdateStatus;

    private Actor _actor;

    public int SpeedCalculated => speed + speedAdditional;
    public int Health => health;
    public int HealthMaximumCalculated => healthMaximum + healthMaximumAdditional;
    public int AttackCalculated => attack + attackAdditional;
    public int ShieldCalculated => shield + shieldAdditional;
    public int ArmedShield => armedShield;
    public int ComboMaximumCalculated => comboMaximum + comboMaximumAdditional;
    public int ComboChanceCalculated => comboChance + comboChanceAdditional;
    public int HealthStealthCalculated => healthStealth + healthStealthAdditional;
    public int DodgeCalculated => dodge + dodgeAdditional;
    public int CriticalChanceCalculated => criticalChance + criticalChanceAdditional;
    public int CriticalDamageCalculated => criticalDamage + criticalDamageAdditional;
    public int SkillChargeCalculated => skillCharge + skillChargeAdditional;
    public Actor Actor => _actor;

    public void AddBuff(BuffInstance buffInstance)
    {
        buffInstance.target = _actor;
        buff[buffInstance.type] = buffInstance;
        
        if (BattleLogicLibrary.Instance.BuffLibrary.ContainsKey(buffInstance.type))
        {
            BuffLogicData bld = BattleLogicLibrary.Instance.BuffLibrary[buffInstance.type];
            bld.Add?.Invoke(buffInstance);
            Observer.Subscribe(bld.ObserverEvent);
        }
        
        UpdateStatus(nameof(buff), buffInstance.duration);
    }
    
    public void BuffProcess(BuffType buffType)
    {
        if (!BuffAlive(buffType))
            return;

        buff[buffType].duration -= 1;

        UpdateStatus(nameof(buff), buff[buffType].duration);
                
        if (!BuffAlive(buffType))
        {
            RemoveBuff(buffType);
        }
    }

    public void RemoveBuff(BuffType buffType)
    {
        if (BattleLogicLibrary.Instance.BuffLibrary.ContainsKey(buffType))
        {
            BuffLogicData bld = BattleLogicLibrary.Instance.BuffLibrary[buffType];
            bld.Remove?.Invoke(buff[buffType]);
            Observer.Unsubscribe(bld.ObserverEvent);
        }
        
        if (buff.ContainsKey(buffType))
        {
            buff.Remove(buffType);
        }
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
        skillCharging = Mathf.Min(clear ? 0 : skillCharging + SkillChargeCalculated, 100);
        UpdateStatus(nameof(skillCharging), skillCharging);
    }
    
    public ActorStatus() { }

    public ActorStatus(Actor actor, Status status) : base(status)
    {
        _actor = actor;
        health = HealthMaximumRoot;
        armedShield = 0;
        buff.Clear();
        skillCharging = 0;
    }

    public ActorStatus(Actor actor, ActorStatus status) : base(status)
    {
        _actor = actor;
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