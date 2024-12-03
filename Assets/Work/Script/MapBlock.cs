using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MapBlock : MonoBehaviour
{
    [UneditableField] public int deep;
    [UneditableField] public Vector2Int index;
    [SerializeField, UneditableField] private bool interactable;
    [UneditableField] public bool interacted;
    public MapBlockEventType eventType;

    public void Initialize(int deep, Vector2Int index)
    {
        this.deep = deep;
        this.index = index;
        interactable = interacted = false;
    }

    public bool Interactable
    {
        get => interactable;
        set
        {
            interactable = value;
        }
    }

    public void ActiveNextDeepNearestBlock()
    {
        //MapManager.Instance.mapBlocks[]
        foreach (var block in GetNextDeepNearestBlock(index))
        {
            block.Interactable = true;
        }
    }

    public static List<MapBlock> GetNextDeepNearestBlock(Vector2Int index)
    {
        List<MapBlock> returnList = new List<MapBlock>();

        var mapBlocks = MapManager.Instance.mapBlocks;
        
        switch (index.x)
        {
            case 0 : 
                returnList.Add(mapBlocks[new Vector2Int(0, index.y + 1)]);
                returnList.Add(index.y % 2 == 1
                    ? mapBlocks[new Vector2Int(2, index.y + 1)]
                    : mapBlocks[new Vector2Int(1, index.y + 1)]);
                break;
            case 1 : 
                returnList.Add(mapBlocks[new Vector2Int(1, index.y + 1)]);
                if (index.y % 2 == 1)
                    returnList.Add(mapBlocks[new Vector2Int(0, index.y + 1)]);
                break;
            case 2 : 
                returnList.Add(mapBlocks[new Vector2Int(0, index.y + 1)]);
                break;
        }

        return returnList;
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