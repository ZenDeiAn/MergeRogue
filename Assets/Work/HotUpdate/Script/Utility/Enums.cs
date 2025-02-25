using System;

[Serializable]
public enum WeaponSocketType
{
    Hand_L,
    Hand_R,
    UpperArm_L
}

[Serializable]
public enum CardRank
{
    B,
    A,
    S
}

[Serializable]
public enum BuffType
{
    None,
    Stun,
    _SplitForAnimation,
    Freeze,     // Reduce speed.
    Silence,    // Skill charge clear.
    Exhaust,    // Reduce damage.
    DoT,        // Poison, Burn and so on...
    Regen,      // Recover hp continuously.
}

/*[Serializable]
public enum BuffTriggerType
{
    StatusCheck,    // Like a bool for check has buff in specific Action.
    BeforeAction,   //
    AfterAction
}*/

[Serializable]
public enum TargetingType
{
    Self,
    AllAlly,
    AllEnemy,
    RandomSingleAlly,
    RandomSingleEnemy,
}

[Serializable]
public enum ActorType
{
    Ally,
    Enemy,
    Peaceful
}

[Serializable]
public enum MergeCardType
{
    Common,
    Equipment,
    Character,
    Special
}

[Serializable]
public enum ActType
{
    Idle,
    Attack,
    Skill
}

[Serializable]
public enum MergeLevel
{
    One,
    Two,
    Three,
    Ultimate
}

[Serializable]
public enum MergeSocketOverlapType
{
    None,
    Settable,
    Conflict,
    Mergeable,
    JustOverlap
}

[Serializable]
public enum MapBlockEventType
{
    None,   // Not reachable.
    Minion,
    Elite,
    RandomEvent,
    Rest,
    Store,
    Treasure,
    Boss
}

[Serializable]
public enum MapBlockState
{
    Idle,
    Selectable,
    Interacted,
    Abandoned
}

[Serializable]
public enum CharacterRank
{
    A,
    S
}