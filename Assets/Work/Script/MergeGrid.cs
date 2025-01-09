using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MergeGrid : SingletonUnity<MergeGrid>
{
    public int rowColumn = 5;
    [Range(0, 0.1f)]
    public float anchorSpaceRatio = .01f;

    public List<MergeSocketInfo> mergeSocketList = new List<MergeSocketInfo>();
    
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
public struct MergeSocketInfo
{
    public int Index { get; set; }
    public int Row { get; set; }
    public int Column { get; set; }
    public Rect Rect { get; set; }

    public bool Contains(Vector2 position) => Rect.Contains(position);
}