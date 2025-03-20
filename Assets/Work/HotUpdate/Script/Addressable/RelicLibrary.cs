using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "RelicLibrary", menuName = "RelicLibrary")]
public class RelicLibrary : ScriptableObject
{
    public List<RelicData> Relics = new List<RelicData>();
}

[Serializable]
public struct RelicData
{
    public string ID;
    public Sprite Icon;
    public object ExtraData;
}