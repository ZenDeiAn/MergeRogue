using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "PlayerSkillLibrary", menuName = "PlayerSkillLibrary")]
public class PlayerSkillLibrary : ScriptableObject
{
    public List<PlayerSkillData> PlayerSkillData;
}

[Serializable]
public class PlayerSkillData
{
    public string ID;
    public ActorSkillData SkillData;
}
