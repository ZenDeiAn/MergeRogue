/*using System.Collections;
using System.Collections.Generic;
using RaindowStudio.Utility;
using UnityEditor;
using UnityEngine;

[CustomPropertyDrawer(typeof(ActorSkillData))]
public class ActorSkillDataEditor : PropertyDrawer
{
    private bool isFolded = false; // Keeps track of the foldout state

    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        EditorGUI.BeginProperty(position, label, property);

        // Calculate initial heights and areas
        float lineHeight = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;
        Rect foldoutRect = new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight);

        // Draw the foldout
        isFolded = EditorGUI.Foldout(foldoutRect, isFolded, label);

        if (isFolded)
        {
            // Indent for nested properties
            EditorGUI.indentLevel++;

            // Draw each field manually
            SerializedProperty nameProp = property.FindPropertyRelative("name");
            SerializedProperty descriptionProp = property.FindPropertyRelative("description");
            SerializedProperty targetHostileProp = property.FindPropertyRelative("targetHostile");
            SerializedProperty numberProp = property.FindPropertyRelative("number");
            SerializedProperty multiplyProp = property.FindPropertyRelative("multiply");
            SerializedProperty buffTypeProp = property.FindPropertyRelative("buffType");
            SerializedProperty buffRoundProp = property.FindPropertyRelative("buffRound");

            // Draw properties line by line
            Rect fieldRect = new Rect(position.x, position.y + lineHeight, position.width, EditorGUIUtility.singleLineHeight);
            EditorGUI.PropertyField(fieldRect, nameProp);
            fieldRect.y += lineHeight;

            EditorGUI.PropertyField(fieldRect, descriptionProp);
            fieldRect.y += lineHeight;

            EditorGUI.PropertyField(fieldRect, targetHostileProp);
            fieldRect.y += lineHeight;

            EditorGUI.PropertyField(fieldRect, numberProp);
            fieldRect.y += lineHeight;

            EditorGUI.PropertyField(fieldRect, multiplyProp);
            fieldRect.y += lineHeight;

            EditorGUI.PropertyField(fieldRect, buffTypeProp);
            fieldRect.y += lineHeight;

            // Conditionally display buffRound
            if ((BuffType)buffTypeProp.enumValueIndex != BuffType.None)
            {
                EditorGUI.PropertyField(fieldRect, buffRoundProp);
                fieldRect.y += lineHeight;
            }

            EditorGUI.indentLevel--;
        }

        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        float lineHeight = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;

        if (isFolded)
        {
            // Calculate total height based on visible fields
            SerializedProperty buffTypeProp = property.FindPropertyRelative("buffType");
            int totalLines = 6; // Number of always-visible fields

            if ((BuffType)buffTypeProp.enumValueIndex != BuffType.None)
            {
                totalLines++; // Add one more line for buffRound
            }

            return lineHeight * (totalLines + 1); // +1 for the foldout
        }

        return lineHeight; // Only the foldout is visible when collapsed
    }
}*/