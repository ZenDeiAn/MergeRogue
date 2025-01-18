using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "CharacterDataSet", menuName = "CharacterDataSet")]
public class CharacterInfo : ScriptableObject, IActorData
{
    [SerializeField] private Status _status;
    [SerializeField] private ActorAttackData _attackData;
    [SerializeField] private ActorSkillData _skillData;
    
    public int InitialHandCardAmount;
    
    public Mesh mesh;
    public Material material;
    public Avatar avatar;
    public Sprite icon;
    public CharacterRank rank;
    public RuntimeAnimatorController rac_act;
    public RuntimeAnimatorController rac_showcase;
    public List<WeaponData> weaponDataList;
    public string ID => name;
    public Status Status { get => _status; set => _status = value; }
    public ActorAttackData AttackData => _attackData;
    public ActorSkillData SkillData => _skillData;
}