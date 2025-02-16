using System;
using System.Collections.Generic;
using UnityEngine;

public abstract class Actor : MonoBehaviour, IActor
{
    public Animator animator;
    public SkinnedMeshRenderer meshRenderer;
    public CanvasActor canvasActor;
    public Action AnimationTriggerEvent;
    public abstract IActorData ActorData { get; }
    public abstract ActorType ActorType { get;}
    public abstract ActType ActingType { get; set; }
    public abstract ActorStatus Status { get; set; }
    public virtual void Initialize(IActorData actorData) { }

    public void TriggerAnimationEvent()
    {
        AnimationTriggerEvent?.Invoke();
    }
}

public interface IActor
{
    public IActorData ActorData { get; }
    public ActorType ActorType { get; }
    public ActType ActingType { get; set; }
    public ActorStatus Status { get; set; }
    public void Initialize(IActorData actorData);
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

    public static void Act(this Actor self, List<Actor> target, ActType type)
    {
        EventManager.Instance.ActorActing(self, target, type);
    }
}