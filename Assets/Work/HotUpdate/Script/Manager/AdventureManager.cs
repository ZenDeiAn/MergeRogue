using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using Random = UnityEngine.Random;
using Newtonsoft.Json.Linq;
using UnityEngine.Serialization;
using File = System.IO.File;

public class AdventureManager : SingletonUnityEternal<AdventureManager>, IGameStatusManager, IObserverSubscriber
{
    public AdventureManagerData Data = new AdventureManagerData();
    public MapBlockData CurrentMapData => Data.MapData[Data.Position];
    
    [JsonIgnore]
    private AddressableManager _adm;

    #region Observer Events

    public List<ObserverSubscribeData> Subscriptions { get; } = new List<ObserverSubscribeData>()
    {
        new ObserverSubscribeData(ObserverMessage.MergeCardToGrid, o =>
        {
            MergeSocketData data = (MergeSocketData)o;
            foreach (var character in Instance.Data.PlayerStatus.characters)
            {
                BattleLogicLibrary.Instance.MergeCardLibrary[data.CardID](character, data.Level, false);
            }
            Instance.Data.MergeGridSockets[data.StartIndex] = data;
        }),
        new ObserverSubscribeData(ObserverMessage.MergeCardLevelUp, o =>
        {
            MergeSocketData data = (MergeSocketData)o;
            foreach (var character in Instance.Data.PlayerStatus.characters)
            {
                BattleLogicLibrary.Instance.MergeCardLibrary[data.CardID](character, data.Level - 1, true);
                BattleLogicLibrary.Instance.MergeCardLibrary[data.CardID](character, data.Level, false);
            }
            Instance.Data.MergeGridSockets[data.StartIndex] = data;
        }),
        new ObserverSubscribeData(ObserverMessage.MergeCardRemove, o =>
        {
            var data = Instance.Data.MergeGridSockets[(int)o];
            foreach (var character in Instance.Data.PlayerStatus.characters)
            {
                BattleLogicLibrary.Instance.MergeCardLibrary[data.CardID](character, data.Level, true);
            }
            Instance.Data.MergeGridSockets.Remove(data.StartIndex);
        }),
        
    };

    #endregion
    
    public void SaveData()
    {
        string path = Path.Combine(Application.streamingAssetsPath, $"{name}.json");
        
        if (!Directory.Exists(Path.GetDirectoryName(path)))
        {
            Directory.CreateDirectory(Path.GetDirectoryName(path) ?? string.Empty);
        }
        File.WriteAllText(path, JsonConvert.SerializeObject(Data));
    }

    public bool CheckLoadData()
    {
        Data.PlayerStatus.ItemList.Clear();
        Data.PlayerStatus.EquipmentList.Clear();
        Data.MapData.Clear();
        string path = Path.Combine(Application.streamingAssetsPath, $"{name}.json");
        if (!File.Exists(path))
            return false;
        
        Data = JsonConvert.DeserializeObject<AdventureManagerData>(File.ReadAllText(path));
        
        return true;
    }

    public void InitializeNewData()
    {
        // Random map.
        GenerateRandomAdventureMap();
        Data.PlayerStatus.Initialize(_adm.CurrentCharacter, _adm.MergeCardLibraryByType[MergeCardType.Common]);
    }

    public void GenerateRandomReward_Battle()
    {
        
    }

    public void GenerateRandomReward_Event()
    {
        
    }
    
    private void GenerateRandomAdventureMap(int randomSeed = -1)
    {
        Data.RandomSeed = randomSeed == -1 ? Guid.NewGuid().GetHashCode() : randomSeed;
        Random.InitState(Data.RandomSeed);

        Data.MapData.Clear();
        var mapBlockProbabilities = _adm.MapBlockProbabilities;
        
        // ReSharper disable once UseIndexFromEndExpression
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

                Data.MapData[new Vector2Int(spawnAmount, deep)] = new MapBlockData(randomEventType, blockState);
                
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

    protected override void Initialization()
    {
        base.Initialization();

        _adm = AddressableManager.Instance;
        
        this.SubscribeAll();
    }

    private void OnDestroy()
    {
        this.UnsubscribeAll();
    }
}

public class AdventureManagerData
{
    public int RandomSeed;
    public Vector2Int Position;
    public readonly Dictionary<Vector2Int, MapBlockData> MapData = new Dictionary<Vector2Int, MapBlockData>();
    public readonly Dictionary<int, MergeSocketData> MergeGridSockets = new Dictionary<int, MergeSocketData>();
    public readonly PlayerStatus PlayerStatus = new PlayerStatus();  
}


public class CharacterStatus : ActorStatus
{
    public readonly string ID;

    public CharacterStatus(Actor actor, CharacterInfo characterInfo) : base(actor, characterInfo.Status)
    {
        ID = characterInfo.ID;
    }

    public CharacterStatus(Actor actor, ActorStatus status) : base(actor, status)
    {
        ID = actor.ActorData.ID;
    }

    public override string ToString()
    {
        return $"{ID}\n{base.ToString()}";
    }
}

public struct BattleRewardData
{
    public int gold;
    public string relicID;
    public List<string> cardIDs;

    public BattleRewardData(int gold, string relicID, List<string> cardIDs)
    {
        this.gold = gold;
        this.cardIDs = cardIDs;
        this.relicID = relicID;
    }
}
