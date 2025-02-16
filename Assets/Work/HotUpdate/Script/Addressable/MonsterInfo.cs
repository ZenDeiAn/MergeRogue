using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "MonsterDataSet", menuName = "MonsterDataSet")]
public class MonsterInfo : ScriptableObject, IActorData
{
    public GameObject prefab;
    [SerializeField] private MonsterType _type;
    [SerializeField] private Status _status;

    public string ID => name;
    public Status Status { get => _status; set => _status = value; }
    public MonsterType Type => _type;
}

[Serializable]
public enum MonsterType
{
    None,
    Minion,
    Elite,
    Boss
}