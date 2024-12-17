using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TEST : MonoBehaviour
{
    public int rowColumn = 5;
    public float anchorSpace = 10f;
    public float anchorSize = 10f;
    public Vector3 offset = new Vector3(0, -5f, 0);
    public Sprite targetSprite;
    public Color targetColor;
    public Material targetMaterial;
    
    [ContextMenu("Anchor Merge Tool Table Sockets")]
    public void AnchorMergeToolTableSockets()
    {
        //float anchorSize = (1f - (rowColumn - 1) * anchorSpace) / rowColumn;
        int indexOffset = 0;
        float totalSize = rowColumn * anchorSize + (rowColumn - 1) * anchorSpace;
        Vector3 original = new Vector3(totalSize / 2 - anchorSize / 2, totalSize / 2 - anchorSize / 2, 0);
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
                //Debug.Log($"i : {i} | j : {j} | childCount : {transform.childCount} | index : {index - indexOffset}");
                if (transform.GetChild(index - indexOffset).TryGetComponent(out SpriteRenderer spriteRenderer))
                {
                    spriteRenderer.transform.localScale = Vector3.one * anchorSize;
                    spriteRenderer.transform.position =
                        new Vector3((anchorSize + anchorSpace) * j, (anchorSize + anchorSpace) * i, 0) -
                        original +
                        offset;
                    spriteRenderer.sprite = targetSprite;
                    spriteRenderer.color = targetColor;
                    spriteRenderer.material = targetMaterial;
                    /*rectTransform.anchorMin =
                        new Vector2((anchorSize + anchorSpace) * j, (anchorSize + anchorSpace) * i);
                    rectTransform.anchorMax =
                        new Vector2(anchorSize * (j + 1) + anchorSpace * j, anchorSize * (i + 1) + anchorSpace * i);
                    rectTransform.offsetMin = Vector2.zero;
                    rectTransform.offsetMax = Vector2.zero;*/
                }
                else
                {
                    break;
                }
            }
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
