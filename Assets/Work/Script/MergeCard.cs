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
    [SerializeField] private PoolObject poolObject;

    [UneditableField] public string CardID; 
    [UneditableField] public MergeLevel Level; 

    private MergeCardHandler handler;
    private MergeGrid mergeGrid;
    private MergeCardShapeData shapeData;
    private RectTransform dragRootShapeElement;
    private List<int> overlappingSockets = new List<int>();
    
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
                if (x == 0 && y == shapeData[x].Count - 1)
                {
                    dragRootShapeElement = mcse.GetComponent<RectTransform>();
                }
            });
        
        State = MergeCardInteractState.None;
    }

    public void GridObjectPoolShape(ObjectPool objectPool,
        MergeCardData cardData,
        bool startFromLeftBottomGap = false,
        float specifySize = 0,
        Action<int, int, GameObject> elementAction = null)
    {
        var shape = cardData.CardShape;
        RectTransform obpRectTransform = objectPool.GetComponent<RectTransform>();
        float shapeGridSize = specifySize == 0 ? 
            Mathf.Min(obpRectTransform.rect.width, obpRectTransform.rect.height) / (MergeGrid.ROW_COLUMN_COUNT - 1) : 
            specifySize;
        Vector2 startPosition = shape.GridSize / 2;
        if (startFromLeftBottomGap)
        {
            startPosition.y += shapeGridSize * shape.GridSize.y;
        }
        else
        {
            startPosition = -shapeGridSize * startPosition + startPosition;
            startPosition.x += shape.GridSize.x % 2 == 0 ? shapeGridSize / 2 : 0;
            startPosition.y = -startPosition.y - (shape.GridSize.y % 2 == 0 ? shapeGridSize / 2 : 0);
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
                        new Vector2(startPosition.x + shapeGridSize * j, startPosition.y - shapeGridSize * i);
                    rectTrans.sizeDelta = new Vector2(shapeGridSize, shapeGridSize);
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
            // TODO : Condition need change to be check could set to table. 
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
        StartCoroutine(MoveToHand());
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
        // Check board.
        if (mergeGrid.WorldRect.Overlaps(dragRootShapeElement.GetWorldRect()))
        {
            var sockets = mergeGrid.OnBoardSockets;
            int conflictCount = 0;
            foreach (var ele in obp_mergeCardShapeGrid.ActivedObjects)
            {
                RectTransform rectTrans = ele.GetComponent<RectTransform>();
                if (mergeGrid.WorldRect.Contains(rectTrans.position))
                {
                    for (int i = 0; i < sockets.Count; i++)
                    {
                        if (sockets[i].WorldRect.Contains(rectTrans.position))
                        {
                            if (overlappingSockets.Contains(i))
                            {
                                overlappingSockets.Remove(i);
                            }
                            overlappingSockets.Insert(0, i);
                            conflictCount++;
                            break;
                        }
                    }
                }
            }
            
            // New overlapping

            for (int i = 0; i < overlappingSockets.Count; ++i)
            {
                int index = overlappingSockets[i];
                var socket = mergeGrid.OnBoardSockets[index];

                MergeSocketOverlapType overlapType;
                
                if (i >= conflictCount)
                {
                    overlapType = MergeSocketOverlapType.None;
                    overlappingSockets.RemoveAt(i);
                }
                else if (string.IsNullOrWhiteSpace(socket.CardID))
                {
                    if (conflictCount == obp_shapeGrid.ActivedObjects.Count)
                    {
                        overlapType = MergeSocketOverlapType.Settable;
                    }
                    else
                    {
                        overlapType = MergeSocketOverlapType.JustOverlap;
                    }
                }
                else
                {
                    overlapType = socket.CardID == CardID ?
                        MergeSocketOverlapType.Mergeable : 
                        MergeSocketOverlapType.Conflict;
                }

                socket.SetOverlap(overlapType);
            }
        }
        else
        {
            // Release previous
            overlappingSockets.ForEach(index => mergeGrid.OnBoardSockets[index].SetOverlap(MergeSocketOverlapType.None));
        }
    }

    void DeActivate_Dragging()
    {
        // Release previous
        overlappingSockets.ForEach(index => mergeGrid.OnBoardSockets[index].SetOverlap(MergeSocketOverlapType.None));
        overlappingSockets.Clear();
    }
}

public enum MergeCardInteractState
{
    None,
    ShowInformation,
    Dragging
}