using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using NUnit.Framework.Constraints;
using RaindowStudio.Language;
using UnityEditor;
using UnityEngine;

namespace RaindowStudio.Utility
{
    [CustomPropertyDrawer(typeof(EnumPairList<,>))]
    public class EnumPairListEditor : PropertyDrawer
    {
        public readonly Rect PADDING = new Rect(2, 3, 4, 2);
        
        private bool _folded = false;
        
        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            // Retrieve the actual type of the field (EnumPairList<TE, T>)
            Type fieldType = fieldInfo.FieldType;

            // Check if it's a generic type
            if (!(fieldType.IsGenericType && fieldType.GetGenericTypeDefinition() == typeof(EnumPairList<,>)))
                return;
            
            // Get the generic arguments (TE and T)
            Type teType = fieldType.GetGenericArguments()[0]; // TE
            Type tType = fieldType.GetGenericArguments()[1]; // TE
            
            EditorGUI.BeginProperty(position, label, property);
            
            if (EditorGUI.DropdownButton(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), new GUIContent(property.displayName), FocusType.Keyboard))
            {
                _folded = !_folded;
            }
            
            if (!_folded)
            {
                EditorGUI.HelpBox(position, null, MessageType.None);
                position.y += EditorGUIUtility.singleLineHeight;
                // Retrieve the dictionary field
                var keysProperty = property.FindPropertyRelative("keys");
                var valuesProperty = property.FindPropertyRelative("values");

                if (valuesProperty != null && valuesProperty.isArray &&
                    keysProperty != null && keysProperty.isArray)
                {
                    // Check the enum definition is modified or not
                    bool enumDefinitionModified = false;
                    Array enumValues = Enum.GetValues(teType);
                    if (keysProperty.arraySize == enumValues.Length &&
                        valuesProperty.arraySize == enumValues.Length)
                    {
                        for (int i = 0; i < keysProperty.arraySize; ++i)
                        {
                            if (keysProperty.GetArrayElementAtIndex(i).enumValueFlag != (int)enumValues.GetValue(i))
                            {
                                enumDefinitionModified = true;
                                break;
                            }
                        }
                    }
                    else
                    {
                        enumDefinitionModified = true;
                    }

                    if (enumDefinitionModified)
                    {
                        Dictionary<int, SerializedProperty> legacyProperties =
                            new Dictionary<int, SerializedProperty>();
                        for (int i = 0; i < valuesProperty.arraySize; ++i)
                        {
                            var key = keysProperty.GetArrayElementAtIndex(i);
                            legacyProperties[key.enumValueFlag] = valuesProperty.GetArrayElementAtIndex(i);
                        }

                        keysProperty.ClearArray();
                        for (int i = 0; i < Mathf.Max(enumValues.Length, valuesProperty.arraySize); ++i)
                        {
                            if (valuesProperty.arraySize <= i)
                            {
                                valuesProperty.InsertArrayElementAtIndex(i);
                            }
                            else if (i >= enumValues.Length)
                            {
                                valuesProperty.DeleteArrayElementAtIndex(i);
                                return;
                            }

                            keysProperty.InsertArrayElementAtIndex(i);
                            var keyProperty = keysProperty.GetArrayElementAtIndex(i);
                            keyProperty.enumValueFlag = (int)enumValues.GetValue(i);
                            keyProperty.serializedObject.ApplyModifiedProperties();
                            var key = keysProperty.GetArrayElementAtIndex(i);
                            var destinationProperty = valuesProperty.GetArrayElementAtIndex(i);
                            if (legacyProperties.TryGetValue(key.enumValueFlag, out var legacyProperty) && legacyProperty != null)
                            {

                                if (destinationProperty.propertyType == legacyProperty.propertyType)
                                {
                                    switch (legacyProperty.propertyType)
                                    {
                                        case SerializedPropertyType.Integer:
                                            destinationProperty.intValue = legacyProperty.intValue;
                                            break;
                                        case SerializedPropertyType.Boolean:
                                            destinationProperty.boolValue = legacyProperty.boolValue;
                                            break;
                                        case SerializedPropertyType.Float:
                                            destinationProperty.floatValue = legacyProperty.floatValue;
                                            break;
                                        case SerializedPropertyType.String:
                                            destinationProperty.stringValue = legacyProperty.stringValue;
                                            break;
                                        case SerializedPropertyType.ObjectReference:
                                            destinationProperty.objectReferenceValue =
                                                legacyProperty.objectReferenceValue;
                                            break;
                                        case SerializedPropertyType.Enum:
                                            destinationProperty.enumValueIndex = legacyProperty.enumValueIndex;
                                            break;
                                        // Handle other SerializedPropertyType cases as needed
                                        default:
                                            Debug.LogWarning(
                                                $"Unsupported property type: {legacyProperty.propertyType}");
                                            break;
                                    }
                                }
                            }
                        }
                    }

                    position.width -= PADDING.width;
                    position.x += PADDING.x;
                    position.y += PADDING.height;

                    // Iterate over the dictionary keys and values
                    for (int i = 0; i < keysProperty.arraySize; i++)
                    {
                        position.y += PADDING.height;
                        // Define rects for drawing key and value
                        var keyRect = new Rect(position.x, position.y + (i * EditorGUIUtility.singleLineHeight),
                            position.width / 2, EditorGUIUtility.singleLineHeight);
                        var valueRect = new Rect(position.x + position.width / 2,
                            position.y + (i * EditorGUIUtility.singleLineHeight), position.width / 2,
                            EditorGUIUtility.singleLineHeight);

                        // Draw key (as a label)
                        var key = keysProperty.GetArrayElementAtIndex(i);

                        EditorGUI.LabelField(keyRect, key.enumNames[i]);

                        EditorGUI.PropertyField(valueRect, valuesProperty.GetArrayElementAtIndex(i), GUIContent.none);
                    }
                }
            }

            EditorGUI.EndProperty();
        }

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            var keysProperty = property.FindPropertyRelative("keys");
            int arraySizePlusOne = keysProperty.arraySize + 1;
            return _folded ?
                EditorGUIUtility.singleLineHeight + 
                    PADDING.y +
                    PADDING.height : 
                arraySizePlusOne * EditorGUIUtility.singleLineHeight + 
                   PADDING.y +
                   arraySizePlusOne * PADDING.height;
        }
    }
}
