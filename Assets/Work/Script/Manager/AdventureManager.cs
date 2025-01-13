using System;
using System.IO;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using Random = UnityEngine.Random;
using Newtonsoft.Json.Linq;
using OpenCover.Framework.Model;
using UnityEngine.Serialization;
using File = System.IO.File;

public class AdventureManager : SingletonUnityEternal<AdventureManager>, IGameStatusManager
{
    public string CharacterID;
    public int RandomSeed;
    public Vector2Int Position;
    public ActorStatus PlayerStatus;
    public List<int> ItemList = new List<int>();
    public List<string> EquipmentList = new List<string>();
    public Dictionary<Vector2Int, MapBlockData> MapData =
        new Dictionary<Vector2Int, MapBlockData>();
    public MapBlockData CurrentMapData => MapData[Position];

    public void SaveData()
    {
        string path = Path.Combine(Application.streamingAssetsPath, $"{name}.json");
        JObject jObject = new JObject
        {
            // CommonData
            [nameof(RandomSeed)] = RandomSeed,
            [nameof(CharacterID)] = CharacterID,
            [nameof(Position)] = Position.ToString(),
            // PlayerStatus
            [nameof(PlayerStatus)] = new JObject()
            {
                [nameof(PlayerStatus.health)] = PlayerStatus.health,
                [nameof(ItemList)] = new JArray(),
                [nameof(EquipmentList)] = new JArray(),
            },
            // MapData
            [nameof(MapData)] = new JArray(),
        };
        foreach (var item in ItemList)
        {
            (jObject[nameof(PlayerStatus)]?[nameof(ItemList)] as JArray)?.Add(item);
        }
        foreach (var equipment in EquipmentList)
        {
            (jObject[nameof(PlayerStatus)]?[nameof(EquipmentList)] as JArray)?.Add(equipment);
        }
        foreach (var mapBlockData in MapData)
        {
            (jObject[nameof(MapData)] as JArray)?.Add(new JObject()
            {
                ["Index"] = mapBlockData.Key.ToString(),
                [nameof(mapBlockData.Value.EventType)] = new JValue(mapBlockData.Value.EventType),
                [nameof(mapBlockData.Value.State)] = new JValue(mapBlockData.Value.State),
            });
        }

        if (!Directory.Exists(Path.GetDirectoryName(path)))
        {
            Directory.CreateDirectory(Path.GetDirectoryName(path) ?? string.Empty);
        }
        File.WriteAllText(path, jObject.ToString());
    }

    public bool CheckLoadData()
    {
        ItemList.Clear();
        EquipmentList.Clear();
        MapData.Clear();
        string path = Path.Combine(Application.streamingAssetsPath, $"{name}.json");
        if (!File.Exists(path))
            return false;
        
        JObject jObject = JObject.Parse(File.ReadAllText(path));
        JToken token;
        JArray jArray;
        // CommonData
        if (!jObject.TryApplyDataToProperty(nameof(RandomSeed), ref RandomSeed)) return false;
        if (!jObject.TryApplyDataToProperty(nameof(CharacterID), ref CharacterID)) return false;
        if (!jObject.TryApplyDataToProperty(nameof(Position), ref Position)) return false;
        // PlayerStatus
        if (!jObject.TryGetValue(nameof(PlayerStatus), out token))
            return false;
        {
            if (!token.TryApplyDataToProperty(nameof(PlayerStatus.health), ref PlayerStatus.health)) return false;
            if (!token.TryApplyDataToListProperty(nameof(ItemList), ref ItemList)) return false;
            if (!token.TryApplyDataToListProperty(nameof(EquipmentList), ref EquipmentList)) return false;
        }
        // MapData
        if (!jObject.TryGetValue(nameof(MapData), out token))
            return false;
        {
            jArray = token as JArray;
            if (jArray == null)
                return false;
            {
                Vector2Int index = new Vector2Int();
                foreach (var mapData in jArray)
                {
                    string indexString = mapData["Index"]?.ToString();
                    if (indexString == null)
                        return false;
                    {
                        string[] strings = indexString.Remove(indexString.Length - 1, 1).Remove(0, 1).Split(',');
                        MapBlockData mapBlockData;
                        if (strings.Length == 2 &&
                            int.TryParse(strings[0].Trim(), out int x) &&
                            int.TryParse(strings[1].Trim(), out int y))
                        {
                            index = new Vector2Int(x, y);
                            mapBlockData = MapData[index] = new MapBlockData();
                        }
                        else
                            return false;

                        if (!mapData.TryApplyDataToProperty(nameof(mapBlockData.EventType), ref mapBlockData.EventType)) return false;
                        if (!mapData.TryApplyDataToProperty(nameof(mapBlockData.State), ref mapBlockData.State)) return false;
                    }
                }
            }
        }
        
        return true;
    }

    public void InitializeNewData()
    {
        ItemList.Clear();
        for (int i = 0; i < 3; ++i)
        {
            ItemList.Add(0);
        }
        GenerateRandomAdventureMap();
        PlayerStatus = new ActorStatus(AddressableManager.Instance.CurrentCharacterData.Status);
    }
    
    private void GenerateRandomAdventureMap(int randomSeed = -1)
    {
        RandomSeed = randomSeed == -1 ? Guid.NewGuid().GetHashCode() : randomSeed;
        Random.InitState(RandomSeed);

        MapData.Clear();
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

                MapData[new Vector2Int(spawnAmount, deep)] = new MapBlockData(randomEventType, blockState);
                
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
}
