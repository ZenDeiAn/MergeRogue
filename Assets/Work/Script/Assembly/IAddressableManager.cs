using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IAddressableManager
{
    bool Initialized { get; }
    bool AssetsLoaded { get; }
    Coroutine PatchAllAddressableAssets();
}
