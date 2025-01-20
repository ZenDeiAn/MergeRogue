using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MergeCardShapeElement : MonoBehaviour
{
    [SerializeField] private Image img_card;
    [SerializeField] private Image img_level;
    [SerializeField] private Image img_icon;

    public void Initialize(Sprite card, Sprite level, Sprite icon)
    {
        img_card.sprite = card;
        img_level.sprite = level;
        img_icon.sprite = icon;
    }
}
