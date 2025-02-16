using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using RaindowStudio.DesignPattern;
using RaindowStudio.Language;
using UnityEngine.AddressableAssets;

public class AddressableManager : SingletonUnityEternal<AddressableManager>
{
    
    public Dictionary<string, CharacterInfo> Character { get; private set; }
    public UILibrary UILibrary { get; private set; }
    public Dictionary<MapBlockEventType, GameObject> MapBlockPrefabs { get; private set; }
    public List<MapBlockProbability> MapBlockProbabilities { get; private set; }
    public Dictionary<MonsterType, List<MonsterProbabilityData>> MonsterProbabilities { get; private set; }
    public Dictionary<MergeCardType, List<string>> MergeCardLibraryByType { get; private set; }
    public Dictionary<string, MergeCardData> MergeCardDataLibrary { get; private set; }
    
    public CharacterInfo CurrentCharacter => Instance.Character[GameManager.Instance.CharacterID];

    public Coroutine LoadAllAddressableAssets(Action<float> patchProgress, Action patchCompleted)
    {
        return StartCoroutine(LoadAllAddressableAssetsIE(patchProgress, patchCompleted));
    }

    private IEnumerator LoadAllAddressableAssetsIE(Action<float> patchProgress, Action patchCompleted)
    {
        // Wait for initialization over.
        HotUpdateManager hum = HotUpdateManager.Instance;

        int totalProgress = Addressables.ResourceLocators.Count() - Enum.GetValues(typeof(HotUpdateResourceType)).Length;
        int progress = 0;

        // Download UI Resources.
        yield return hum.LoadAssetsByLabel<UILibrary>("UI",
            a => UILibrary = a);

        // Download Language Resources.
        List<LanguageDataObject> languageDataObjects = new List<LanguageDataObject>();
        yield return hum.LoadAssetsByLabel<LanguageDataObject>("Language",
            a => languageDataObjects.Add(a),
            _ =>
            {
                LanguageManager.ReloadResourceData(languageDataObjects.ToArray());
                LanguageManager.ChangeLanguage(LanguageManager.language);
            });
        patchProgress?.Invoke(++progress / (float)totalProgress);

        // Character Resources
        yield return hum.LoadAssetsByLabel<CharacterInfo>("Character",
            a => Character.Add(a.ID, a));

        totalProgress += totalProgress == progress + 1 ? 1 : 0;
        patchProgress?.Invoke(++progress / (float)totalProgress);
        
        // Download Map Resources.
        yield return hum.LoadAssetsByLabel<MapData>("MapBlock",
            a =>
            {
                MapBlockProbabilities = a.MapBlockProbabilities.OrderBy(t => t.deep).
                    GroupBy(item => item.deep).
                    Select(group => group.First()).ToList();
                MapBlockPrefabs.Clear();
                foreach (var prefab in a.MapBlockPrefabs)
                {
                    if (prefab.TryGetComponent(out MapBlock block))
                    {
                        MapBlockPrefabs[block.eventType] = prefab;
                    }
                }
            });

        totalProgress += totalProgress == progress + 1 ? 1 : 0;
        patchProgress?.Invoke(++progress / (float)totalProgress);

        // Download Monster Resources.
        MonsterProbabilities.Clear();
        yield return hum.LoadAssetsByLabel<MonsterProbability>("Monster",
            a =>
            {
                if (Enum.TryParse(a.name, out MonsterType type))
                {
                    MonsterProbabilities[type] = a.MonsterProbabilities;
                }
            });

        totalProgress += totalProgress == progress + 1 ? 1 : 0;
        patchProgress?.Invoke(++progress / (float)totalProgress);

        // Download MergeCard Resources.
        MergeCardDataLibrary.Clear();
        yield return hum.LoadAssetsByLabel<MergeCardLibrary>("Card",
            a =>
            {
                foreach (var cardData in a.MergeCards)
                {
                    if (!MergeCardLibraryByType.ContainsKey(cardData.Type))
                        MergeCardLibraryByType.Add(cardData.Type, new List<string>());
                    MergeCardLibraryByType[cardData.Type].Add(cardData.ID);
                    MergeCardDataLibrary[cardData.ID] = cardData;
                }
            });

        totalProgress += totalProgress == progress + 1 ? 1 : 0;
        patchProgress?.Invoke(++progress / (float)totalProgress);
        
        patchCompleted?.Invoke();
        
        patchProgress?.Invoke(1);

        Destroy(hum);
    }

    protected override void Initialization()
    {
        base.Initialization();

        if (!(_instance == this))
            return;
        
        Character = new Dictionary<string, CharacterInfo>();
        MapBlockProbabilities = new List<MapBlockProbability>();
        MapBlockPrefabs = new Dictionary<MapBlockEventType, GameObject>();
        MonsterProbabilities = new Dictionary<MonsterType, List<MonsterProbabilityData>>();
        MergeCardDataLibrary = new Dictionary<string, MergeCardData>();
        MergeCardLibraryByType = new Dictionary<MergeCardType, List<string>>();
        
        BattleLogicLibrary.Instance.Initialize();
    }
}