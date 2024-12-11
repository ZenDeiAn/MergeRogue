using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using EPOOutline;
using RaindowStudio.Attribute;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Serialization;

public class MapBlock : MonoBehaviour
{
    [UneditableField] public Vector2Int index;
    
    public MapBlockEventType eventType;
    public Outlinable outline;

    [SerializeField, UneditableField] private bool _interactable;
    [SerializeField, UneditableField] private bool _interacted;
    
    public bool Interactable
    {
        get => _interactable;
        set
        {
            if (_interactable = value)
            {
                Animation_Interactable();
            }
        }
    }

    public bool Interacted
    {
        get => _interacted;
        set
        {
            if (_interacted = value)
            {
                Animation_Interacted();
            }
        }
    }

    public void Interact()
    {
        if (!Interactable)
            return;
        
        GameManager.Instance.AdventurePosition = index;

        /*switch (eventType)
        {
            case MapBlockEventType.Monster:
            case MapBlockEventType.Elite:
            case MapBlockEventType.Boss:
                LoadingManager.Instance.LoadScene("Battle");
                break;
            
            case MapBlockEventType.Rest:
                break;
            
            case MapBlockEventType.Store:
                break;
            
            case MapBlockEventType.Treasure:
                break;
        }*/
    }

    public void ActiveNextDeepNearestBlock()
    {
        //MapManager.Instance.mapBlocks[]
        foreach (var block in MapManager.Instance.GetNextDeepNearestBlocks(index))
        {
            block.Interactable = true;
        }
    }

    private void Animation_Interactable()
    {
        transform.DOLocalMoveY(3f, 2f).SetEase(Ease.InOutQuart);
        outline.enabled = true;
    }

    private void Animation_Interacted()
    {
        transform.DOShakePosition(1, new Vector3(0.5f, 0.5f, 0.5f), 25);
        transform.DOLocalMoveY(-2f, 1.75f).SetEase(Ease.InQuint).SetDelay(.25f);
        Color color = new Color(.25f, .25f, .25f);
        if (TryGetComponent(out MeshRenderer meshRenderer))
        {
            meshRenderer.material.DOColor(color, 1).SetDelay(.25f);
        }
        foreach (Transform child in transform)
        {
            if (child.TryGetComponent(out meshRenderer))
            {
                meshRenderer.material.DOColor(color, 1).SetDelay(.25f);
            }
        }
        outline.enabled = false;
    }

    public void Initialize(Vector2Int columnRow, bool interactable = false, bool interacted = false)
    {
        index = columnRow;
        Interactable = interactable;
        Interacted = interacted;
    }
}

[Serializable]
public enum MapBlockEventType
{
    None,   // Not reachable.
    Monster,
    Elite,
    RandomEvent,
    Rest,
    Store,
    Treasure,
    Boss
}