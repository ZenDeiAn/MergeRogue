using System;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class MergeSocket : Processor<MergeSocketOverlapType>, IPointerDownHandler
{
    public RectTransform rectTransform;
    [SerializeField] private Image img_card;
    [SerializeField] private CanvasGroup canvasGroup;
    [SerializeField] private Image img_level;
    [SerializeField] private Image img_icon;
    [SerializeField] private Image img_overlap;

    public MergeSocketData Data;
    public bool Active;
    public Rect WorldRect;

    public void SetCard(MergeSocketData card)
    {
        Data.StartIndex = card.StartIndex;
        Data.CardID = card.CardID;
        Data.Level = card.Level;
        var uiLibrary = AddressableManager.Instance.UILibrary;
        MergeCardData data = AddressableManager.Instance.MergeCardDataLibrary[card.CardID];
        State = MergeSocketOverlapType.None;
        img_card.sprite = uiLibrary.MergedCardShapeLibrary[data.Type];
        img_level.sprite = uiLibrary.MergedCardShapeLevelLibrary[Data.Level];
        img_icon.sprite = data.Icon;
        img_card.gameObject.SetActive(true);
    }
    
    public void RemoveCard()
    {
        Data.StartIndex = -1;
        Data.CardID = string.Empty;
        Data.Level = MergeLevel.One;
        img_card.gameObject.SetActive(false);
    }

    public void SetOverlap(MergeSocketOverlapType overlapType)
    {
        State = overlapType;
    }
    
    public void OnPointerDown(PointerEventData eventData)
    {
        if (string.IsNullOrWhiteSpace(Data.CardID))
            return;
        MergeCard card = MergeCardHandler.Instance.DrawCard(Data.CardID, Data.Level);
        card.ShowInformation(rectTransform.position, Data.StartIndex);
        MergeGrid.Instance.TryRemoveCardFromGrid(Data.StartIndex);
    }
    
    public void Initialize(Vector2 anchoredPosition, Vector2 sizeDelta, bool active = true)
    {
        RemoveCard();
        Active = active;
        State = MergeSocketOverlapType.None;
        
        canvasGroup.alpha = active ? 1 : 0;
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

[Serializable]
public struct MergeSocketData : IEquatable<MergeSocketData>
{
    public int StartIndex;
    public string CardID;
    public MergeLevel Level;

    public bool Equals(MergeSocketData other)
    {
        return StartIndex == other.StartIndex && CardID == other.CardID && Level == other.Level;
    }

    public override bool Equals(object obj)
    {
        return obj is MergeSocketData other && Equals(other);
    }

    public override int GetHashCode()
    {
        return HashCode.Combine(StartIndex, CardID, (int)Level);
    }
}