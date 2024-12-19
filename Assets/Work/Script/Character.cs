using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.Utility;
using UnityEngine;

public class Character : MonoBehaviour, ICharacterDataInstance, IActor 
{
    [SerializeField] private Animator _animator;
    [SerializeField] private SkinnedMeshRenderer _meshRenderer;
    [SerializeField] private EnumPairList<WeaponSocketType, MeshFilter> _weaponSockets =
        new EnumPairList<WeaponSocketType, MeshFilter>();

    public EnumPairList<WeaponSocketType, MeshFilter> WeaponSockets => _weaponSockets;
    public Animator Animator => _animator;
    public SkinnedMeshRenderer MeshRenderer => _meshRenderer;
    public CharacterDataSet CharacterDataSet { get; set; }

    public ActorStatus Status { get; set; }

    public void Initialize()
    {
        this.InitializeCharacterData(AddressableManager.Instance.CurrentCharacterData);
        Animator.runtimeAnimatorController = CharacterDataSet.rac_act;
        this.InitializeStatus(CharacterDataSet.Status);
    }
}

public interface ICharacterDataInstance
{
    public EnumPairList<WeaponSocketType, MeshFilter> WeaponSockets { get; }
    public Animator Animator { get; }
    public SkinnedMeshRenderer MeshRenderer { get; }
    public CharacterDataSet CharacterDataSet { get; set; }
}

public static class CharacterUtility
{
    public static void InitializeCharacterData(this ICharacterDataInstance self, CharacterDataSet dataSet)
    {
        self.CharacterDataSet = dataSet;
        self.Animator.avatar = dataSet.avatar;
        self.MeshRenderer.sharedMesh = dataSet.mesh;
        self.MeshRenderer.material = dataSet.material;
        //character.Animator.runtimeAnimatorController = data.rac_showcase;

        List<WeaponSocketType> weaponSocketTypes = Enum.GetValues(typeof(WeaponSocketType)).Cast<WeaponSocketType>().ToList();
        for (int i = 0; i < weaponSocketTypes.Count; ++i)
        {
            if (i < dataSet.weaponDataList.Count)
            {
                var weaponData = dataSet.weaponDataList[i];
                WeaponSocketType type = weaponData.socketType;
                self.WeaponSockets[type].gameObject.SetActive(true);
                self.WeaponSockets[type].mesh = weaponData.mesh;
                self.WeaponSockets[type].transform.localPosition = weaponData.offsetPosition;
                self.WeaponSockets[type].transform.localEulerAngles = weaponData.offsetRotation;
                weaponSocketTypes.Remove(type);
            }
            else
            {
                self.WeaponSockets[weaponSocketTypes[i]].gameObject.SetActive(false);
            }
        }
    }
}

[Serializable]
public enum CharacterRank
{
    A,
    S
}