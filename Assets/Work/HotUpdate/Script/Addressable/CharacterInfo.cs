using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "CharacterDataSet", menuName = "CharacterDataSet")]
public class CharacterInfo : ScriptableObject, IActorData
{
    [SerializeField] private Status _status;
    public AnimatorOverrideController animation;

    public Mesh mesh;
    public Material material;
    public Avatar avatar;
    public Sprite icon;
    public CharacterRank rank;
    public List<WeaponData> weaponDataList;
    
    public string ID => name;

    public Status Status
    {
        get => _status;
        set => _status = value;
    }
}