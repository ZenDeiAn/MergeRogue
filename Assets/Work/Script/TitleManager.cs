using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.Playables;

public class TitleManager : Processor<TitleManager, TitleState>
{
    [SerializeField] private PlayableDirector pd_tapToStart;
    [SerializeField] private CharacterPreview characterPreview;

    private void OnCharacterChangedEvent(string id)
    {
        characterPreview.Initialize();
    }

    void DeActivate_Intro()
    {
        pd_tapToStart.Play();
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        State = TitleState.Intro;
        GameManager.CharacterChangedEvent += OnCharacterChangedEvent;
    }

    private void OnDestroy()
    {
        GameManager.CharacterChangedEvent -= OnCharacterChangedEvent;
    }
}

[Serializable]
public enum TitleState
{
    Intro = -1,
    Shop = 0,
    Summon = 1,
    Main = 2,
    Pvp = 3,
    Account = 4
}
