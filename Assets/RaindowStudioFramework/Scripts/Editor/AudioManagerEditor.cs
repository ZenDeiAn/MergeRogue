using UnityEngine;
using UnityEditor;

namespace RaindowStudio.AudioManager
{
    [CustomEditor(typeof(AudioManager))]
    public class AudioManagerEditor : Editor
    {
        public override void OnInspectorGUI()
        {
            base.OnInspectorGUI();
            
            GUILayout.BeginHorizontal();
            
            if (GUILayout.Button("Reload AudioClips"))
            {
                ((AudioManager)target).ReloadAudioClips();
                EditorUtility.SetDirty(target);
            }
            
            GUILayout.EndHorizontal();
        }
    }
}