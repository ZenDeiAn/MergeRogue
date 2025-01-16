using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class MapManager : Processor<MapManager, MapState>
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

    public List<MapBlock> GetSameDeepBlocks(Vector2Int index) =>
        mapBlocks.Where(t => t.Key.y == index.y && t.Key.x != index.x).
            Select(p=> p.Value).ToList();
    
    public void InitializeMap(Dictionary<Vector2Int, MapBlockData> adventureMap)
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
                Instantiate(mapBlockPrefabs[mapBlock.Value.EventType], position, Quaternion.identity, transform).
                    GetComponent<MapBlock>();
            block.Initialize(mapBlock.Key, mapBlock.Value.State);
            mapBlocks.Add(block.index, block);
        }
    }

    private void LocationMarkIdleAnimation()
    {
        // Make Location Mark Idle Animation Sequence.
        _locateMark.transform.DOLocalRotate(new Vector3(0, 360, 0), 2f).SetLoops(-1, LoopType.Yoyo)
            .SetEase(Ease.InOutQuint).SetRelative();
        _locateMark.transform.DOMoveY(-2.5f, 2f).
            SetLoops(-1, LoopType.Yoyo).SetEase(Ease.InOutSine).SetRelative();
    }

    void Activate_Event()
    {
        MapBlock block = mapBlocks[AdventureManager.Instance.Position];
        Debug.Log($"Active Event : {block.eventType}");
        switch (block.eventType)
        {
            case MapBlockEventType.Minion:
            case MapBlockEventType.Elite:
            case MapBlockEventType.Boss:
                LoadingManager.Instance.LoadScene("Battle");
                break;

            case MapBlockEventType.Rest:
                break;

            case MapBlockEventType.Store:
                break;

            case MapBlockEventType.Treasure:
                break;
        }
    }
    
    void Activate_Move()
    {
        _locateMark.DOKill();
        Vector3 position = mapBlocks[AdventureManager.Instance.Position].transform.position;
        position.y = LOCATE_MARK_POSITION_Y;
        _locateMark.transform.DOMove(position, 2.5f).SetEase(Ease.InOutQuint).OnComplete(() =>
        {
            LocationMarkIdleAnimation();
            State = MapState.Event;
        });
    }
    
    void Activate_Select()
    {
        List<MapBlock> nextBlocks = GetNextDeepNearestBlocks(AdventureManager.Instance.Position);
        foreach (var block in nextBlocks)
        {
            block.State = MapBlockState.Selectable;
        }
    }
    
    void Update_Select()
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
                        if (block.State == MapBlockState.Selectable)
                        {
                            mapBlocks[AdventureManager.Instance.Position].State = MapBlockState.Interacted;
                            block.Interact();
                        }
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

    void Activate_Initialize()
    {
        AdventureManager.Instance.InitializeNewData();
        InitializeMap(AdventureManager.Instance.MapData);
        
        // Set locate mark init position.
        MapBlock block = mapBlocks[AdventureManager.Instance.Position];
        block.transform.DOLocalMoveY(2f, 2f).SetEase(Ease.InOutQuart);
        Vector3 position = block.transform.position;
        position.y = LOCATE_MARK_POSITION_Y;
        _locateMark.transform.position = position;
        LocationMarkIdleAnimation();
        State = MapState.Select;
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        _am = AddressableManager.Instance;
        _gm = GameManager.Instance;

        State = MapState.Initialize;
    }
}

public enum MapState
{
    Initialize,
    Select,
    Move,
    Event
}