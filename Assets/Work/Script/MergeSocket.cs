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
    [SerializeField] private Image img_level;
    [SerializeField] private Image img_icon;
    [SerializeField] private Image img_overlap;

    [UneditableField] public string CardID = string.Empty;
    [UneditableField] public MergeLevel Level;
    [UneditableField] public Rect WorldRect;
    
    public void SetCard(string cardID, MergeLevel level = MergeLevel.One)
    {
        Level = level;
        var uiLibrary = AddressableManager.Instance.UILibrary;
        MergeCardData data = AddressableManager.Instance.MergeCardDataLibrary[cardID];
        CardID = cardID;
        State = MergeSocketOverlapType.None;
        img_card.sprite = uiLibrary.MergedCardShapeLibrary[data.Type];
        img_level.sprite = uiLibrary.MergedCardShapeLevelLibrary[level];
        img_icon.sprite = data.Icon;
        img_card.gameObject.SetActive(false);
    }
    
    public void RemoveCard()
    {
        CardID = string.Empty;
    }

    public void SetOverlap(MergeSocketOverlapType overlapType)
    {
        State = overlapType;
    }
    
    public void Initialize(Vector2 anchoredPosition, Vector2 sizeDelta)
    {
        State = MergeSocketOverlapType.None;
        img_card.gameObject.SetActive(false);
        CardID = string.Empty;
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

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
        {
            Debug.LogError($"{name} : {rectTransform.rect}");
        }
    }
}
