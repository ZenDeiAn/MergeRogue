using System;
using UnityEngine;
using UnityEditor;

namespace RaindowStudio.Language
{
    [CustomPropertyDrawer(typeof(LanguageData))]
    public class LanguageDataDrawer : PropertyDrawer
    {
        private const float lineHeight = 18f;

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            EditorGUI.BeginProperty(position, label, property);

            property.isExpanded = EditorGUI.Foldout(new Rect(position.x, position.y, lineHeight, lineHeight), property.isExpanded, GUIContent.none);

            // Draw key and dataType in the same line
            SerializedProperty keyProp = property.FindPropertyRelative("key");
            SerializedProperty typeProp = property.FindPropertyRelative("dataType");

            GUI.SetNextControlName(keyProp.stringValue);
            EditorGUI.PropertyField(new Rect(position.x, position.y, position.width * 0.75f, lineHeight), keyProp, GUIContent.none);
            EditorGUI.PropertyField(new Rect(position.x + position.width * 0.75f, position.y, position.width * 0.25f, lineHeight), typeProp, GUIContent.none);

            // Draw textData or spriteData based on dataType
            Rect dataRect = new Rect(position.x, position.y + lineHeight, position.width, lineHeight);
            if (property.isExpanded)
            {
                SerializedProperty dataProp = property.FindPropertyRelative($"{((LanguageDataType)typeProp.enumValueIndex).ToString().ToLower()}Data");
                // Add til achieve default size.
                while (dataProp.arraySize < Enum.GetNames(typeof(LanguageType)).Length)
                {
                    dataProp.InsertArrayElementAtIndex(0);
                }
                // Draw.
                foreach (LanguageType languageType in Enum.GetValues(typeof(LanguageType)))
                {
                    EditorGUI.PropertyField(dataRect, dataProp.GetArrayElementAtIndex((int)languageType), new GUIContent(languageType.ToString()));
                    dataRect.y += lineHeight;
                }
            }

            EditorGUI.EndProperty();
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return lineHeight * (property.isExpanded ? (Enum.GetValues(typeof(LanguageType)).Length + 1) : 1);
        }
    }
}