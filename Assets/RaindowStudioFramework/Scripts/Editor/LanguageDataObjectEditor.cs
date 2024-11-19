using System;
using UnityEngine;
using UnityEditor;

namespace RaindowStudio.Language
{
    [CustomEditor(typeof(LanguageDataObject))]
    public class LanguageDataObjectEditor : Editor
    {
        //string searching;
        //int index = 0;

        private bool _isExpanded = false;
        
        public override void OnInspectorGUI()
        {
            /*
            EditorGUILayout.BeginHorizontal();
            searching = EditorGUILayout.TextField(searching);
            if (GUI.Button(EditorGUILayout.GetControlRect(GUILayout.MinWidth(60)), "Search"))
            {
                EditorGUI.FocusTextInControl(searching);
            }
            EditorGUILayout.EndHorizontal();
            */
            _isExpanded = EditorGUILayout.Foldout(_isExpanded, "Default Text Font(TMP)");

            if (_isExpanded)
            {
                SerializedProperty dataProp = serializedObject.FindProperty("defaultFont");
                // Add til achieve default size.
                while (dataProp.arraySize < Enum.GetNames(typeof(LanguageType)).Length)
                {
                    dataProp.InsertArrayElementAtIndex(0);
                }

                // Draw.
                foreach (LanguageType languageType in Enum.GetValues(typeof(LanguageType)))
                {
                    EditorGUILayout.BeginHorizontal();
                    EditorGUILayout.PropertyField(dataProp.GetArrayElementAtIndex((int)languageType),
                        new GUIContent(languageType.ToString()));
                    EditorGUILayout.EndHorizontal();
                }
            }

            EditorGUILayout.PropertyField(serializedObject.FindProperty("languageDatas"));

            serializedObject.ApplyModifiedProperties();
        }
    }
}