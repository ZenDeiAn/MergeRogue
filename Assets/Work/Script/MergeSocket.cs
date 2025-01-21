using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.UI;

public class MergeSocket : Processor<MergeSocketOverlapType>
{
    
    public RectTransform rectTransform;
    [SerializeField] private Image img_card;
    [SerializeField] private CanvasGroup canvasGroup;
    [SerializeField] private Image img_level;
    [SerializeField] private Image img_icon;
    [SerializeField] private Image img_overlap;

    [UneditableField] public bool Active;
    [UneditableField] public int StartIndex;
    [UneditableField] public string CardID = string.Empty;
    [UneditableField] public MergeLevel Level;
    [UneditableField] public Rect WorldRect;
    
    public void SetCard(int startIndex, string cardID, MergeLevel level = MergeLevel.One)
    {
        StartIndex = startIndex;
        CardID = cardID;
        Level = level;
        var uiLibrary = AddressableManager.Instance.UILibrary;
        MergeCardData data = AddressableManager.Instance.MergeCardDataLibrary[cardID];
        State = MergeSocketOverlapType.None;
        img_card.sprite = uiLibrary.MergedCardShapeLibrary[data.Type];
        img_level.sprite = uiLibrary.MergedCardShapeLevelLibrary[Level];
        img_icon.sprite = data.Icon;
        img_card.gameObject.SetActive(true);
    }
    
    public void RemoveCard()
    {
        StartIndex = -1;
        CardID = string.Empty;
        Level = MergeLevel.One;
        img_card.gameObject.SetActive(false);
    }

    public void SetOverlap(MergeSocketOverlapType overlapType)
    {
        State = overlapType;
    }
    
    public void Initialize(Vector2 anchoredPosition, Vector2 sizeDelta, bool active = true)
    {
        RemoveCard();
        Active = active;
        State = MergeSocketOverlapType.None;
        
        canvasGroup.alpha = active ? 1 : 0;
        canvasGroup.interactable = active;
        img_card.gameObject.SetActive(false);
        rectTransform.sizeDelta = sizeDelta;
        rectTransform.anchoredPosition = anchoredPosition;
        WorldRect = rectTransform.GetWorldRect();
    }

    void Activate_None()
    {
        img_overlap.gameObject.SetActive(false);
    }

    void Activate_Settable()
    {
        img_overlap.gameObject.SetActive(true);
        img_overlap.color = MergeGrid.Instance.color_socketSettable;
    }

    void Activate_Conflict()
    {
        img_overlap.gameObject.SetActive(true);
        img_overlap.color = MergeGrid.Instance.color_socketConflict;
    }

    void Activate_Mergeable()
    {
        img_overlap.gameObject.SetActive(true);
        img_overlap.color = MergeGrid.Instance.color_socketMergeable;
    }

    void Activate_JustOverlap()
    {
        img_overlap.gameObject.SetActive(true);
        img_overlap.color = MergeGrid.Instance.color_socketJustOverlap;
    }
}
