using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CharacterData", menuName = "Create/CharacterData")]
public class CharacterData : ActorData
{
    public Mesh mesh;
    public Avatar avatar;
    public RuntimeAnimatorController rac_act;
    public RuntimeAnimatorController rac_showcase;
    public List<WeaponData> weaponData;
}
