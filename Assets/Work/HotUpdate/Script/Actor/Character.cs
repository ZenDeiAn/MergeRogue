using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.Utility;
using UnityEngine;

public class Character : Actor, ICharacterDataInstance
{
    [SerializeField] private EnumPairList<WeaponSocketType, MeshFilter> _weaponSockets =
        new EnumPairList<WeaponSocketType, MeshFilter>();

    private AdventureManager _avm;

    public int Index { get; set; } = -1;
    public EnumPairList<WeaponSocketType, MeshFilter> WeaponSockets => _weaponSockets;
    public Animator Animator => animator;
    public SkinnedMeshRenderer MeshRenderer => meshRenderer;
    public CharacterInfo Info { get; set; }

    public override IActorData ActorData => Info;
    public override ActorType ActorType => ActorType.Ally;
    public override ActType ActingType { get; set; }
    public override ActorStatus Status { get => _avm.Data.PlayerStatus.characters[Index];
        set => _avm.Data.PlayerStatus.characters[Index] =
            new CharacterStatus(_avm.Data.PlayerStatus.characters[Index].ID, value); }

    public void Initialize(int index, CharacterStatus characterStatus)
    {
        _avm = AdventureManager.Instance;
        Index = index; 
        this.InitializeCharacterData(AddressableManager.Instance.Character[characterStatus.ID]);
        this.Initialize(characterStatus);
        
        base.Initialize();
    }
}

public interface ICharacterDataInstance
{
    public EnumPairList<WeaponSocketType, MeshFilter> WeaponSockets { get; }
    public Animator Animator { get; }
    public SkinnedMeshRenderer MeshRenderer { get; }
    public CharacterInfo Info { get; set; }
}

public static class CharacterUtility
{
    public static void InitializeCharacterData(this ICharacterDataInstance self, CharacterInfo info)
    {
        self.Info = info;
        self.Animator.avatar = info.avatar;
        self.MeshRenderer.sharedMesh = info.mesh;
        //self.MeshRenderer.material = info.material;
        self.Animator.runtimeAnimatorController = info.animation;

        List<WeaponSocketType> weaponSocketTypes = Enum.GetValues(typeof(WeaponSocketType)).Cast<WeaponSocketType>().ToList();
        for (int i = 0; i < weaponSocketTypes.Count; ++i)
        {
            if (i < info.weaponDataList.Count)
            {
                var weaponData = info.weaponDataList[i];
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