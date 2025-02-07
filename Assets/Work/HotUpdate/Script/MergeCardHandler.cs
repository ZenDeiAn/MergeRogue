using System.Collections;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.Serialization;

public class MergeCardHandler : SingletonUnity<MergeCardHandler>
{
    [SerializeField] private ObjectPool obp_hand;

    public RectTransform MergeCardInformationSocket;
    public Canvas Canvas;
    public List<MergeCard> HandMergeCards = new List<MergeCard>();
    public List<float> MergeCardPositionX = new List<float>();
    public float MergeCardSize = 1;

    private AdventureManager _avm;
    private RectTransform _rectTransform;

    public void RemoveCard(MergeCard card)
    {
        if (card.gameObject.activeSelf && HandMergeCards.Contains(card))
        {
            HandMergeCards.Remove(card);
            card.poolObject.Recycle();
            UpdateCardPositions();
        }
    }
    
    public MergeCard DrawCard(string cardID, MergeLevel level)
    {
        MergeCard card = obp_hand.GetObject().GetComponent<MergeCard>();
        HandMergeCards.Add(card);
        UpdateCardPositions();
        card.Initialize(cardID, level);
        return card;
    }
    
    public void DrawRandomCards()
    {
        obp_hand.RecycleAll();
        /*DrawCard("AttackUp", MergeLevel.Two);
        DrawCard("AttackUp", MergeLevel.Two);*/
        foreach (var card in GetRandomCardsFromDeck(_avm.Data.PlayerStatus.MergeCardHandlerSize))
        {
            // TODO : Random Level?
            DrawCard(card, MergeLevel.One);
        }
    }

    public List<string> GetRandomCardsFromDeck(int amount)
    {
        List<string> cards = new List<string>();
        var weightList = new List<float>(_avm.Data.PlayerStatus.MergeCardDeck.Values.ToList());
        var cardList = _avm.Data.PlayerStatus.MergeCardDeck.Keys.ToList();
        float totalWeight = 0;
        for (int i = 0; i < weightList.Count; ++i)
        {
            totalWeight += weightList[i];
        }

        for (int i = 0; i < amount; ++i)
        {
            float weight = 0;
            float reducedWeight = 0;
            float randomWeight = Random.Range(0.0f, totalWeight);
            for (int j = 0; j < weightList.Count; ++j)
            {
                weight += weightList[j];
                if (randomWeight <= weight)
                {
                    cards.Add(cardList[j]);
                    reducedWeight += weightList[j] /= 2;
                    break;
                }
            }

            totalWeight -= reducedWeight;
        }
        
        return cards;
    }

    public void UpdateCardPositions()
    {
        MergeCardPositionX.Clear();
        foreach (var card in obp_hand.ActivedObjects)
        {
            card.transform.SetAsFirstSibling();
        }
        float gap = _rectTransform.rect.width / HandMergeCards.Count;
        float start = _rectTransform.rect.x + gap / 2;
        for (int i = 0; i < HandMergeCards.Count; ++i)
        {
            MergeCardPositionX.Add(start + gap * i);
        }
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _avm = AdventureManager.Instance;        
        _rectTransform = GetComponent<RectTransform>();
        MergeCardSize = _rectTransform.rect.width / 2.5f;
    }
}
