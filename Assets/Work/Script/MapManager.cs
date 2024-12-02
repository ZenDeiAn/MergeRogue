using System.Collections;
using System.Collections.Generic;
using System.Linq;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MapManager : SingletonUnity<MapManager>
{
    public const int MAP_BLOCK_FIXED_PROBABILITY = -1;

    [UneditableField] public int randomSeed = 0;
    
    public void InitializeMap()
    {
        randomSeed = System.Guid.NewGuid().GetHashCode();
        Random.InitState(randomSeed);
        
        var mapBlockProbabilities = GameManager.Instance.mapBlockProbabilities;
        var mapBlockPrefabs = GameManager.Instance.mapBlockPrefabs;
        
        // Calculate the hexagon position spacing.
        Vector3 boundSize = mapBlockPrefabs[0].GetComponent<MeshRenderer>().bounds.size;
        float hexagonRadius = Mathf.Max(boundSize.x, boundSize.z) / 2;
        float offsetZ = Mathf.Min(boundSize.x, boundSize.z) / 2;
        float offsetX = hexagonRadius + Mathf.Sqrt(hexagonRadius * hexagonRadius - offsetZ * offsetZ);
        
        int totalDeep = mapBlockProbabilities[^1].deep;
        if (totalDeep % 2 == 1)     // Ensure the deep before boss is two blocks. Odd : 2, Even : 3
            totalDeep++;
        int index = 0;
        
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
            while (spawnAmount-- > 0)
            {
                // Get prefab.
                GameObject prefab = null;
                switch (deep)
                {
                    case 0: // Start block.
                        prefab = mapBlockPrefabs[MapBlockEventType.None];
                        break;

                    case var _ when deep == totalDeep: //Boss block.
                        prefab = mapBlockPrefabs[MapBlockEventType.Boss];
                        break;
                    
                    case var _ when deep == totalDeep - 1:
                        prefab = mapBlockPrefabs[MapBlockEventType.Rest];
                        break;

                    default:
                        if (index < mapBlockProbabilities.Count - 1 && deep >= mapBlockProbabilities[index + 1].deep)
                        {
                            index++;
                        }

                        var probability = mapBlockProbabilities[index].probability;
                        if (probability.values.Contains(MAP_BLOCK_FIXED_PROBABILITY)) // Fixed block.
                        {
                            prefab = mapBlockPrefabs[
                                probability.keys[probability.values.IndexOf(MAP_BLOCK_FIXED_PROBABILITY)]];
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
                                    prefab = mapBlockPrefabs[(MapBlockEventType)j];
                                    break;
                                }
                            }
                        }

                        prefab ??= mapBlockPrefabs[MapBlockEventType.None];
                        break;
                }

                // Get position.
                Vector3 position = Vector3.zero;
                position.z = deep * offsetZ;
                position.x = deep % 2 == 0 ? 
                    spawnAmount > 0 ? (spawnAmount % 2 == 0 ? +offsetX : -offsetX) * 2 : 0 :
                    spawnAmount % 2 == 0 ? +offsetX : -offsetX;
                
                // Instantiate.
                Instantiate(prefab, position, Quaternion.identity);
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
        
    }
}
