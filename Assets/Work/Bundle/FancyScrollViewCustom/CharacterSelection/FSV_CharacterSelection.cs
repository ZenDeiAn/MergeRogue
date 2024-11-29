/*
 * FancyScrollView (https://github.com/setchi/FancyScrollView)
 * Copyright (c) 2020 setchi
 * Licensed under MIT (https://github.com/setchi/FancyScrollView/blob/master/LICENSE)
 */

using UnityEngine;
using System.Collections.Generic;
using System.Linq;
using FancyScrollView;

class FSV_CharacterSelection : FancyScrollView<FSD_CharacterSelection>
{
    [SerializeField] Scroller scroller = default;
    [SerializeField] GameObject cellPrefab = default;

    protected override GameObject CellPrefab => cellPrefab;

    protected override void Initialize()
    {
        base.Initialize();
        scroller.OnValueChanged(UpdatePosition);
        GameManager gm = GameManager.Instance;
        scroller.OnSelectionChanged(index => gm.ChangeCharacter(gm.characterData.Keys.ToList()[index]));
    }

    public void UpdateData(IList<FSD_CharacterSelection> items)
    {
        UpdateContents(items);
        scroller.SetTotalCount(items.Count);
    }
    
    void Start()
    {
        GameManager gm = GameManager.Instance;
        var list = gm.characterData.Values.ToList();
        var items = Enumerable.Range(0, list.Count)
            .Select(i => new FSD_CharacterSelection(list[i]))
            .ToArray();
        UpdateData(items);
        scroller.JumpTo(gm.characterData.Keys.ToList().IndexOf(gm.CharacterID));
    }
}
