using System;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class MergeGrid : SingletonUnity<MergeGrid>
{
    public const int ROW_COLUMN_COUNT = 5;
    
    [SerializeField, Range(0, 0.1f)] private float anchorSpaceRatio = .01f;
    public List<MergeSocket> OnBoardSockets = new List<MergeSocket>();
    [FormerlySerializedAs("color_socketAvailable")] public Color color_socketSettable;
    public Color color_socketConflict;
    public Color color_socketMergeable;
    [FormerlySerializedAs("color_socketOverlap")] public Color color_socketJustOverlap;

    [UneditableField] public Rect socketGridRect;
    [UneditableField] public float socketSize; 
    [UneditableField] public float socketSpacing; 
    [UneditableField] public List<OnBoardCardInfo> OnBoardCards = new List<OnBoardCardInfo>();

    public void AddCardToBoard(OnBoardCardInfo cardInfo)
    {
        
    }
    
    public void RemoveCardFromBoard(OnBoardCardInfo cardInfo)
    {
        
    }

    public void UpdateGridCards()
    {
        foreach (var cardInfo in OnBoardCards)
        {
            
        }
    }

    [ContextMenu("Anchor Merge Tool Table Sockets")]
    public void AnchorMergeToolTableSockets()
    {
        Rect rect = GetComponent<RectTransform>().rect;
        float gridLength = Mathf.Min(rect.width, rect.height);
        socketSpacing = gridLength * anchorSpaceRatio;
        socketSize = (gridLength - (ROW_COLUMN_COUNT - 1) * socketSpacing) / ROW_COLUMN_COUNT;
        Vector2 originalPosition = Vector2.one * -gridLength / 2;
        socketGridRect.size = Vector2.one * (socketSize * gridLength + socketSpacing * (gridLength - 1));
        socketGridRect.position = new Vector2(originalPosition.x, originalPosition.y + socketGridRect.size.y);
        int indexOffset = 0;
        for (int i = 0; i < ROW_COLUMN_COUNT; ++i)
        {
            for (int j = 0; j < ROW_COLUMN_COUNT; ++j)
            {
                int index = i * ROW_COLUMN_COUNT + j;
                int final = ROW_COLUMN_COUNT - 1;
                if (index - indexOffset >= OnBoardSockets.Count)
                    break;

                if (index == 0 ||
                    index == final ||
                    (i == final && (j == 0 || j == final)))
                {
                    indexOffset++;
                    continue;
                }
                
                RectTransform rectTransform = OnBoardSockets[index - indexOffset].rectTransform;
                rectTransform.sizeDelta = Vector2.one * socketSize;
                rectTransform.anchoredPosition =
                    new Vector2(originalPosition.x + socketSize / 2 + j * socketSize + j * socketSpacing,
                        originalPosition.y + socketSize / 2 + i * socketSize + i * socketSpacing);
                OnBoardSockets[index - indexOffset].Initialize();
            }
        }
    }

    private void OnEnable()
    {
        AnchorMergeToolTableSockets();
    }
}

[Serializable]
public struct OnBoardCardInfo
{
    public string ID;
    public Vector2Int Position;

    public bool CheckCardOverlap(string cardID, Vector2Int position)
    {
        var cardLibrary = AddressableManager.Instance.MergeCardDataLibrary;
        var shape = cardLibrary[ID].CardShape;
        var checkShape = cardLibrary[cardID].CardShape; // Calculate the min and max points of the first rectangle
        
        // Calculate the bottom-right corners for both rectangles
        Vector2Int bottomRight1 = Position + new Vector2Int(shape.GridSize.x, -shape.GridSize.y);
        Vector2Int bottomRight2 = position + new Vector2Int(checkShape.GridSize.x, -checkShape.GridSize.y);
        
        // Determine the intersecting region
        int overlapLeft = Mathf.Max(Position.x, position.x);
        int overlapTop = Mathf.Min(Position.y, position.y);
        int overlapRight = Mathf.Min(bottomRight1.x, bottomRight2.x);
        int overlapBottom = Mathf.Max(bottomRight1.y, bottomRight2.y);

        // Check if there is an actual overlap
        if (overlapLeft < overlapRight && overlapBottom < overlapTop)
        {
            for (int x = overlapLeft; x < overlapRight; x++)
            {
                for (int y = overlapBottom; y < overlapTop; y++)
                {
                    if (shape[x - Position.x, y - Position.y] &&
                        checkShape[x - position.x, y - position.y])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
}