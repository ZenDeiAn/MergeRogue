using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : Actor
{
    public CharacterDataSet data;

    public override void Initialize()
    {
        InitializeStatus(data.Status);
    }
}
