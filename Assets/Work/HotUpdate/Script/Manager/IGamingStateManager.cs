using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IGameStatusManager
{
    public void SaveData();
    public bool CheckLoadData();
    public void InitializeNewData();
}
