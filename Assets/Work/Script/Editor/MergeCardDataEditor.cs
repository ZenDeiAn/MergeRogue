using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine;
using UnityEditor;

[CustomPropertyDrawer(typeof(MergeCardData))]
public class MergeCardDataEditor : PropertyDrawer
{
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        float space = EditorGUIUtility.standardVerticalSpacing;
        float lineHeight = EditorGUIUtility.singleLineHeight;
        
        // Get the "name" property
        SerializedProperty nameProperty = property.FindPropertyRelative("ID");

        // Use the "name" value as the foldout label
        label.text = !string.IsNullOrEmpty(nameProperty.stringValue) ? nameProperty.stringValue : "Unnamed Element";

        // Draw the foldout
        EditorGUI.PropertyField(position, property, label, true);
        
        Sprite iconProperty = property.FindPropertyRelative("Icon").objectReferenceValue as Sprite;
        Rect iconRect = new Rect(
            position.x - lineHeight + space,
            position.y + space,
            lineHeight - space * 2,
            lineHeight - space * 2);
        if (iconProperty != null)
        {
            Texture2D texture = iconProperty.texture;
            Rect textureRect = iconProperty.rect;
            Rect uv = new Rect(
                textureRect.x / texture.width,
                textureRect.y / texture.height,
                textureRect.width / texture.width,
                textureRect.height / texture.height
            );
            GUI.DrawTextureWithTexCoords(iconRect, texture, uv);
        }
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        return EditorGUI.GetPropertyHeight(property, true);
    }
}
