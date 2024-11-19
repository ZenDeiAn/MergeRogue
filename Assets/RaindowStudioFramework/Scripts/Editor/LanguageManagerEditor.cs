using System.IO;
using UnityEngine;
using UnityEditor;
using System.Linq;

namespace RaindowStudio.Language
{
    [CustomEditor(typeof(LanguageManager))]
    public class LanguageManagerEditor : Editor
    {
        LanguageManager self;

        void SetDataSet(string dataSet)
        {
            self.usingDataSet = dataSet;
        }

        void ReloadData()
        {
            // Reset array
            LanguageManager.ReloadResourceData();
        }

        void OnEnable()
        {
            self = (LanguageManager)target;
            ReloadData();
        }

        public override void OnInspectorGUI()
        {
            if (LanguageManager.dataSets.Count > 0)
            {
                EditorGUILayout.BeginHorizontal();
                // Init the dataset/
                if (!LanguageManager.dataSets.ContainsKey(self.usingDataSet))
                {
                    self.usingDataSet = LanguageManager.dataSets.Keys.ToArray()[0];
                }
                string[] array = LanguageManager.dataSets.Keys.ToArray();
                int index = EditorGUILayout.Popup(self.dataSetIndex, array);
                if (index != self.dataSetIndex)
                {
                    SetDataSet(array[self.dataSetIndex = index]);
                }
                if (GUI.Button(EditorGUILayout.GetControlRect(GUILayout.MinWidth(20)), "Modify"))
                {
                    // Load the asset at the specified path
                    string path = Path.Combine("Assets", "Resources", "Language", $"{array[self.dataSetIndex]}.asset");
                    Object asset = AssetDatabase.LoadAssetAtPath<Object>(path);

                    if (asset != null)
                    {
                        // Select the asset in the Project window
                        Selection.activeObject = asset;

                        // Ping the asset to highlight it in the Project window
                        EditorGUIUtility.PingObject(asset);
                    }
                    else
                    {
                        Debug.LogError($"No asset found at path: {path}");
                    }
                }
                EditorGUILayout.EndHorizontal();
                
                if (GUI.Button(EditorGUILayout.GetControlRect(GUILayout.MinWidth(20)), "Reload Data"))
                {
                    ReloadData();
                }
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.PropertyField(serializedObject.FindProperty("languagePreview"));
                if (GUI.Button(EditorGUILayout.GetControlRect(GUILayout.MinWidth(20)), "Apply"))
                {
                    self.ApplyLanguageModifacation(self.languagePreview);
                }
                EditorGUILayout.EndHorizontal();
                EditorGUILayout.PropertyField(serializedObject.FindProperty("languageObjects"));
                serializedObject.ApplyModifiedProperties();
            }
            else
            {
                EditorGUILayout.LabelField("Please create at least one LanguageData at 'Resources/Language' folder");
                if (GUI.Button(EditorGUILayout.GetControlRect(GUILayout.MinWidth(20)), "Create Data"))
                {
                    string directory = Path.Combine(Application.dataPath, @"Resources\Language");
                    string newAssetName = "NewLanguageData.asset";
                    string newAssetPath = Path.Combine("Assets", "Resources", "Language", newAssetName);
                    if (!Directory.Exists(directory))
                    {
                        Directory.CreateDirectory(directory);
                    }
                    
                    LanguageDataObject languageDataObject = CreateInstance<LanguageDataObject>();
                    AssetDatabase.CreateAsset(languageDataObject, newAssetPath);
                    AssetDatabase.SaveAssets();
                    
                    // Select the asset in the Project window
                    Selection.activeObject = languageDataObject;

                    // Ping the asset to highlight it in the Project window
                    EditorGUIUtility.PingObject(languageDataObject);    
                }
            }
        }
    }
}