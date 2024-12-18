using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;

public class BattleManager : Processor<BattleManager, BattleState>
{
}

public enum BattleState
{
    Intro,
    Prepare,
    
}