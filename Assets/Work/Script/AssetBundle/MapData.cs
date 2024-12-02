using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;

[CreateAssetMenu(fileName = "MapData", menuName = "MapBlockDataList")]
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
