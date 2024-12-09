using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Playables;

public class MapManager : SingletonUnity<MapManager>
{
    public const int MAP_BLOCK_FIXED_PROBABILITY = -1;
    public const int DISCONTINUE_ADD_AMOUNT = 2;
    public readonly MapBlockEventType[] DISCONTINUE_MAP_BLOCK_EVENT = new MapBlockEventType[] {
        MapBlockEventType.Elite,
        MapBlockEventType.RandomEvent,
        MapBlockEventType.Rest,
        MapBlockEventType.Store
    };

    [UneditableField] public int randomSeed = -1;

    public Dictionary<Vector2Int, MapBlock> mapBlocks = new Dictionary<Vector2Int, MapBlock>();
    public LayerMask layer;
    
    public void InitializeMap(int randomSeed = -1)
    {
        mapBlocks.Clear();
        
        randomSeed = randomSeed == -1 ? System.Guid.NewGuid().GetHashCode() : randomSeed;
        Random.InitState(randomSeed);
        AddressableManager am = AddressableManager.Instance;
        var mapBlockProbabilities = am.MapBlockProbabilities;
        var mapBlockPrefabs = am.MapBlockPrefabs;
        
        // Calculate the hexagon position spacing.
        Vector3 boundSize = mapBlockPrefabs[0].GetComponent<MeshRenderer>().bounds.size;
        float hexagonRadius = Mathf.Max(boundSize.x, boundSize.z) / 2;
        float offsetZ = Mathf.Min(boundSize.x, boundSize.z) / 2;
        float offsetX = hexagonRadius + Mathf.Sqrt(hexagonRadius * hexagonRadius - offsetZ * offsetZ);
        
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
            while (spawnAmount-- > 0)
            {
                // Get prefab.
                switch (deep)
                {
                    case 0:
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

                        if (probability.values.Contains(MAP_BLOCK_FIXED_PROBABILITY)) // Fixed block.
                        {
                            randomEventType = probability.keys[probability.values.IndexOf(MAP_BLOCK_FIXED_PROBABILITY)];
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

                // Get position.
                Vector3 position = Vector3.zero;
                position.x = deep % 2 == 0 ? 
                    spawnAmount > 0 ? (spawnAmount % 2 == 0 ? +offsetX : -offsetX) * 2 : 0 :
                    spawnAmount % 2 == 0 ? +offsetX : -offsetX;
                position.y = deep % 3 == 0 ? 0 : deep % 2 == 0 ? .5f : 1;
                position.z = deep * offsetZ;
                
                // Instantiate.
                MapBlock block =
                    Instantiate(mapBlockPrefabs[randomEventType], position, Quaternion.identity, transform).GetComponent<MapBlock>();
                block.Initialize(deep, new Vector2Int(spawnAmount, deep));
                mapBlocks.Add(block.index, block);
                
                // Update limit random list.
                randomEventCount.TryAdd(randomEventType, 0);
                randomEventCount[randomEventType] += DISCONTINUE_ADD_AMOUNT;
                
                if (DISCONTINUE_MAP_BLOCK_EVENT.Contains(randomEventType))
                {
                    previousRandomEvents.Add(randomEventType);
                }
            }
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        InitializeMap();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetMouseButtonDown(0)) // Left mouse button
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit[] hits = Physics.RaycastAll(ray, 100, layer);
            if (hits.Length > 0)
            {
                foreach (RaycastHit hit in hits)
                {
                    if (hit.collider.gameObject.TryGetComponent(out MapBlock block))
                    {
                        block.Interact();
                    }
                }
            }
        }
        
        if (Input.GetKeyDown(KeyCode.T))
        {
            foreach (Transform child in transform)
            {
                Destroy(child.gameObject);
            }
            InitializeMap();
        }
    }
}
