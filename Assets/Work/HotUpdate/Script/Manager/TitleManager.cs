using System;
using System.Collections.Generic;
using DG.Tweening;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.UI;

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

    public void Btn_NewGame()
    {
        GameManager.Instance.NewGame();
    }

    private void OnCharacterChangedEvent(string id)
    {
        characterPreview.Animator.enabled = false;
        characterPreview.Animator.enabled = true;
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
        am.LoadAllAddressableAssets(p => sld_titlePatch.value = p,
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
