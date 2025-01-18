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
    public CharacterInfo Info { get; set; }

    public ActorType ActorType => ActorType.Ally;
    public ActorStatus Status { get; set; }
    public ActorAttackData AttackData => Info.AttackData;
    public ActorSkillData SkillData => Info.SkillData;
    public ActionType CurrentAction { get; set; }

    public void Attack(List<IActor> target)
    {
        this.Act(target, ActionType.Attack);
    }

    public void Skill(List<IActor> target)
    {
        this.Act(target, ActionType.Skill);
    }

    public void Initialize()
    {
        this.InitializeCharacterData(AddressableManager.Instance.CurrentCharacter);
        Animator.runtimeAnimatorController = Info.rac_act;
        this.InitializeStatus(AdventureManager.Instance.PlayerStatus.CharacterStatus);
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
        self.MeshRenderer.material = info.material;
        //character.Animator.runtimeAnimatorController = data.rac_showcase;

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

[Serializable]
public enum CharacterRank
{
    A,
    S
}