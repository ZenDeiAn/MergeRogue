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

    private IEnumerator Patch()
    {
        // Download Character Resources after AddressableManager Initialized.
        yield return new WaitUntil(() => am.Initialized);
        bool previousPatchOver = false;
        InitializePatchUI("Character Resources");
        am.LoadAssetsByLabel<CharacterDataSet>(AddressableManager.LABEL_GLOBAL,
            a => am.Character.Add(a.ID, a),
            d => sld_titlePatch.value = d.PercentComplete,
            _ =>
            {
                GameManager.Instance.LoadSaveData();
                previousPatchOver = true;
            });
        yield return new WaitUntil(() => previousPatchOver);
        
        // Download UI Resources.
        previousPatchOver = false;
        InitializePatchUI("UI Resources");
        am.LoadAssetsByLabel<UIData>(AddressableManager.LABEL_GLOBAL,
            a => a.UIDataList.ForEach(ds => am.UI[ds.id] = ds.sprite),
            d => sld_titlePatch.value = d.PercentComplete,
            _ => previousPatchOver = true);
        yield return new WaitUntil(() => previousPatchOver);
        
        // Download Language Resources.
        previousPatchOver = false;
        InitializePatchUI("Language Resources");
        List<LanguageDataObject> languageDataObjects = new List<LanguageDataObject>();
        am.LoadAssetsByLabel<LanguageDataObject>(AddressableManager.LABEL_GLOBAL,
            a => languageDataObjects.Add(a),
            d => sld_titlePatch.value = d.PercentComplete,
            _ =>
            {
                LanguageManager.ReloadResourceData(languageDataObjects.ToArray());
                LanguageManager.ChangeLanguage(LanguageManager.language);
                previousPatchOver = true;
            });
        yield return new WaitUntil(() => previousPatchOver);
        
        // Download Map Resources.
        previousPatchOver = false;
        InitializePatchUI("Map Resources");
        am.LoadAssetsByLabel<MapData>(AddressableManager.LABEL_SCENE_MAP, a =>
            {
                am.MapBlockProbabilities = a.MapBlockProbabilities.OrderBy(t => t.deep)
                    .GroupBy(item => item.deep)
                    .Select(group => group.First()).ToList();
                am.MapBlockPrefabs.Clear();
                foreach (var prefab in a.MapBlockPrefabs)
                {
                    if (prefab.TryGetComponent(out MapBlock block))
                    {
                        am.MapBlockPrefabs[block.eventType] = prefab;
                    }
                }
            },
            d => sld_titlePatch.value = d.PercentComplete,
            _ => previousPatchOver = true);
        yield return new WaitUntil(() => previousPatchOver);
        
        // Download Monster Resources.
        previousPatchOver = false;
        InitializePatchUI("Monster Resources");
        am.MonsterProbabilities.Clear();
        am.LoadAssetsByLabel<MonsterProbability>(
            AddressableManager.LABEL_SCENE_BATTLE, a =>
            {
                if (Enum.TryParse(a.name, out MonsterType type))
                {
                    am.MonsterProbabilities[type] = a.MonsterProbabilities;
                }                                                },
            d => sld_titlePatch.value = d.PercentComplete,
            _ => previousPatchOver = true);
        yield return new WaitUntil(() => previousPatchOver);
        
        // Download Lua Script Resources.
        am.LuaEnv = new LuaEnv();
        previousPatchOver = false;
        InitializePatchUI("Script Resources");
        am.LoadAssetsByLabel<TextAsset>(
            AddressableManager.LABEL_SCENE_BATTLE,
            a =>
            {
                Debug.Log($"{a.name.Split('.')[0]} : {a}");
                am.LuaEnv.DoString(a.ToString(), a.name.Split('.')[0]);
            },
            d => sld_titlePatch.value = d.PercentComplete,
            _ =>  previousPatchOver = true);
        yield return new WaitUntil(() => previousPatchOver);
        
        OnPatchOver();
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
        StartCoroutine(Patch());
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
