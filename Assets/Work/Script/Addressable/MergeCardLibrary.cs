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
    public EnumPairList<MergeLevel, float> Multiplies;
    public MergeCardShapeData CardShape;
}

[Serializable]
public class MergeCardShapeData
{
    public Vector2Int GridSize;
    public List<MergeCardShapeColumn> ShapeGrid = new List<MergeCardShapeColumn>();

    public MergeCardShapeData() { }

    public MergeCardShapeData(MergeCardShapeData mergeCardShapeData)
    {
        GridSize = mergeCardShapeData.GridSize;
        ShapeGrid = new List<MergeCardShapeColumn>(mergeCardShapeData.ShapeGrid);
    }

    public MergeCardShapeColumn this[int x] => ShapeGrid[x];
    public bool this[int x, int y] => ShapeGrid[x].Column[y];
    public bool this[Vector2Int position] => ShapeGrid[position.x].Column[position.y];
}

[Serializable]
public class MergeCardShapeColumn
{
    [FormerlySerializedAs("Row")] public List<bool> Column = new List<bool>();
    public int Count => Column.Count;
    public bool this[int y] => Column[y]; 
}