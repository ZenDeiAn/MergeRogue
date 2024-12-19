using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "CharacterDataSet", menuName = "CharacterDataSet")]
public class CharacterDataSet : ScriptableObject, IActorData
{
    [SerializeField] private string _id;
    [SerializeField] private Status _status;
    public Mesh mesh;
    public Material material;
    public Avatar avatar;
    public Sprite icon;
    public CharacterRank rank;
    public RuntimeAnimatorController rac_act;
    public RuntimeAnimatorController rac_showcase;
    public List<WeaponData> weaponDataList;
    public string ID { get => _id; set => _id = value; } 
    public Status Status { get => _status; set => _status = value; } 
}