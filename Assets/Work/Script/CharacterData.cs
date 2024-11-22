using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "CharacterData", menuName = "Create/CharacterData")]
public class CharacterData : ActorData
{
    public Mesh mesh;
    public Avatar avatar;
    public RuntimeAnimatorController rac_act;
    public RuntimeAnimatorController rac_showcase;
    [FormerlySerializedAs("weaponData")] public List<WeaponData> weaponDataList;
}
