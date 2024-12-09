using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadingManager : SingletonUnityEternal<LoadingManager>
{
    public const string LOADING_SCENE = "Loading";

    public void LoadScene(string sceneName)
    {
        StartCoroutine(LoadSceneAsync(sceneName));
    }

    private IEnumerator LoadSceneAsync(string sceneName)
    {
        SceneManager.LoadScene(LOADING_SCENE);

        AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(sceneName);
        asyncOperation.allowSceneActivation = false;
        
        while (!asyncOperation.isDone)
        {
            if (asyncOperation.progress > 0.9f)
            {
                asyncOperation.allowSceneActivation = true;
            }
            yield return null;
        }
        yield return null;
    }
}

