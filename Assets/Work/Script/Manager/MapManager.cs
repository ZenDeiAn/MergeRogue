using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using RaindowStudio.Attribute;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Serialization;

public class MapManager : SingletonUnity<MapManager>
{
    public const int MAP_BLOCK_FIXED_PROBABILITY = -1;
    public const int DISCONTINUE_ADD_AMOUNT = 2;
    public const int LOCATE_MARK_POSITION_Y = 5;
    public static readonly MapBlockEventType[] DISCONTINUE_MAP_BLOCK_EVENT = new MapBlockEventType[] {
        MapBlockEventType.Elite,
        MapBlockEventType.RandomEvent,
        MapBlockEventType.Rest,
        MapBlockEventType.Store
    };

    [SerializeField] private LayerMask _layer;
    [SerializeField] private Transform _locateMark;
    
    public Dictionary<Vector2Int, MapBlock> mapBlocks = new Dictionary<Vector2Int, MapBlock>();
    
    private GameManager _gm;
    private AddressableManager _am;
    
    public static List<Vector2Int> GetNextDeepNearestBlockIndexes(Vector2Int index)
    {
        List<Vector2Int> returnList = new List<Vector2Int>();

        switch (index.x)
        {
            case 0 : 
                returnList.Add(new Vector2Int(0, index.y + 1));
                returnList.Add(index.y % 2 == 1
                    ? new Vector2Int(2, index.y + 1)
                    : new Vector2Int(1, index.y + 1));
                break;
            case 1 : 
                returnList.Add(new Vector2Int(1, index.y + 1));
                if (index.y % 2 == 1)
                    returnList.Add(new Vector2Int(0, index.y + 1));
                break;
            case 2 : 
                returnList.Add(new Vector2Int(0, index.y + 1));
                break;
        }

        return returnList;
    }

    public List<MapBlock> GetNextDeepNearestBlocks(Vector2Int index) =>
        GetNextDeepNearestBlockIndexes(index).Select(t => mapBlocks[t]).ToList();

    public void InitializeMap(Dictionary<Vector2Int, MapBlockEventType> adventureMap)
    {
        mapBlocks.Clear();
        
        var mapBlockPrefabs = _am.MapBlockPrefabs;
        
        // Calculate the hexagon position spacing.
        Vector3 boundSize = mapBlockPrefabs[0].GetComponent<MeshRenderer>().bounds.size;
        float hexagonRadius = Mathf.Max(boundSize.x, boundSize.z) / 2;
        float offsetZ = Mathf.Min(boundSize.x, boundSize.z) / 2;
        float offsetX = hexagonRadius + Mathf.Sqrt(hexagonRadius * hexagonRadius - offsetZ * offsetZ);

        foreach (var mapBlock in adventureMap)
        {
            int row = mapBlock.Key.x;
            int column = mapBlock.Key.y;
            // Get position.
            Vector3 position = Vector3.zero;
            position.x = column % 2 == 0 ? 
                row > 0 ? (row % 2 == 0 ? +offsetX : -offsetX) * 2 : 0 :
                row % 2 == 0 ? +offsetX : -offsetX;
            //position.y = column % 3 == 0 ? 0 : column % 2 == 0 ? .5f : 1;
            position.z = column * offsetZ;
                
            // Instantiate.
            MapBlock block =
                Instantiate(mapBlockPrefabs[mapBlock.Value], position, Quaternion.identity, transform).
                    GetComponent<MapBlock>();
            List<Vector2Int> nextBlocks = GetNextDeepNearestBlockIndexes(_gm.AdventurePosition);
            block.Initialize(mapBlock.Key, nextBlocks.Contains(mapBlock.Key), block.index.y == _gm.AdventurePosition.y - 1);
            mapBlocks.Add(block.index, block);
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Ray casting map block.
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit[] hits = Physics.RaycastAll(ray, 100, _layer);
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
        
        /*if (Input.GetKeyDown(KeyCode.T))
        {
            foreach (Transform child in transform)
            {
                Destroy(child.gameObject);
            }
            
            _gm.GenerateAdventureMap(System.Guid.NewGuid().GetHashCode());
            InitializeMap(_gm.AdventureMap);
        }*/
    }

    // Start is called before the first frame update
    void Start()
    {
        InitializeMap(_gm.AdventureMap);
        
        // Set locate mark init position.
        MapBlock block = mapBlocks[_gm.AdventurePosition];
        block.transform.DOLocalMoveY(2f, 2f).SetEase(Ease.InOutQuart);
        Vector3 position = block.transform.position;
        position.y = LOCATE_MARK_POSITION_Y;
        _locateMark.transform.position = position;
        _locateMark.transform.DOLocalRotate(new Vector3(0, 180, 0), 2f).
            SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InOutQuint);
        _locateMark.transform.DOMoveY(-.01f, 2f).
            SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InOutSine);
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _am = AddressableManager.Instance;
        _gm = GameManager.Instance;
    }
}
