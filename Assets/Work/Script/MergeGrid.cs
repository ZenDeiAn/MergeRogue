using System;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MergeGrid : SingletonUnity<MergeGrid>
{
    public int rowColumn = 5;
    [Range(0, 0.1f)]
    public float anchorSpaceRatio = .01f;

    // The data int is for gameObject's InstanceID.
    public List<List<string>> mergeSockets = new List<List<string>>();
    
    [ContextMenu("Anchor Merge Tool Table Sockets")]
    public void AnchorMergeToolTableSockets()
    {
        Rect rect = GetComponent<RectTransform>().rect;
        float gridLength = Mathf.Min(rect.width, rect.height);
        float anchorSpace = gridLength * anchorSpaceRatio;
        float anchorSize = (gridLength - (rowColumn - 1) * anchorSpace) / rowColumn;
        Vector2 originalPosition = Vector2.one * -gridLength / 2;
        int indexOffset = 0;
        for (int i = 0; i < rowColumn; ++i)
        {
            for (int j = 0; j < rowColumn; ++j)
            {
                int index = i * rowColumn + j;
                int final = rowColumn - 1;
                if (index - indexOffset >= transform.childCount)
                    break;

                if (index == 0 ||
                    index == final ||
                    (i == final && (j == 0 || j == final)))
                {
                    indexOffset++;
                    continue;
                }
                if (transform.GetChild(index - indexOffset).TryGetComponent(out RectTransform rectTransform))
                {
                    rectTransform.sizeDelta = Vector2.one * anchorSize;
                    rectTransform.anchoredPosition =
                        new Vector2(originalPosition.x + anchorSize / 2 + j * anchorSize + j * anchorSpace,
                            originalPosition.y + anchorSize / 2 + i * anchorSize + i * anchorSpace);
                }
                else
                {
                    break;
                }
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

    public bool CheckCardConflict(string cardID, Vector2Int position)
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