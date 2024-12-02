using System.Collections;
using System.Collections.Generic;
using RaindowStudio.AudioManager;
using UnityEditor;
using UnityEngine;

[CustomEditor(typeof(MapData))]
public class MapDataEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        
        /*GUILayout.BeginHorizontal();
            
        if (GUILayout.Button("Reload MapBlocks"))
        {
            ((MapData)target).ReloadMapBlocks();
            EditorUtility.SetDirty(target);
        }
            
        GUILayout.EndHorizontal();*/
    }
}
