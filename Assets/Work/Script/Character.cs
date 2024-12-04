using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : Actor
{
    public CharacterDataSet data;
    public Status statusAdditional;

    public override void Initialize()
    {
        InitializeStatus(data.Status);
    }
}
