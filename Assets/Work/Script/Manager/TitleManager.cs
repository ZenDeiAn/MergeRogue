using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using RaindowStudio.DesignPattern;
using RaindowStudio.Language;
using RaindowStudio.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.Playables;
using UnityEngine.UI;
using XLua;

public class TitleManager : Processor<TitleManager, TitleState>
{
    [SerializeField] private PlayableDirector pd_tapToStart;
    [SerializeField] private CharacterPreview characterPreview;
    [SerializeField] private Slider sld_titlePatch;
    [SerializeField] private TextMeshProUGUI txt_titlePatch;
    [SerializeField] private GameObject tapToStart;
    [SerializeField] private GameObject titlePatch;
    private AddressableManager am;
    
    public void ChangeGameManagerState(string state)
    {        
        GameManager.Instance.ChangeStateByString(state);
    }

    public void InitializePatchUI(string text)
    {
        txt_titlePatch.SetText($"Downloading '{text}'...");
        sld_titlePatch.value = 0;
    }

    public void Btn_NewGame()
    {
        GameManager.Instance.NewGame();
    }

    private void OnCharacterChangedEvent(string id)
    {
        characterPreview.Initialize();
    }

    private void OnPatchOver()
    {
        sld_titlePatch.value = 1;
        titlePatch.GetComponent<CanvasGroup>().DOFade(0, .5f);
        this.DelayToDo(.5f, () => titlePatch.SetActive(false));
        tapToStart.SetActive(true);
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
        
        // Start patching for basic data.
        am = AddressableManager.Instance;
        am.PatchAllAddressableAssets(InitializePatchUI,
            (_, p) => sld_titlePatch.value = p,
            null,
            () =>
            {
                GameManager.Instance.LoadSaveData();
                OnPatchOver();
            });
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
