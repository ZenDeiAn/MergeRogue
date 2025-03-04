using UnityEngine;
using RaindowStudio.Utility;

[CreateAssetMenu(fileName = "UIData", menuName = "UIData")]
public class UILibrary : ScriptableObject
{
    public USD_String_Sprite Library = new USD_String_Sprite();
    public EnumPairList<MergeCardType, Sprite> MergedCardLibrary;
    public EnumPairList<MergeCardType, Sprite> MergedCardShapeLibrary;
    public EnumPairList<MergeLevel, Sprite> MergedCardShapeLevelLibrary;
    public EnumPairList<MergeLevel, Sprite> MergedLevelLibrary;
    
    public Sprite this[string key] => Library[key];
}