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
    public int RandomSeed { get; set; }
    public Vector2Int AdventurePosition { get; set; } 
    public PlayerStatus PlayerStatus { get; set; }

    public Dictionary<Vector2Int, MapBlockData> AdventureMap { get; set; } =
        new Dictionary<Vector2Int, MapBlockData>();
    
    public void GenerateRandomAdventureMap(int randomSeed = -1)
    {
        RandomSeed = randomSeed == -1 ? Guid.NewGuid().GetHashCode() : randomSeed;
        Random.InitState(RandomSeed);

        AdventureMap.Clear();
        AddressableManager am = AddressableManager.Instance;
        var mapBlockProbabilities = am.MapBlockProbabilities;
        
        int totalDeep = mapBlockProbabilities[^1].deep;
        if (totalDeep % 2 == 1)     // Ensure the deep before boss is two blocks. Odd : 2, Even : 3
            totalDeep++;
        
        int index = 0;
        
        Dictionary<MapBlockEventType, int> randomEventCount = new Dictionary<MapBlockEventType, int>();
        List<MapBlockEventType> previousRandomEvents = new List<MapBlockEventType>();

        for (int deep = 0; deep <= totalDeep; ++deep)
        {
            int spawnAmount = deep switch
            {
                0 => 1,                                     // 1 start block
                _ when deep == totalDeep - 1 => 2,          // 2 rest block
                _ when deep == totalDeep => 1,              // 1 boss block
                _ when deep % 2 == 0 => 3,                  // 3 block
                _ => 2                                      // 2 block
            };
            
            // Get probability list.
            var probability = new EnumPairList<MapBlockEventType, int>(mapBlockProbabilities[index].probability);
            
            // Limit probability by already random before.
            foreach (var eventType in previousRandomEvents)
            {
                probability[eventType] = 0;
            }
            foreach (var key in randomEventCount.Keys)
            {
                if (probability[key] > 0)
                {
                    probability[key] =
                        Mathf.Clamp(probability[key] - randomEventCount[key], 1, probability[key]);
                }
            }
            // Reset before list. 
            previousRandomEvents.Clear();
            
            // Start random event.
            MapBlockEventType randomEventType = MapBlockEventType.None;
            MapBlockState blockState = MapBlockState.Idle;
            while (spawnAmount-- > 0)
            {
                // Get prefab.
                switch (deep)
                {
                    case 0:
                        blockState = MapBlockState.Interacted;
                        randomEventType = MapBlockEventType.None;
                        break;
                    
                    case var _ when deep == totalDeep: //Boss block.
                        randomEventType = MapBlockEventType.Boss;
                        break;
                    
                    case var _ when deep == totalDeep - 1:
                        randomEventType = MapBlockEventType.Rest;
                        break;

                    default:
                        if (index < mapBlockProbabilities.Count - 1 && deep >= mapBlockProbabilities[index + 1].deep)
                        {
                            index++;
                        }

                        if (probability.values.Contains(MapManager.MAP_BLOCK_FIXED_PROBABILITY)) // Fixed block.
                        {
                            randomEventType = probability.keys[probability.values.IndexOf(MapManager.MAP_BLOCK_FIXED_PROBABILITY)];
                        }
                        else // Random block.
                        {
                            int totalWeight = 0;
                            foreach (var weight in probability.values)
                            {
                                totalWeight += weight;
                            }

                            int randomWeight = Random.Range(0, totalWeight);
                            int cumulativeWeight = 0;
                            for (int j = 0; j < probability.Count; j++)
                            {
                                cumulativeWeight += probability.values[j];
                                if (randomWeight < cumulativeWeight)
                                {
                                    randomEventType = (MapBlockEventType)j;
                                    break;
                                }
                            }
                        }
                        break;
                }

                AdventureMap[new Vector2Int(spawnAmount, deep)] = new MapBlockData(randomEventType, blockState);
                
                // Update limit random list.
                randomEventCount.TryAdd(randomEventType, 0);
                randomEventCount[randomEventType] += MapManager.DISCONTINUE_ADD_AMOUNT;
                
                if (MapManager.DISCONTINUE_MAP_BLOCK_EVENT.Contains(randomEventType))
                {
                    previousRandomEvents.Add(randomEventType);
                }
            }
        }
        
    }

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
        GenerateRandomAdventureMap();
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