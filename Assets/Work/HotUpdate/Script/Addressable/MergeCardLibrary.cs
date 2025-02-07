using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using RaindowStudio.Utility;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "MergeCardLibrary", menuName = "MergeCardLibrary")]
public class MergeCardLibrary : ScriptableObject
{
    public List<MergeCardData> MergeCards;
}

[Serializable, DrawWithUnity]
public class MergeCardData
{
    public string ID;
    public MergeCardType Type;
    public Sprite Icon;
    public float RandomWeight = 1;
    public EnumPairList<MergeLevel, float> Multiplies;
    public MergeCardShapeData CardShape;
}

[Serializable]
public class MergeCardShapeData
{
    [FormerlySerializedAs("GridSize")] public Vector2Int Size;
    public List<Vector2Int> Points = new List<Vector2Int>();

    public MergeCardShapeData() { }

    public MergeCardShapeData(MergeCardShapeData mergeCardShapeData)
    {
        Size = mergeCardShapeData.Size;
        Points = new List<Vector2Int>(mergeCardShapeData.Points);
    }

    public int Count => Points.Count;
    public Vector2Int this[int index] => Points[index];
}