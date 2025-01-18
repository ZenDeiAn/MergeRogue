using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "UIData", menuName = "UIData")]
public class UILibrary : ScriptableObject
{
    public USD_String_Sprite Library = new USD_String_Sprite();
    public EnumPairList<MergeCardType, Sprite> MergedCardLibrary;
    public EnumPairList<MergeLevel, Sprite> MergedLevelLibrary;
    
    public Sprite this[string key] => Library[key];
}