using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace RaindowStudio.Language
{
    [CustomPropertyDrawer(typeof(LanguageComponentObjects))]
    public class LanguageComponentObjectsDrawer : PropertyDrawer
    {
        int split = 3;

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            EditorGUI.BeginProperty(position, label, property);

            float width = position.width / split;

            string[] keys = LanguageManager.dataSets[((LanguageManager)property.serializedObject.targetObject).usingDataSet];
            if (keys.Length > 0)
            {
                SerializedProperty index = property.FindPropertyRelative("indexOfKey");
                index.intValue = EditorGUI.Popup(new Rect(position.x, position.y, width, position.height), index.intValue, keys);
                if (keys.Length > index.intValue)
                {
                    property.FindPropertyRelative("key").stringValue = keys[index.intValue];
                    EditorGUI.PropertyField(new Rect(position.x + width + EditorGUIUtility.singleLineHeight, position.y, width * (split - 1) - EditorGUIUtility.singleLineHeight, position.height), property.FindPropertyRelative("componentObjects"));
                }
            }
            else
            {
                EditorGUI.LabelField(position, "Please add data to LanguageData ScriaptableObject at 'Resources/Language' folder.");
            }
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            float height = base.GetPropertyHeight(property, label);

            SerializedProperty list = property.FindPropertyRelative("componentObjects");
            if (list.isExpanded)
            {
                height = (EditorGUIUtility.singleLineHeight * list.arraySize) + (EditorGUIUtility.singleLineHeight * 3) + 9;
            }
            return height;
        }
    }
}