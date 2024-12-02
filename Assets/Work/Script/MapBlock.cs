using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MapBlock : MonoBehaviour
{
    public int deep;
    public bool interactable = true;
    public bool interacted = false;
    public MapBlockEventType eventType;

    public void Initialize(Vector3 position, Quaternion rotation)
    {
        transform.position = position;
        transform.rotation = rotation;
    }
}

[Serializable]
public enum MapBlockEventType
{
    None,   // Not reachable.
    Monster,
    Elite,
    RandomEvent,
    Rest,
    Store,
    Treasure,
    Boss
}