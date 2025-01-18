using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;


[CreateAssetMenu(fileName = "MonsterProbability", menuName = "MonsterProbability")]
public class MonsterProbability : ScriptableObject
{
    public List<MonsterProbabilityData> MonsterProbabilities = new List<MonsterProbabilityData>();
}

[Serializable]
public struct MonsterProbabilityData
{
    public int deep;
    public List<MonsterGroup> monsterGroup;
}

[Serializable]
public struct MonsterGroup
{
    public List<MonsterInfo> monsters;
}