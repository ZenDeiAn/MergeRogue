using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;

[CreateAssetMenu(fileName = "UIData", menuName = "UIData")]
public class UIData : ScriptableObject
{
    public List<UIDataSet> UIDataList;
    public EnumPairList<MergeCardType, Sprite> MergedCardSprites;
}
