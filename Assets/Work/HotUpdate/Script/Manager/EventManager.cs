using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class EventManager : SingletonUnityEternal<EventManager>
{
    public event Action<IActor, List<IActor>, ActionType> ActorActingEvent;

    public void ActorActing(IActor source, List<IActor> target, ActionType type)
    {
        switch (type)
        {
            case ActionType.Attack:

                break;
            
            case ActionType.Skill:

                break;
        }

        ActorActingEvent?.Invoke(source, target, type);
    }
}
