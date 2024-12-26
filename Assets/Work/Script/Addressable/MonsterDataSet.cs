using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "MonsterDataSet", menuName = "MonsterDataSet")]
public class MonsterDataSet : ScriptableObject, IActorData
{
    public GameObject prefab;
    [SerializeField] private MonsterType _type;
    [SerializeField] private Status _status;
    [SerializeField] private ActorAttackData _attackData;
    [SerializeField] private ActorSkillData _skillData;

    public string ID => name;
    public Status Status { get => _status; set => _status = value; }
    public MonsterType Type => _type;
    public ActorAttackData AttackData => _attackData;
    public ActorSkillData SkillData => _skillData;
}

[Serializable]
public enum MonsterType
{
    Minion,
    Elite,
    Boss
}