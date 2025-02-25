using System;
using System.Collections.Generic;
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

    private void UpdateStatus(string property, float value)
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
        self.Status = new ActorStatus(actorData.Status);
        self.transform.localPosition = Vector3.zero;
        self.transform.localRotation = Quaternion.identity;
        self.transform.localScale = Vector3.one;
        self.canvasActor.Initialize(self);
    }
    
    public static void Initialize(this Actor self, CharacterStatus characterStatus)
    {
        self.gameObject.name = characterStatus.ID;
        self.Status = new ActorStatus(characterStatus);
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