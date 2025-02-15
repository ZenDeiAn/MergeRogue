using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using HoaxGames;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Serialization;

public class CharacterPreview : MonoBehaviour, ICharacterDataInstance
{
    private static readonly int Preview = Animator.StringToHash("Preview");
    [SerializeField] private FootIK _footIK;
    [SerializeField] private Transform _characterPreviewTransform;
    [SerializeField] private Animator _animator;
    [SerializeField] private SkinnedMeshRenderer _meshRenderer;
    [SerializeField] private EnumPairList<WeaponSocketType, MeshFilter> _weaponSockets =
        new EnumPairList<WeaponSocketType, MeshFilter>();

    public EnumPairList<WeaponSocketType, MeshFilter> WeaponSockets => _weaponSockets;
    public Animator Animator => _animator;
    public SkinnedMeshRenderer MeshRenderer => _meshRenderer;
    public CharacterInfo Info { get; set; }

    private Vector3 _initPosition = Vector3.zero;
    private Quaternion _initRotation;
    
    public void Initialize()
    {
        _animator.SetBool(Preview, true);
        this.InitializeCharacterData(AddressableManager.Instance.CurrentCharacter);
        
        if (_initPosition == Vector3.zero)
        {
            _initPosition = _characterPreviewTransform.position;
            _initRotation = _characterPreviewTransform.rotation;
        }
        else
        {
            _characterPreviewTransform.position = _initPosition;
            _characterPreviewTransform.rotation = _initRotation;
        }
    }
    
    public void SetFootIKEnable(int enableNumber)
    {
        _footIK.enabled = enableNumber == 1;
    }
}
