using System;
using System.Collections;
using System.Collections.Generic;
using System.Data.Common;
using System.Globalization;
using System.Linq;
using DG.Tweening;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using RaindowStudio.Language;
using RaindowStudio.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Serialization;
using Image = UnityEngine.UI.Image;

public class MergeCard : Processor<MergeCardInteractState>, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    private static int _interactingCard = -1;
    
    [SerializeField] private RectTransform rectTransform;
    [SerializeField] private GameObject card;
    [SerializeField] private Image img_card;
    [SerializeField] private Image img_cardIcon;
    [SerializeField] private Image img_level;
    [SerializeField] private GameObject[] levelIcons;
    [SerializeField] private ObjectPool obp_shapeGrid;
    [SerializeField] private ObjectPool obp_mergeCardShapeGrid;
    [SerializeField] private TextMeshProUGUI txt_description;
    [SerializeField] private ParticleSystem ptc_change;
    [SerializeField] public PoolObject poolObject;

    [UneditableField] public string CardID; 
    [UneditableField] public MergeLevel Level; 

    private MergeCardHandler handler;
    private MergeGrid mergeGrid;
    private MergeCardShapeData shapeData;
    private List<int> overlappingSockets = new List<int>();
    private List<MergeCardShapeElement> shapeElements = new List<MergeCardShapeElement>();
    private int onGridIndex = -1;
    
    public bool Interacting => _interactingCard == gameObject.GetInstanceID();

    public void Initialize(string cardID, MergeLevel level)
    {
        CardID = cardID;
        Level = level;

        handler = MergeCardHandler.Instance;
        mergeGrid = MergeGrid.Instance;
        AddressableManager adm = AddressableManager.Instance;
        
        rectTransform.sizeDelta = Vector2.one * handler.MergeCardSize;

        var cardData = AddressableManager.Instance.MergeCardDataLibrary[cardID];
        shapeData = cardData.CardShape;
        img_card.sprite = adm.UILibrary.MergedCardLibrary[cardData.Type];
        img_cardIcon.sprite = cardData.Icon;
        img_level.sprite = adm.UILibrary.MergedLevelLibrary[Level];
        var mergeLevels = Enum.GetValues(typeof(MergeLevel));
        for (int i = 0; i < levelIcons.Length; ++i)
        {
            levelIcons[i].SetActive(Level >= (MergeLevel)mergeLevels.GetValue(i));
        }
        
        string description = (LanguageManager.GetLanguageData("CardDescription", cardID) as LanguageTextData)?.text;
        if (description != null)
        {
            description = description.Replace("<m>",
                $"<u><color=red>{cardData.Multiplies[Level].ToString(CultureInfo.InvariantCulture)}</u></color>");
            txt_description.SetText(description);
        }
        
        GridObjectPoolShape(obp_shapeGrid, cardData);
        shapeElements.Clear();
        GridObjectPoolShape(obp_mergeCardShapeGrid,
            cardData,
            true,
            MergeGrid.Instance.socketSize + MergeGrid.Instance.socketSpacing,
            (x, y, g) =>
            {
                MergeCardShapeElement mcse = g.GetComponent<MergeCardShapeElement>();
                mcse.Initialize(adm.UILibrary.MergedCardShapeLibrary[cardData.Type],
                    adm.UILibrary.MergedCardShapeLevelLibrary[Level],
                    cardData.Icon);
                shapeElements.Add(mcse);
            });
        
        State = MergeCardInteractState.None;
    }

    public void GridObjectPoolShape(ObjectPool objectPool,
        MergeCardData cardData,
        bool startFromBottomGap = false,
        float specifySize = 0,
        Action<int, int, GameObject> elementAction = null)
    {
        objectPool.RecycleAll();
        var shape = cardData.CardShape;
        RectTransform obpRectTransform = objectPool.GetComponent<RectTransform>();
        specifySize = specifySize == 0 ? 
            Mathf.Min(obpRectTransform.rect.width, obpRectTransform.rect.height) / (MergeGrid.ROW_COLUMN_COUNT - 1) : 
            specifySize;
        Vector2 startPosition = shape.GridSize / 2;
        if (startFromBottomGap)
        {
            startPosition.y += specifySize * shape.GridSize.y;
        }
        else
        {
            startPosition = -specifySize * startPosition + startPosition;
            startPosition.x += shape.GridSize.x % 2 == 0 ? specifySize / 2 : 0;
            startPosition.y = -startPosition.y - (shape.GridSize.y % 2 == 0 ? specifySize / 2 : 0);
        }
        for (int i = 0; i < shape.ShapeGrid.Count; ++i)
        {
            var column = shape[i];
            for (int j = 0; j < column.Count; ++j)
            {
                if (column[j])
                {
                    RectTransform rectTrans = objectPool.GetObject().GetComponent<RectTransform>();
                    rectTrans.anchoredPosition =
                        new Vector2(startPosition.x + specifySize * i, startPosition.y - specifySize * j);
                    rectTrans.sizeDelta = new Vector2(specifySize, specifySize);
                    elementAction?.Invoke(i, j, rectTrans.gameObject);
                }
            }
        }
    }
    
    public void OnPointerDown(PointerEventData eventData)
    {
        if (_interactingCard == -1)
        {
            _interactingCard = gameObject.GetInstanceID();
            State = MergeCardInteractState.ShowInformation;
        }
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (Interacting && State != MergeCardInteractState.Dragging)
        {
            State = MergeCardInteractState.Dragging;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (Interacting)
        {
            _interactingCard = -1;
            if (onGridIndex != -1)
            {
                mergeGrid.AddCardToBoard(onGridIndex, CardID, Level, overlappingSockets);
                handler.RemoveCard(this);
            }
            State = MergeCardInteractState.None;
        }
    }

    private IEnumerator MoveToHand()
    {
        Vector3 targetPosition = Vector3.zero;
        targetPosition.x = MergeCardHandler.Instance.MergeCardPositionX[transform.GetSiblingIndex()];
        while (Vector3.Distance(transform.position, targetPosition) > 0.05f && !Interacting)
        {
            targetPosition.x = MergeCardHandler.Instance.MergeCardPositionX[transform.GetSiblingIndex()];
            rectTransform.anchoredPosition =
                Vector3.Lerp(rectTransform.anchoredPosition, targetPosition, Time.deltaTime * 10f);
            rectTransform.LocalPositionZ(0);
            yield return null;
        }
    }

    void Activate_None()
    {
        card.gameObject.SetActive(true);
        obp_mergeCardShapeGrid.gameObject.SetActive(false);
        rectTransform.localScale = Vector3.one;
        if (gameObject.activeSelf)
        {
            StartCoroutine(MoveToHand());
        }
    }

    void Activate_ShowInformation()
    {
        RectTransform socketTransform = MergeCardHandler.Instance.MergeCardInformationSocket;
        rectTransform.DOMove(socketTransform.position, 1).SetRelative(false);
        rectTransform.DOScale(socketTransform.localScale, 1).SetRelative(false);
    }

    void DeActivate_ShowInformation()
    {
        rectTransform.DOKill();
    }

    void Activate_Dragging()
    {
        rectTransform.localScale = Vector3.one;
        card.gameObject.SetActive(false);
        obp_mergeCardShapeGrid.gameObject.SetActive(true);
        //ptc_change.Play();
    }

    void Update_Dragging()
    {
        // Drag (positioning).
        RectTransformUtility.ScreenPointToLocalPointInRectangle(
            handler.Canvas.transform as RectTransform,
            Input.mousePosition, handler.Canvas.worldCamera,
            out Vector2 movePos);

        rectTransform.position = handler.Canvas.transform.TransformPoint(movePos);
        // Check shapeElement is all in Rect or not.
        int overlapCount = 0;
        foreach (var shapeElement in shapeElements)
        {
            if (mergeGrid.WorldRect.Contains(shapeElement.rectTransform.position))
            {
                overlapCount++;
            }
        }

        Vector3 position = shapeElements[0].rectTransform.position;
        var sockets = mergeGrid.Sockets;
        List<int> overlappedSockets = new List<int>();
        if (overlapCount == shapeElements.Count)
        {
            onGridIndex = -1;
            for (int i = 0; i < sockets.Count; ++i)
            {
                if (!sockets[i].WorldRect.Contains(position))
                {
                    continue;
                }

                if (!sockets[i].Active)
                {
                    break;
                }
                
                onGridIndex = i;
                break;
            }

            if (onGridIndex > -1 && 
                mergeGrid.GetOverlapSockets(onGridIndex, shapeData, out overlappedSockets))
            {
                foreach (int index in overlappedSockets)
                {
                    MergeSocketOverlapType overlapType;
                    MergeSocket socket = sockets[index];
                    if (string.IsNullOrWhiteSpace(socket.CardID))
                    {
                        overlapType = MergeSocketOverlapType.Settable;
                    }
                    else
                    {
                        overlapType = socket.CardID == CardID && onGridIndex == socket.StartIndex ?
                            MergeSocketOverlapType.Mergeable : 
                            MergeSocketOverlapType.Conflict;
                    }

                    socket.SetOverlap(overlapType);

                    if (overlappingSockets.Contains(index))
                    {
                        overlappingSockets.Remove(index);
                    }
                }
            }
            else
            {
                onGridIndex = -1;
            }
        }

        foreach (var index in overlappingSockets)
        {
            sockets[index].SetOverlap(MergeSocketOverlapType.None);
        }

        overlappingSockets = overlappedSockets;
    }

    void DeActivate_Dragging()
    {
        // Release previous
        overlappingSockets.ForEach(index => mergeGrid.Sockets[index].SetOverlap(MergeSocketOverlapType.None));
        overlappingSockets.Clear();
    }
}

public enum MergeCardInteractState
{
    None,
    ShowInformation,
    Dragging
}