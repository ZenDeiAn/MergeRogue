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