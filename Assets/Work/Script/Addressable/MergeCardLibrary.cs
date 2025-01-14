using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "MergeCardLibrary", menuName = "MergeCardLibrary")]
public class MergeCardLibrary : ScriptableObject
{
    public List<MergeCardData> CommonMergeCards;
    public List<MergeCardData> CharacterMergeCards;
}

[Serializable]
public class MergeCardData
{
    public string ID;
    public string CardSpriteID;
    public int Level;
    public Sprite Icon;
    public Sprite CardBlock;
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