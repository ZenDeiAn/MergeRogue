/*
 * FancyScrollView (https://github.com/setchi/FancyScrollView)
 * Copyright (c) 2020 setchi
 * Licensed under MIT (https://github.com/setchi/FancyScrollView/blob/master/LICENSE)
 */

using System;
using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using FancyScrollView;
using EasingCore;

class FSV_CharacterSelection : FancyScrollView<FSD_CharacterSelection, Context>
{
    [SerializeField] Scroller scroller = default;
    [SerializeField] GameObject cellPrefab = default;
    
    private Action<int> onSelectionChanged;

    protected override GameObject CellPrefab => cellPrefab;

    protected override void Initialize()
    {
        base.Initialize();
        Context.OnCellClicked = SelectCell;
        scroller.OnValueChanged(UpdatePosition);
        scroller.OnSelectionChanged(index =>
            GameManager.Instance.ChangeCharacter(AddressableManager.Instance.Character.Keys.ToList()[index]));
    }

    public void UpdateData(IList<FSD_CharacterSelection> items)
    {
        UpdateContents(items);
        scroller.SetTotalCount(items.Count);
    }
    

    void UpdateSelection(int index)
    {
        if (Context.SelectedIndex == index)
        {
            return;
        }

        Context.SelectedIndex = index;
        Refresh();

        onSelectionChanged?.Invoke(index);
    }

    public void SelectCell(int index)
    {
        if (index < 0 || index >= ItemsSource.Count || index == Context.SelectedIndex)
        {
            return;
        }

        UpdateSelection(index);
        scroller.ScrollTo(index, 0.35f, Ease.OutCubic);
    }
    
    void Start()
    {
        AddressableManager am = AddressableManager.Instance;
        var list = am.Character.Values.ToList();
        var items = Enumerable.Range(0, list.Count)
            .Select(i => new FSD_CharacterSelection(list[i]))
            .ToArray();
        UpdateData(items);
        scroller.JumpTo(am.Character.Keys.ToList().IndexOf(GameManager.Instance.CharacterID));
    }
}
