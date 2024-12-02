using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class GameManager : ProcessorEternal<GameManager, GameState>
{
    public const string PP_CHARACTER_ID = "CharacterID";
    
    public static event Action<string> CharacterChangedEvent;

    [UneditableField] public Dictionary<string, CharacterData> characterData = new Dictionary<string, CharacterData>();
    [UneditableField] public Dictionary<string, Sprite> uiData = new Dictionary<string, Sprite>();
    [UneditableField] public List<MapBlockProbability> mapBlockProbabilities = new List<MapBlockProbability>();
    [UneditableField] public Dictionary<MapBlockEventType, GameObject> mapBlockPrefabs = new Dictionary<MapBlockEventType, GameObject>();
    
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
        var mapData = Resources.Load("MapData") as MapData;
        if (mapData != null)
        {
            mapBlockProbabilities = mapData.MapBlockProbabilities.OrderBy(t => t.deep).GroupBy(item => item.deep)
                .Select(group => group.First()).ToList();
            mapBlockPrefabs.Clear();
            foreach (var prefab in mapData.MapBlockPrefabs)
            {
                if (prefab.TryGetComponent(out MapBlock block))
                {
                    mapBlockPrefabs[block.eventType] = prefab;
                }
            }
        }

        AssetBundle characterAB = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "character"));
        CharacterData[] characterDataList = characterAB.LoadAllAssets<CharacterData>();
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
        
        AssetBundle uiAB = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "ui"));
        UIDataList uiDataList = uiAB.LoadAsset<UIDataList>("UIDataList");
        if (uiDataList != null)
        {
            foreach (var data in uiDataList.UIData)
            {
                uiData[data.id] = data.sprite;
            }
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