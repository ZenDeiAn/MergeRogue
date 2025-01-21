using System;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MergeGrid : SingletonUnity<MergeGrid>
{
    public const int ROW_COLUMN_COUNT = 5;
    
    [SerializeField, Range(0, 0.1f)] private float anchorSpaceRatio = .01f;
    public ObjectPool obp_mergeSocket;
    public Color color_socketSettable;
    public Color color_socketConflict;
    public Color color_socketMergeable;
    public Color color_socketJustOverlap;

    [UneditableField] public float socketSize;
    [UneditableField] public Rect WorldRect; 
    [UneditableField] public float socketSpacing; 
    [UneditableField] public List<MergeSocket> Sockets = new List<MergeSocket>();
    public Dictionary<int, string> OnBoardCards = new Dictionary<int, string>();

    public bool GetOverlapSockets(int startIndex, MergeCardShapeData shapeData, out List<int> overlappedSocketIndexes)
    {
        overlappedSocketIndexes = new List<int>();
        Vector2Int startElement = -Vector2Int.one;
        for (int i = 0; i < shapeData.ShapeGrid.Count; ++i)
        {
            for (int j = 0; j < shapeData.ShapeGrid[i].Count; ++j)
            {
                // Get not null first index at first line.
                if (shapeData[i, j])
                {
                    if (j == 0 && startElement.x == -1)
                    {
                        startElement = new Vector2Int(i, j);
                    }

                    Vector2Int inGridPosition = new Vector2Int(startIndex % ROW_COLUMN_COUNT, startIndex / ROW_COLUMN_COUNT) + 
                        new Vector2Int(i, j) - startElement;

                    if (inGridPosition.x is > -1 and < ROW_COLUMN_COUNT &&
                        inGridPosition.y is > -1 and < ROW_COLUMN_COUNT)
                    {
                        int index = inGridPosition.y * ROW_COLUMN_COUNT + inGridPosition.x;
                        if (Sockets[index].Active)
                        {
                            overlappedSocketIndexes.Add(index);
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
            }            
        }
        return true;
    }
    
    public void AddCardToBoard(int startIndex, string cardID, MergeLevel level, List<int> overlappedSocketIndexes)
    {
        TryRemoveCardFromBoard(startIndex);
        OnBoardCards[startIndex] = cardID;
        foreach (var index in overlappedSocketIndexes)
        {
            if (Sockets[index].StartIndex > -1)
            {
                TryRemoveCardFromBoard(Sockets[index].StartIndex);
            }
            Sockets[index].SetCard(startIndex, cardID, level);
        }
    }
    
    public bool TryRemoveCardFromBoard(int startIndex)
    {
        if (OnBoardCards.ContainsKey(startIndex))
        {
            var cardLibrary = AddressableManager.Instance.MergeCardDataLibrary;
            GetOverlapSockets(startIndex, cardLibrary[OnBoardCards[startIndex]].CardShape, out var tempList);
            MergeLevel level = Sockets[tempList[0]].Level;
            foreach (var index in tempList)
            {
                Sockets[index].RemoveCard();
            }
            MergeCardHandler.Instance.DrawCard(OnBoardCards[startIndex], level);
            OnBoardCards.Remove(startIndex);
            return true;
        }

        return false;
    }

    [ContextMenu("Anchor Merge Tool Table Sockets")]
    public void AnchorMergeToolTableSockets()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        Rect rect = rectTransform.rect;
        float gridLength = Mathf.Min(rect.width, rect.height);
        socketSpacing = gridLength * anchorSpaceRatio;
        socketSize = (gridLength - (ROW_COLUMN_COUNT - 1) * socketSpacing) / ROW_COLUMN_COUNT;
        Vector2 originalPosition = Vector2.one * gridLength / 2;
        originalPosition.x = -originalPosition.x;
        obp_mergeSocket.RecycleAll();
        Sockets.Clear();
        for (int i = 0; i < ROW_COLUMN_COUNT; ++i)
        {
            for (int j = 0; j < ROW_COLUMN_COUNT; ++j)
            {
                int index = i * ROW_COLUMN_COUNT + j;
                int final = ROW_COLUMN_COUNT - 1;

                // corner need to be unavailable
                bool isCorner = index == 0 ||
                              index == final ||
                              (i == final && (j == 0 || j == final));
                
                Sockets.Add(obp_mergeSocket.GetObject().GetComponent<MergeSocket>());
                Sockets[index].Initialize(
                    new Vector2(originalPosition.x + socketSize / 2 + j * socketSize + j * socketSpacing,
                    originalPosition.y - socketSize / 2 - i * socketSize - i * socketSpacing),
                    Vector2.one * socketSize, !isCorner);
            }

            WorldRect = rectTransform.GetWorldRect();
        }
    }

    private void OnEnable()
    {
        AnchorMergeToolTableSockets();
    }
}