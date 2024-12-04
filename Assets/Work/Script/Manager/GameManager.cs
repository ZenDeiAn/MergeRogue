using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.SceneManagement;

public class GameManager : ProcessorEternal<GameManager, GameState>
{
    public const string PP_CHARACTER_ID = "CharacterID";
    
    public static event Action<string> CharacterChangedEvent;
    private string _characterID;
    
    public string CharacterID => _characterID;

    public void LoadSaveData()
    {
        if (!PlayerPrefs.HasKey(PP_CHARACTER_ID) || string.IsNullOrWhiteSpace(PlayerPrefs.GetString(PP_CHARACTER_ID)))
        {
            PlayerPrefs.SetString(PP_CHARACTER_ID, _characterID = AddressableManager.Instance.Character.Keys.ToList()[0]);
        }
        ChangeCharacter(PlayerPrefs.GetString(PP_CHARACTER_ID));
    }
    
    public void ChangeCharacter(string id)
    {
        PlayerPrefs.SetString(PP_CHARACTER_ID, _characterID = id);
        CharacterChangedEvent?.Invoke(_characterID);
    }

    void Activate_Adventure()
    {
        AddressableManager am = AddressableManager.Instance;
        am.LoadAssetsByLabel<MapData>("MapScene", a =>
            {
                am.MapBlockProbabilities = a.MapBlockProbabilities.OrderBy(t => t.deep).GroupBy(item => item.deep)
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
            null,c => SceneManager.LoadScene("Map"));
    }
}

[Serializable]
public enum GameState
{
    Title,
    Campaign,
    Adventure
}