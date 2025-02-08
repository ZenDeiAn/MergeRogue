using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class Main : SingletonUnityEternal<Main>
{
    public IAddressableManager Am => _addressableManager ?? new AddressableManager();
    private IAddressableManager _addressableManager;
}
