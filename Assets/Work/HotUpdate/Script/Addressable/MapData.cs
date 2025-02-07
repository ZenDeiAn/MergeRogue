using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;

[CreateAssetMenu(fileName = "MapData", menuName = "MapData")]
public class MapData : ScriptableObject
{
    public List<GameObject> MapBlockPrefabs = new List<GameObject>();
    public List<MapBlockProbability> MapBlockProbabilities = new List<MapBlockProbability>();
}

[Serializable]
public struct MapBlockProbability
{
    public int deep;
    public EnumPairList<MapBlockEventType, int> probability;
}

/*
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
    public Material material;
    public List<MapBlockDecorateData> decorateData;
}*/

