using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "MergeCardLibrary", menuName = "MergeCardLibrary")]
public class MergeCardLibrary : ScriptableObject
{
    public List<MergeCardData> MergeCards;
}

[Serializable]
public class MergeCardData
{
    public string Name;
    public string Description;
    public MergeCardType type;
    public Sprite Icon;
    public List<float> MultiplyByLevel;
    public MergeCardShapeData CardShape;
}

[Serializable]
public class MergeCardShapeData
{
    public Vector2Int GridSize;
    public List<MergeCardShapeRow> ShapeGrid = new List<MergeCardShapeRow>();

    public MergeCardShapeData() { }

    public MergeCardShapeData(MergeCardShapeData mergeCardShapeData)
    {
        GridSize = mergeCardShapeData.GridSize;
        ShapeGrid = new List<MergeCardShapeRow>(mergeCardShapeData.ShapeGrid);
    }
}

[Serializable]
public class MergeCardShapeRow
{
    public List<bool> Row = new List<bool>();
}