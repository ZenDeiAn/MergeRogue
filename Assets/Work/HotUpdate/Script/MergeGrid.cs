using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MergeGrid : SingletonUnity<MergeGrid>
{
    public const int ROW_COLUMN_COUNT = 5;
    
    [SerializeField, Range(0, 0.1f)] private float anchorSpaceRatio = .01f;
    public ObjectPool obp_mergeSocket;
    public Color color_socketSettable;
    public Color color_socketConflict;
    public Color color_socketMergeable;
    public Color color_socketJustOverlap;

    public float socketSize;
    public Rect WorldRect; 
    public float socketSpacing; 
    public List<MergeSocket> Sockets = new List<MergeSocket>();

    private AdventureManager _avm;
    
    public bool GetOverlapSockets(int startIndex, MergeCardShapeData shapeData, out List<int> overlappedSocketIndexes)
    {
        overlappedSocketIndexes = new List<int>();
        Vector2Int startElement = shapeData.Points[0];
        for (int i = 0; i < shapeData.Points.Count; ++i)
        {
            Vector2Int inGridPosition =
                new Vector2Int(startIndex % ROW_COLUMN_COUNT, startIndex / ROW_COLUMN_COUNT) + 
                shapeData.Points[i] - startElement;

            if (inGridPosition.x is > -1 and < ROW_COLUMN_COUNT &&
                inGridPosition.y is > -1 and < ROW_COLUMN_COUNT)
            {
                int index = inGridPosition.y * ROW_COLUMN_COUNT + inGridPosition.x;
                if (Sockets[index].Active)
                {
                    overlappedSocketIndexes.Add(index);
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
        return true;
    }

    public bool Mergeable(MergeSocketData card, MergeSocketData socket)
    {
        if (!card.Equals(socket))
            return false;
        return card.Level < MergeLevel.Ultimate;
    }
    
    public void MergeCardToGrid(MergeSocketData card, List<int> overlappedSocketIndexes)
    {
        // Merge
        bool merge = false;
        if (_avm.Data.MergeGridSockets.ContainsKey(card.StartIndex) &&
            _avm.Data.MergeGridSockets[card.StartIndex].CardID == card.CardID)
        {
            if (Mergeable(card, _avm.Data.MergeGridSockets[card.StartIndex]))
            {
                merge = true;
                card.Level++;
            }
        }
        foreach (var index in overlappedSocketIndexes)
        {
            if (!merge)
            {
                var si = Sockets[index].Data.StartIndex;
                if (si > -1)
                {
                    MergeCardHandler.Instance.DrawCard(_avm.Data.MergeGridSockets[si].CardID, Sockets[index].Data.Level);
                    TryRemoveCardFromGrid(si);
                }
            }

            Sockets[index].SetCard(card);
        }
        
        Observer.Trigger(merge ? ObserverMessage.MergeCardLevelUp : ObserverMessage.MergeCardToGrid, card);
    }
    
    public bool TryRemoveCardFromGrid(int startIndex)
    {
        if (_avm.Data.MergeGridSockets.ContainsKey(startIndex))
        {
            var cardLibrary = AddressableManager.Instance.MergeCardDataLibrary;
            GetOverlapSockets(startIndex, cardLibrary[_avm.Data.MergeGridSockets[startIndex].CardID].CardShape, out var tempList);
            foreach (var index in tempList)
            {
                Sockets[index].RemoveCard();
            }
            Observer.Trigger(ObserverMessage.MergeCardRemove, startIndex);
            return true;
        }

        return false;
    }

    [ContextMenu("Anchor Merge Tool Table Sockets")]
    public void AnchorMergeToolTableSockets()
    {
        RectTransform rectTransform = GetComponent<RectTransform>();
        Rect rect = rectTransform.rect;
        float gridLength = Mathf.Min(rect.width, rect.height);
        socketSpacing = gridLength * anchorSpaceRatio;
        socketSize = (gridLength - (ROW_COLUMN_COUNT - 1) * socketSpacing) / ROW_COLUMN_COUNT;
        Vector2 originalPosition = Vector2.one * gridLength / 2;
        originalPosition.x = -originalPosition.x;
        obp_mergeSocket.RecycleAll();
        Sockets.Clear();
        for (int i = 0; i < ROW_COLUMN_COUNT; ++i)
        {
            for (int j = 0; j < ROW_COLUMN_COUNT; ++j)
            {
                int index = i * ROW_COLUMN_COUNT + j;
                int final = ROW_COLUMN_COUNT - 1;

                // corner need to be unavailable
                bool isCorner = index == 0 ||
                              index == final ||
                              (i == final && (j == 0 || j == final));
                
                Sockets.Add(obp_mergeSocket.GetObject().GetComponent<MergeSocket>());
                Sockets[index].Initialize(
                    new Vector2(originalPosition.x + socketSize / 2 + j * socketSize + j * socketSpacing,
                    originalPosition.y - socketSize / 2 - i * socketSize - i * socketSpacing),
                    Vector2.one * socketSize, !isCorner);
            }

            WorldRect = rectTransform.GetWorldRect();
        }
    }

    private void LoadMergeSocketData()
    {
        foreach (var socket in _avm.Data.MergeGridSockets.Values)
        {
            GetOverlapSockets(socket.StartIndex,
                AddressableManager.Instance.MergeCardDataLibrary[socket.CardID].CardShape, out var list);
            foreach (var index in list)
            {
                Sockets[index].SetCard(new MergeSocketData
                {
                    StartIndex = socket.StartIndex,
                    Level = socket.Level,
                    CardID = socket.CardID
                });
            }
        }
    }

    private void OnEnable()
    {
        AnchorMergeToolTableSockets();
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _avm = AdventureManager.Instance;
        LoadMergeSocketData();
    }
}