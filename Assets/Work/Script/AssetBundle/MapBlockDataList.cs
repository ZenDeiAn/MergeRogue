using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "MapBlockDataList", menuName = "MapBlockDataList")]
public class MapBlockDataList : ScriptableObject
{
    public List<MapBlockData> MapBlockData = new List<MapBlockData>();
}

[Serializable]
public struct MapBlockDecorateData
{
    public Vector3 position;
    public Vector3 rotation;
    public Vector3 scale;
    public Mesh mesh;
    public Material material;
}

[Serializable]
public struct MapBlockData
{
    public MapBlockEventType eventType;
    public Mesh mesh;
    public Material material;
    public List<MapBlockDecorateData> decorateData;
}
