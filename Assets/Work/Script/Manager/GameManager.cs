using System;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

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
        LoadingManager.Instance.LoadScene("Map");
    }
}

[Serializable]
public enum GameState
{
    Title,
    Campaign,
    Adventure
}