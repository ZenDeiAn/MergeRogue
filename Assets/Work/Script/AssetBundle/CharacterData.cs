using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

[CreateAssetMenu(fileName = "CharacterData", menuName = "CharacterData")]
public class CharacterData : ActorData
{
    public Mesh mesh;
    public Material material;
    public Avatar avatar;
    public Sprite icon;
    public CharacterRank rank;
    public RuntimeAnimatorController rac_act;
    public RuntimeAnimatorController rac_showcase;
    public List<WeaponData> weaponDataList;
}
