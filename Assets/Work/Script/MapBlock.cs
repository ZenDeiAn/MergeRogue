using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MapBlock : MonoBehaviour
{
    public MapBlockEventType eventType;
    [SerializeField] private MeshFilter meshFilter;
    [SerializeField] private MeshRenderer meshRenderer;
    [SerializeField] private ObjectPool obp_decorate;

    public void Initialize(Vector3 position, Quaternion rotation, MapBlockEventType type, Mesh mesh, Material material, List<MapBlockDecorateData> decorates)
    {
        transform.position = position;
        transform.rotation = rotation;
        eventType = type;
        meshFilter.mesh = mesh;
        meshRenderer.material = material;
        obp_decorate.RecycleAll();
        foreach (var decorate in decorates)
        {
            Transform dt = obp_decorate.GetObject().transform;
            dt.localPosition = decorate.position;
            dt.localEulerAngles = decorate.rotation;
            dt.localScale = decorate.scale;
            dt.GetComponent<MeshFilter>().mesh = decorate.mesh;
            dt.GetComponent<MeshRenderer>().material = decorate.material;
        }
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