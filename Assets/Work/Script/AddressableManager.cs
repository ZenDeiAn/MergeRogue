using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.AddressableAssets;
using RaindowStudio.Language;
using RaindowStudio.Utility;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.TextCore.Text;
using Object = UnityEngine.Object;
using TextAsset = UnityEngine.TextAsset;

public class AddressableManager : IAddressableManager
{
    public const string LABEL_GLOBAL = "Global";
    public const string LABEL_DATA = "Data";
    public const string LABEL_SCRIPT = "Script";
    public const string LABEL_RESOURCE = "Resource";
    
    private Dictionary<string, object> _assetsDictionary = new Dictionary<string, object>();
    private readonly Main _main;
    private bool _initialized = false;
    private bool _assetsLoaded = false;

    public bool Initialized => _initialized;
    public bool AssetsLoaded => _assetsLoaded;
    
    public Coroutine LoadAssetsByLabel<T>(string label,
        Action<T> assetLoaded,
        Action<AsyncOperationHandle> downloading = null,
        Action<AsyncOperationHandle> completed = null)
    {
        return _main.StartCoroutine(LoadAssetsByLabelIE(label, assetLoaded, downloading, completed));
    }
    
    public Coroutine LoadAssetsByLabel(string label,
        Action<AsyncOperationHandle> downloading = null,
        Action<AsyncOperationHandle> completed = null)
    {
        return _main.StartCoroutine(LoadAssetsByLabelIE<Object>(label, null, downloading, completed));
    }
    
    public Coroutine PatchAllAddressableAssets(Action<string> singlePatchStart = null,
        Action<string, float> singlePatchDownloading = null,
        Action<string> singlePatchCompleted = null,
        Action patchCompleted = null)
    {
        return _main.StartCoroutine(PatchAllAddressableAssetsIE(
            singlePatchStart,
            singlePatchDownloading,
            singlePatchCompleted,
            patchCompleted));
    }

    private IEnumerator LoadAssetsByLabelIE<T>(string label,
        Action<T> assetLoaded,
        Action<AsyncOperationHandle> downloading,
        Action<AsyncOperationHandle> completed)
    {
        AsyncOperationHandle<long> aoh_size = default;
        try
        {
            aoh_size = Addressables.GetDownloadSizeAsync(label);
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Download bundle '{label}' failed : {e.Message}");
        }

        yield return aoh_size;

        if (aoh_size.Status == AsyncOperationStatus.Succeeded)
        {
            AsyncOperationHandle handle = default;
            if (aoh_size.Result > 0)
            {
                try
                {
                    handle = Addressables.DownloadDependenciesAsync(label);
                }
                catch (Exception e)
                {
                    Debug.Log($"Download bundle '{label}' failed : {e.Message}");
                }

                while (!handle.IsDone)
                {
                    downloading?.Invoke(handle);
                    yield return null;
                }

                Addressables.Release(handle);
            }
            
            Addressables.Release(aoh_size);

            handle = Addressables.LoadAssetsAsync<T>(label, assetLoaded);
            yield return handle;
            completed?.Invoke(handle);
        }
    }

    private IEnumerator PatchAllAddressableAssetsIE(Action<string> singlePatchStart,
        Action<string, float> singlePatchDownloading,
        Action<string> singlePatchCompleted,
        Action patchCompleted)
    {
        // Wait for initialization over.
        yield return new WaitUntil(() => Initialized);
        bool previousPatchOver = false;
        string patchingName = string.Empty;

        // Download UI Resources.
        singlePatchStart?.Invoke(patchingName = "UI Resources");
        {
            LoadAssetsByLabel<UILibrary>(LABEL_GLOBAL,
                a => _assetsDictionary[nameof(UILibrary)] = a,
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        // Download Language Resources.
        singlePatchStart?.Invoke(patchingName = "Language Resources");
        {
            List<LanguageDataObject> languageDataObjects = new List<LanguageDataObject>();
            LoadAssetsByLabel<LanguageDataObject>(LABEL_GLOBAL,
                a => languageDataObjects.Add(a),
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    LanguageManager.ReloadResourceData(languageDataObjects.ToArray());
                    LanguageManager.ChangeLanguage(LanguageManager.language);
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        // Character Resources
        singlePatchStart?.Invoke(patchingName = "Character Resources");
        {
            LoadAssetsByLabel<CharacterInfo>(LABEL_GLOBAL,
                a => _assetsDictionary["Character"] = a,
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;
        
        // Download Map Resources.
        singlePatchStart?.Invoke(patchingName = "Map Resources");
        {
            LoadAssetsByLabel<MapData>(LABEL_DATA, a =>
                {
                    MapBlockProbabilities = a.MapBlockProbabilities.OrderBy(t => t.deep)
                        .GroupBy(item => item.deep)
                        .Select(group => group.First()).ToList();
                    MapBlockPrefabs.Clear();
                    foreach (var prefab in a.MapBlockPrefabs)
                    {
                        if (prefab.TryGetComponent(out MapBlock block))
                        {
                            MapBlockPrefabs[block.eventType] = prefab;
                        }
                    }
                },
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        // Download Monster Resources.
        singlePatchStart?.Invoke(patchingName = "Monster Resources");
        {
            previousPatchOver = false;
            MonsterProbabilities.Clear();
            LoadAssetsByLabel<MonsterProbability>(
                LABEL_DATA, a =>
                {
                    if (Enum.TryParse(a.name, out MonsterType type))
                    {
                        MonsterProbabilities[type] = a.MonsterProbabilities;
                    }
                },
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        // Download MergeCard Resources.
        singlePatchStart?.Invoke(patchingName = "Card Resources");
        {
            MergeCardDataLibrary.Clear();
            LoadAssetsByLabel<MergeCardLibrary>(
                LABEL_DATA, a =>
                {
                    foreach (var cardData in a.MergeCards)
                    {
                        if (!MergeCardLibraryByType.ContainsKey(cardData.Type))
                            MergeCardLibraryByType.Add(cardData.Type, new List<string>());
                        MergeCardLibraryByType[cardData.Type].Add(cardData.ID);
                        MergeCardDataLibrary[cardData.ID] = cardData;
                    }
                },
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        // Download HotUpdate script Resources.
        singlePatchStart?.Invoke(patchingName = "Script Resources");
        {
            LoadAssetsByLabel<TextAsset>(
                LABEL_SCRIPT, a =>
                {
#if !UNITY_EDITOR
                    HotUpdateAssembly = Assembly.Load(a.bytes);
#endif
                },
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    // ReSharper disable once AccessToModifiedClosure
                    singlePatchCompleted?.Invoke(patchingName);
                    previousPatchOver = true;
                });
#if UNITY_EDITOR
            AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "HotUpdate");
#endif
        }
        yield return new WaitUntil(() => previousPatchOver);
        previousPatchOver = false;

        patchCompleted?.Invoke();
    }
    
    private IEnumerator InitializeIE(Action<AsyncOperationHandle> completed = null)
    {
        AsyncOperationHandle handle = Addressables.InitializeAsync();
        yield return handle;
        completed?.Invoke(handle);
    }
    
    public AddressableManager()
    {
        _main = Main.Instance;
        _main.StartCoroutine(InitializeIE(_ => _initialized = true));
    }
}
