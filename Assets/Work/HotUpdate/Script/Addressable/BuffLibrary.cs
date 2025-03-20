using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "BuffLibrary", menuName = "BuffLibrary")]
public class BuffLibrary : ScriptableObject
{
    public List<BuffData> Buffs = new List<BuffData>();
}

[Serializable]
public struct BuffData
{
    public string ID;
    public Sprite Icon;
    public GameObject Effect_Add;
    public GameObject Effect_Process;
}

public struct BuffLogicData
{
    public readonly Action<BuffInstance> Add;
    public readonly Action<BuffInstance> Remove;
    public ObserverSubscribeData ObserverEvent;

    public BuffLogicData(ObserverSubscribeData observerEvent)
    {
        Add = null;
        Remove = null;
        ObserverEvent = observerEvent;
    }

    public BuffLogicData(Action<BuffInstance> add, Action<BuffInstance> remove, ObserverSubscribeData observerEvent)
    {
        Add = add;
        Remove = remove;
        ObserverEvent = observerEvent;
    }
}