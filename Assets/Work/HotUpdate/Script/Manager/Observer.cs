using System;
using System.Collections.Generic;

public static class Observer
{
    private static readonly Dictionary<ObserverMessage, Action<object>> MessageDictionary =
        new Dictionary<ObserverMessage, Action<object>>();

    public static void Subscribe(ObserverMessage messageType, Action<object> listener)
    {
        MessageDictionary.TryAdd(messageType, null);

        MessageDictionary[messageType] += listener;
    }

    public static void Unsubscribe(ObserverMessage messageType, Action<object> listener)
    {
        if (MessageDictionary.ContainsKey(messageType))
        {
            MessageDictionary[messageType] -= listener;
            if (MessageDictionary[messageType] == null)
                MessageDictionary.Remove(messageType);
        }
    }

    public static void Trigger(ObserverMessage messageType, object param = null)
    {
        if (MessageDictionary.TryGetValue(messageType, out var value))
            value?.Invoke(param);
    }

    public static void Dispose()
    {
        MessageDictionary.Clear();
    }
}

public enum ObserverMessage
{
    MergeCardToGrid,
    MergeCardLevelUp,
    MergeCardRemove
}