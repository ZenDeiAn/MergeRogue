using System.Collections;
using System.Collections.Generic;
using HoaxGames;
using UnityEngine;

public class CharacterPreview : MonoBehaviour
{
    [SerializeField] private Animator animator;
    [SerializeField] private FootIK footIK;
    [SerializeField] private SkinnedMeshRenderer meshRenderer;
    
    public void Initialize()
    {
        CharacterData data = GameManager.Instance.CurrentCharacterData;
        animator.avatar = data.avatar;
        meshRenderer.sharedMesh = data.mesh;
        animator.runtimeAnimatorController = data.rac_showcase;
        
        foreach (var weapon in data.weaponData)
        {
            
        }
    }
    
    public void SetFootIKEnable(int enableNumber)
    {
        footIK.enabled = enableNumber == 1;
    }
}
