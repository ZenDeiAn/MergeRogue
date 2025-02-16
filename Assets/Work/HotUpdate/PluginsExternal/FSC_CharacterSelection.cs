/*
 * FancyScrollView (https://github.com/setchi/FancyScrollView)
 * Copyright (c) 2020 setchi
 * Licensed under MIT (https://github.com/setchi/FancyScrollView/blob/master/LICENSE)
 */

using UnityEngine;
using UnityEngine.UI;
using FancyScrollView;

class FSC_CharacterSelection : FancyCell<FSD_CharacterSelection, Context>
{
    [SerializeField] Animator animator = default;
    [SerializeField] Image rank;
    [SerializeField] Image icon;

    public void Btn_Select()
    {
        Context.OnCellClicked?.Invoke(Index);
    }
    
    static class AnimatorHash
    {
        public static readonly int Scroll = Animator.StringToHash("scroll");
    }

    public override void UpdateContent(FSD_CharacterSelection itemData)
    {
        rank.sprite = AddressableManager.Instance.UILibrary[$"CharacterRank_{itemData.CharacterInfo.rank}"];
        icon.sprite = itemData.CharacterInfo.icon;
    }

    public override void UpdatePosition(float position)
    {
        currentPosition = position;

        if (animator.isActiveAndEnabled)
        {
            animator.Play(AnimatorHash.Scroll, -1, position);
        }

        animator.speed = 0;
    }
    
    float currentPosition = 0;

    void OnEnable() => UpdatePosition(currentPosition);
}
