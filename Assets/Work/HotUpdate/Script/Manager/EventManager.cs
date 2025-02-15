using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class EventManager : SingletonUnityEternal<EventManager>
{
    public event Action<IActor, List<IActor>, ActType> ActorActingEvent;

    public void ActorActing(IActor source, List<IActor> target, ActType type)
    {
        source.ActingType = type;
        switch (type)
        {
            case ActType.Attack:
                
                break;
            
            case ActType.Skill:
                
                break;
        }

        ActorActingEvent?.Invoke(source, target, type);
    }
}
