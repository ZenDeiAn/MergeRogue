/*
 * FancyScrollView (https://github.com/setchi/FancyScrollView)
 * Copyright (c) 2020 setchi
 * Licensed under MIT (https://github.com/setchi/FancyScrollView/blob/master/LICENSE)
 */

using System;

class FSD_CharacterSelection
{
    public readonly CharacterInfo CharacterInfo;
    public Action<int> OnCellClicked;
    
    public FSD_CharacterSelection(CharacterInfo info)
    {
        CharacterInfo = info;
    }
}

class Context
{
    public int SelectedIndex = -1;
    public Action<int> OnCellClicked;
}