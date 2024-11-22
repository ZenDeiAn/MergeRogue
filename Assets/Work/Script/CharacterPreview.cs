using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using HoaxGames;
using RaindowStudio.Utility;
using UnityEngine;

public class CharacterPreview : MonoBehaviour
{
    [SerializeField] private Animator animator;
    [SerializeField] private FootIK footIK;
    [SerializeField] private SkinnedMeshRenderer meshRenderer;

    [SerializeField]
    private EnumPairList<WeaponSocketType, MeshFilter> weaponSocket =
        new EnumPairList<WeaponSocketType, MeshFilter>(); 
    
    public void Initialize()
    {
        CharacterData data = GameManager.Instance.CurrentCharacterData;
        animator.avatar = data.avatar;
        meshRenderer.sharedMesh = data.mesh;
        animator.runtimeAnimatorController = data.rac_showcase;

        List<WeaponSocketType> weaponSocketTypes = Enum.GetValues(typeof(WeaponSocketType)).Cast<WeaponSocketType>().ToList();
        for (int i = 0; i < weaponSocketTypes.Count; ++i)
        {
            if (i < data.weaponDataList.Count)
            {
                var weaponData = data.weaponDataList[i];
                WeaponSocketType type = weaponData.socketType;
                weaponSocket[type].gameObject.SetActive(true);
                weaponSocket[type].mesh = weaponData.mesh;
                weaponSocket[type].transform.localPosition = weaponData.offsetPosition;
                weaponSocket[type].transform.localEulerAngles = weaponData.offsetRotation;
                weaponSocketTypes.Remove(type);
            }
            else
            {
                weaponSocket[weaponSocketTypes[i]].gameObject.SetActive(false);
            }
        }
    }
    
    public void SetFootIKEnable(int enableNumber)
    {
        footIK.enabled = enableNumber == 1;
    }
}
