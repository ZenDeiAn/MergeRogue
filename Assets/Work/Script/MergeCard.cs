using System;
using System.Globalization;
using RaindowStudio.DesignPattern;
using RaindowStudio.Language;
using RaindowStudio.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MergeCard : MonoBehaviour
{
    [SerializeField] private Image img_card;
    [SerializeField] private Image img_cardIcon;
    [SerializeField] private Image img_level;
    [SerializeField] private GameObject[] levelIcons;
    [SerializeField] private ObjectPool obp_shapeGrid;
    [SerializeField] private TextMeshProUGUI txt_description;

    public MergeCardInstanceData data;
    
    private bool _interacting = false;
    private RectTransform _rectTransform;
    
    public bool Interacting
    {
        get => _interacting;
        set
        {
            _interacting = value;
        }
    }

    public void Initialize(string cardID)
    {
        AddressableManager adm = AddressableManager.Instance;
        data = new MergeCardInstanceData()
        {
            CardID = cardID,
            Level = MergeLevel.One,
            Root = Vector2Int.zero
        };
        var cardData = AddressableManager.Instance.MergeCardDataLibrary[cardID];

        img_card.sprite = adm.UILibrary.MergedCardLibrary[cardData.Type];
        img_cardIcon.sprite = cardData.Icon;
        img_level.sprite = adm.UILibrary.MergedLevelLibrary[data.Level];
        var mergeLevels = Enum.GetValues(typeof(MergeLevel));
        for (int i = 0; i < levelIcons.Length; ++i)
        {
            levelIcons[i].SetActive(data.Level >= (MergeLevel)mergeLevels.GetValue(i));
        }
        
        string description = (LanguageManager.GetLanguageData("CardDescription", cardID) as LanguageTextData)?.text;
        if (description != null)
        {
            description = description.Replace("<m>",
                $"<u><color=red>{cardData.Multiplies[data.Level].ToString(CultureInfo.InvariantCulture)}</u></color>");
            txt_description.SetText(description);
        }

        obp_shapeGrid.RecycleAll();
        RectTransform obpRectTransform = obp_shapeGrid.GetComponent<RectTransform>();
        Vector2 shapeGridSize = obp_shapeGrid.poolingObject.GetComponent<RectTransform>().rect.size;
        Vector2 startPosition = -shapeGridSize * cardData.CardShape.GridSize / 2;
        for (int i = 0; i < cardData.CardShape.ShapeGrid.Count; ++i)
        {
            var column = cardData.CardShape[i].Column;
            for (int j = 0; j < column.Count; ++j)
            {
                if (column[j])
                {
                    RectTransform rectTransform = obp_shapeGrid.GetObject().GetComponent<RectTransform>();
                    rectTransform.anchoredPosition =
                        new Vector2(startPosition.x + shapeGridSize.x * j, startPosition.y + shapeGridSize.y * i);
                }
            }
        }
    }

    void Update()
    {
        Vector3 targetPosition = Vector3.zero;
        if (_interacting)
        {
            targetPosition = Camera.main.ViewportToWorldPoint(Input.mousePosition);
            targetPosition.z = 0;
        }
        else if (MergeCardHandler.Instance.mergeCardPositionX.Count > transform.GetSiblingIndex())
        {
            targetPosition.x = MergeCardHandler.Instance.mergeCardPositionX[transform.GetSiblingIndex()];
            targetPosition.y = 0;
            targetPosition.z = 0;
        }
        
        _rectTransform.anchoredPosition = Vector3.Lerp(_rectTransform.anchoredPosition, targetPosition, Time.deltaTime * 10f);
    }

    private void Start()
    {
        _rectTransform = GetComponent<RectTransform>();
    }
}

public class MergeCardInstanceData
{
    public string CardID;
    public MergeLevel Level;
    public Vector2Int Root = Vector2Int.zero;
}