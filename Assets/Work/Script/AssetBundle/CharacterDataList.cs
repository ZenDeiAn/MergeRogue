using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "CharacterDataList", menuName = "CharacterDataList")]
public class CharacterDataList : ScriptableObject
{
    public List<CharacterData> CharacterData = new List<CharacterData>();
}