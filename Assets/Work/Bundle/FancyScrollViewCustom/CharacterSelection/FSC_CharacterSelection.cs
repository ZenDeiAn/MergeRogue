/*
 * FancyScrollView (https://github.com/setchi/FancyScrollView)
 * Copyright (c) 2020 setchi
 * Licensed under MIT (https://github.com/setchi/FancyScrollView/blob/master/LICENSE)
 */

using UnityEngine;
using UnityEngine.UI;
using FancyScrollView;
using UnityEngine.AddressableAssets;

class FSC_CharacterSelection : FancyCell<FSD_CharacterSelection>
{
    [SerializeField] Animator animator = default;
    [SerializeField] Image rank;
    [SerializeField] Image icon;
    
    static class AnimatorHash
    {
        public static readonly int Scroll = Animator.StringToHash("scroll");
    }

    public override void UpdateContent(FSD_CharacterSelection itemData)
    {
        rank.sprite = AddressableManager.Instance.UI[$"CharacterRank_{itemData.characterData.rank}"];
        icon.sprite = itemData.characterData.icon;
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
