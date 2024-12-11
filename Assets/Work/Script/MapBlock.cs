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
    
    [SerializeField] private Outlinable outlineSelectable;
    [SerializeField] private Outlinable outlineInteracted;
    [SerializeField] private ParticleSystem _particle;

    [SerializeField, UneditableField] private bool _interactable;
    [SerializeField, UneditableField] private bool _interacted;
    
    private MapBlockState _state;

    public MapBlockState State
    {
        get => _state;
        set
        {
            switch (_state = value)
            {
                case MapBlockState.Selectable:
                    Animation_Selectable();
                    break;
                
                case MapBlockState.Interacted:
                    Animation_Interacted();
                    break;
                
                case MapBlockState.Abandoned:
                    Animation_Abandoned();
                    break;
            }
        }
    }

    public void Interact()
    {
        if (State != MapBlockState.Selectable)
            return;
        
        GameManager.Instance.AdventurePosition = index;
        State = MapBlockState.Interacted;
        _particle.Play();

        MapManager mm = MapManager.Instance;
        mm.State = MapState.Move;
        foreach (var block in mm.GetSameDeepBlocks(index))
        {
            block.State = MapBlockState.Abandoned;
        }
    }

    private void Animation_Interacted()
    {
        transform.DOLocalMoveY(2f, 2f).SetEase(Ease.InOutQuart);
        outlineSelectable.gameObject.SetActive(false);
        outlineInteracted.gameObject.SetActive(true);
    }

    private void Animation_Selectable()
    {
        transform.DOLocalMoveY(3f, 2f).SetEase(Ease.InOutQuart);
        outlineSelectable.gameObject.SetActive(true);
    }

    private void Animation_Abandoned()
    {
        transform.DOShakePosition(1, new Vector3(0.5f, 0.5f, 0.5f), 25);
        transform.DOLocalMoveY(-1.75f, 1.75f).SetEase(Ease.InQuint).SetDelay(.25f);
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
        outlineSelectable.gameObject.SetActive(false);
    }

    public void Initialize(Vector2Int columnRow, MapBlockState state)
    {
        index = columnRow;
        State = state;
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

[Serializable]
public enum MapBlockState
{
    Idle,
    Selectable,
    Interacted,
    Abandoned
}

[Serializable]
public class MapBlockData
{
    public MapBlockEventType EventType { get; set; }
    public MapBlockState State { get; set; }
    
    public MapBlockData() { }

    public MapBlockData(MapBlockEventType eventType)
    {
        EventType = eventType;
    }

    public MapBlockData(MapBlockEventType eventType, MapBlockState state)
    {
        EventType = eventType;
        State = state;
    }
}