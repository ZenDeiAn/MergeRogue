using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Threading;
using HybridCLR;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.AddressableAssets.ResourceLocators;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.SceneManagement;

public class HotUpdateManager : SingletonUnityEternal<HotUpdateManager>
{
    private bool _initialized;

    public bool Initialized => _initialized;

    public Coroutine LoadAssetsByLabel<T>(string label,
        Action<T> assetLoaded,
        Action<AsyncOperationHandle> assetsLoadComplete = null)
    {
        return StartCoroutine(LoadAssetsByLabelIE(label, assetLoaded, assetsLoadComplete));
    }

    private IEnumerator LoadAssetsByLabelIE<T>(string label,
        Action<T> assetLoaded,
        Action<AsyncOperationHandle> assetsLoadComplete = null)
    {
        AsyncOperationHandle handle = Addressables.LoadAssetsAsync(label, assetLoaded);
        yield return handle;
        if (handle.Status == AsyncOperationStatus.Failed)
        {
            Debug.LogWarning($"Type <{typeof(T).Name}> cannot be loaded.\nTry to load by SystemObject casting..");
            handle = Addressables.LoadAssetsAsync<System.Object>(label, t => assetLoaded?.Invoke((T)t));
            yield return handle;
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                Debug.Log($"Type <{typeof(T).Name}> loaded by SystemObject casting successfully!!");
            }
        }
        assetsLoadComplete?.Invoke(handle);
    }

    private Coroutine DownloadAssetsByLabel(string label,
        Action<AsyncOperationHandle> downloading = null,
        Action<AsyncOperationHandle> completed = null)
    {
        return StartCoroutine(DownloadAssetsByLabelIE(label, downloading, completed));
    }

    private IEnumerator DownloadAssetsByLabelIE(string label,
        Action<AsyncOperationHandle> downloading,
        Action<AsyncOperationHandle> completed)
    {
        AsyncOperationHandle<long> aohSize = default;
        try
        {
            aohSize = Addressables.GetDownloadSizeAsync(label);
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Download bundle '{label}' failed : {e.Message}");
        }

        yield return aohSize;

        if (aohSize.Status == AsyncOperationStatus.Succeeded)
        {
            AsyncOperationHandle handle = default;
            if (aohSize.Result > 0)
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
            
            completed?.Invoke(handle);
            
            Addressables.Release(aohSize);
        }
    }
    
    public Coroutine PatchAllAddressableAssets(Action<string> singlePatchStart,
        Action<string, float> singlePatchDownloading = null,
        Action<string> singlePatchCompleted = null,
        Action patchCompleted = null)
    {
        return StartCoroutine(PatchAllAddressableAssetsIE(
            singlePatchStart,
            singlePatchDownloading,
            singlePatchCompleted,
            patchCompleted));
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

        void PatchOver()
        {
            // ReSharper disable once AccessToModifiedClosure
            singlePatchCompleted?.Invoke(patchingName);
            previousPatchOver = true;
        }
        
        foreach (var type in Enum.GetNames(typeof(HotUpdateResourceType)))
        {
            singlePatchStart?.Invoke(patchingName = $"{type} Resources");
            DownloadAssetsByLabel(type,
                // ReSharper disable once AccessToModifiedClosure
                d => singlePatchDownloading?.Invoke(patchingName, d.PercentComplete),
                _ =>
                {
                    if (type == HotUpdateResourceType.Assembly.ToString())
                    {
#if !UNITY_EDITOR
                        LoadAssetsByLabel<TextAsset>(HotUpdateAssemblyType.Aot.ToString(),
                            a =>
                            {
                                var err =
                                    RuntimeApi.LoadMetadataForAOTAssembly(a.bytes, HomologousImageMode.SuperSet);
                                Debug.Log($"LoadMetadataForAOTAssembly:{a.name}. ret:{err}");
                            },
                            _ =>
                            {
                                LoadAssetsByLabel<TextAsset>(HotUpdateAssemblyType.HotUpdate.ToString(),
                                    a => Assembly.Load(a.bytes),
                                    _ => PatchOver());
                            });
#else
                        PatchOver();
#endif
                    }
                    else
                    {
                        PatchOver();
                    }
                });
            yield return new WaitUntil(() => previousPatchOver);
            previousPatchOver = false;
        }

        patchCompleted?.Invoke();
    }
    
    private IEnumerator InitializeIE(Action<AsyncOperationHandle> completed = null)
    {
        yield return Addressables.InitializeAsync();
        
        AsyncOperationHandle handle = Addressables.InitializeAsync();
        yield return handle;
        completed?.Invoke(handle);
    }
    
    protected override void Initialization()
    {
        base.Initialization();
        
        Debug.Log("Initializing HotUpdate Manager");
        StartCoroutine(InitializeIE(_ => _initialized = true));
    }
}
