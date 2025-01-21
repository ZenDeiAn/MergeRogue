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
    
    public void DrawRandomCards()
    {
        var randomCards = GetRandomCardsFromDeck(_avm.PlayerStatus.MergeCardHandlerSize);
       
        obp_hand.RecycleAll();
        for (int i = 0; i < randomCards.Count; ++i)
        {
            MergeCard card = obp_hand.GetObject().GetComponent<MergeCard>();
            HandMergeCards.Add(card);
            UpdateCardPositions();
            // TODO : Random Level?
            card.Initialize(randomCards[i], MergeLevel.One);
        }
    }

    public List<string> GetRandomCardsFromDeck(int amount)
    {
        List<string> cards = new List<string>();
        var weightList = new List<float>(_avm.PlayerStatus.MergeCardDeck.Values.ToList());
        var cardList = _avm.PlayerStatus.MergeCardDeck.Keys.ToList();
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
