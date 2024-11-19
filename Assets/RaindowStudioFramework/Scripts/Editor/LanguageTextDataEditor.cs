using System;
using UnityEngine;
using UnityEditor;

namespace RaindowStudio.Language
{
    [CustomPropertyDrawer(typeof(LanguageTextData))]
    public class LanguageTextDataDrawer : PropertyDrawer
    {
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            // Begin property field
            EditorGUI.BeginProperty(position, label, property);

            // Draw label for the whole property
            position = EditorGUI.PrefixLabel(position, GUIUtility.GetControlID(FocusType.Passive), label);

            // Calculate the widths for each field (half and half)
            float halfWidth = position.width / 2;

            // Set the position rectangles for text and font fields
            Rect textRect = new Rect(position.x, position.y, halfWidth - 5, position.height);
            Rect fontRect = new Rect(position.x + halfWidth + 5, position.y, halfWidth - 5, position.height);

            // Get the SerializedProperties for text and font
            SerializedProperty textProperty = property.FindPropertyRelative("text");
            SerializedProperty fontProperty = property.FindPropertyRelative("font");

            // Draw the text and font fields in one line
            EditorGUI.PropertyField(textRect, textProperty, GUIContent.none);
            EditorGUI.PropertyField(fontRect, fontProperty, GUIContent.none);

            // End property field
            EditorGUI.EndProperty();
        }
    }
}