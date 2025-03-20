using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;

public static class Observer
{
    private static readonly Dictionary<ObserverMessage, List<ObserverSubscribeData>> MessageDictionary =
        new Dictionary<ObserverMessage, List<ObserverSubscribeData>>();
    
    public static bool IsDelivering { get; private set; } = false;

    public static void SubscribeAll(this IObserverSubscriber subscriber)
    {
        foreach (var data in subscriber.Subscriptions)
        {
            Subscribe(data);
        }
    }

    public static void UnsubscribeAll(this IObserverSubscriber subscriber)
    {
        foreach (var data in subscriber.Subscriptions)
        {
            Unsubscribe(data);
        }
    }

    public static void Subscribe(ObserverSubscribeData data)
    {
        MessageDictionary.TryAdd(data.MessageType, new List<ObserverSubscribeData>());

        MessageDictionary[data.MessageType].Add(data);
    }

    public static void Unsubscribe(ObserverSubscribeData data)
    {
        if (MessageDictionary.TryGetValue(data.MessageType, out var value))
        {
            value.Remove(data);
        }
    }

    public static void Trigger(ObserverMessage messageType, object param = null, Action deliverComplete = null)
    {
        if (!MessageDictionary.TryGetValue(messageType, out var val) || val.Count == 0)
            return;
            
        IsDelivering = true;
        GameManager.Instance.StartCoroutine(TriggerQueueMessages(val, param, deliverComplete));
    }

    private static IEnumerator TriggerQueueMessages(List<ObserverSubscribeData> list, object param, Action deliverComplete)
    {
        foreach (var data in list)
        {
            data.Listener?.Invoke(param);
            if (data.Time > 0)
            {
                yield return RaindowStudio.Utility.Utility.GetWaitForSecond(data.Time);
            }
        }
        IsDelivering = false;
        deliverComplete?.Invoke();
    }
    
    public static void Dispose()
    {
        MessageDictionary.Clear();
    }
}

public enum ObserverMessage
{
    None,
    MergeCardToGrid,
    MergeCardLevelUp,
    MergeCardRemove,
    TurnBegin,
    TurnEnd,
    CharacterActionBegin,
    CharacterActionEnd,
    MonsterActionBegin,
    MonsterActionEnd,
    CharacterAttack,
    CharacterSkill,
    MonsterAttack,
    MonsterSkill,
}

public readonly struct ObserverSubscribeData : IEquatable<ObserverSubscribeData>
{
    public readonly ObserverMessage MessageType;
    public readonly Action<object> Listener;
    public readonly float Time;
    
    public ObserverSubscribeData(ObserverMessage messageType, Action<object> listener)
    {
        MessageType = messageType;
        Listener = listener;
        Time = 0;
    }
    
    public ObserverSubscribeData(ObserverMessage messageType, Action<object> listener, float time)
    {
        MessageType = messageType;
        Listener = listener;
        Time = time;
    }

    public bool Equals(ObserverSubscribeData other)
    {
        return MessageType == other.MessageType && Equals(Listener, other.Listener) && Time.Equals(other.Time);
    }

    public override bool Equals(object obj)
    {
        return obj is ObserverSubscribeData other && Equals(other);
    }

    public override int GetHashCode()
    {
        return HashCode.Combine((int)MessageType, Listener, Time);
    }
}

public interface IObserverSubscriber
{
    public List<ObserverSubscribeData> Subscriptions { get; }
}
