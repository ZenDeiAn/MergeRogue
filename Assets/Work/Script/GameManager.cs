using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class GameManager : SingletonUnityEternal<GameManager>
{
    public const string PP_CHARACTER_ID = "CharacterID";

    public Dictionary<string, CharacterData> characterData = new Dictionary<string, CharacterData>();

    public string characterID;

    public CharacterData CurrentCharacterData => characterData[characterID];
    
    public void LoadData()
    {
        AssetBundle characterAB = AssetBundle.LoadFromFile(Path.Combine(Application.streamingAssetsPath, "character"));
        CharacterData[] characterDataList = characterAB.LoadAllAssets<CharacterData>();
        if (characterDataList.Length > 0)
        {
            string initialCharacterID = characterDataList[0].id;
            foreach (var cd in characterDataList)
            {
                characterData.Add(cd.id, cd);
            }
        
            if (PlayerPrefs.HasKey(PP_CHARACTER_ID))
            {
                characterID = PlayerPrefs.GetString(PP_CHARACTER_ID);
            }
            else
            {
                PlayerPrefs.SetString(PP_CHARACTER_ID, characterID = initialCharacterID);
            }
        }
    }

    protected override void Awake()
    {
        base.Awake();
        
        LoadData();
    }
    
}
