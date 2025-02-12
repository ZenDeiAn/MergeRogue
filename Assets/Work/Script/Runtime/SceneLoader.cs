using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.ResourceProviders;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : SingletonUnityEternal<SceneLoader>
{
    public const string LOADING_SCENE = "Loading";

    public void LoadScene(string sceneName, bool async = true)
    {
        if (async)
        {
            StartCoroutine(LoadSceneAsync(sceneName));
        }
        else
        {
            Addressables.LoadSceneAsync(sceneName);
        }
    }

    private IEnumerator LoadSceneAsync(string sceneName)
    {
        SceneManager.LoadScene(LOADING_SCENE);

        var asyncOperation = Addressables.LoadSceneAsync(sceneName, LoadSceneMode.Single, false);
        
        while (!asyncOperation.IsDone)
        {
            if (asyncOperation.PercentComplete > 0.9f)
            {
                break;
            }
            yield return null;
        }

        asyncOperation.Result.ActivateAsync();
        yield return null;
    }
}

