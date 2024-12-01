using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class GameManager : ProcessorEternal<GameManager, GameState>
{
    public const string PP_CHARACTER_ID = "CharacterID";
    
    public static event Action<string> CharacterChangedEvent;

    public Dictionary<string, CharacterData> characterData = new Dictionary<string, CharacterData>();
    public Dictionary<string, Sprite> uiData = new Dictionary<string, Sprite>();

    private string _characterID;
    
    public string CharacterID => _characterID;
    public CharacterData CurrentCharacterData => characterData[_characterID];

    public void ChangeCharacter(string id)
    {
        PlayerPrefs.SetString(PP_CHARACTER_ID, _characterID = id);
        CharacterChangedEvent?.Invoke(_characterID);
    }
    
    public void LoadData()
    {
        AssetBundle characterAB = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "character"));
        AssetBundle uiAB = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "ui"));
        CharacterData[] characterDataList = characterAB.LoadAllAssets<CharacterData>();
        UIDataList uiDataList = uiAB.LoadAsset<UIDataList>("UIDataList");
        if (uiDataList != null)
        {
            foreach (var data in uiDataList.UIData)
            {
                uiData[data.id] = data.sprite;
            }
        }

        if (characterDataList.Length > 0)
        {
            string initialCharacterID = characterDataList[0].id;
            foreach (var cd in characterDataList)
            {
                characterData.Add(cd.id, cd);
            }
        
            if (!PlayerPrefs.HasKey(PP_CHARACTER_ID) || string.IsNullOrWhiteSpace(PlayerPrefs.GetString(PP_CHARACTER_ID)))
            {
                PlayerPrefs.SetString(PP_CHARACTER_ID, _characterID = initialCharacterID);
            }
            ChangeCharacter(PlayerPrefs.GetString(PP_CHARACTER_ID));
        }
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        LoadData();
    }
}

[Serializable]
public enum GameState
{
    Title,
    Campaign,
    Map,
    Battle,
}