using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : Actor
{
    public CharacterData data;
    public Status statusAdditional;

    public override void Initialize()
    {
        InitializeStatus(data.statusOriginal);
    }
}
