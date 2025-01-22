using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CustomPropertyDrawer(typeof(MergeCardShapeData))]
public class MergeCardShapeDataEditor : PropertyDrawer
{
    private readonly Dictionary<string, MergeCardShapeData> _dummyShapeDataDict = new();
    private MergeCardShapeData _dummyShapeData = null;
    private string _currentModifyingKey = "";
    
    private GUIStyle _customHelpBoxStyle;
    private Texture2D _backgroundTexture;
    
    public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
    {
        // Initialize style.
        if (_backgroundTexture == null)
        {
            _backgroundTexture = new Texture2D(1, 1);
            _backgroundTexture.SetPixel(0, 0, new Color(0.1f, 0.1f, 0.1f, 1f)); // Set to your desired color
            _backgroundTexture.Apply();
        }
        if (_customHelpBoxStyle == null)
        {
            _customHelpBoxStyle = new GUIStyle()
            {
                fontSize = 12,
                fontStyle = FontStyle.Bold,
                alignment = TextAnchor.MiddleCenter,
                normal =
                {
                    textColor = Color.white,
                    background = _backgroundTexture
                },
            };
        }
        
        // Get properties :
        SerializedProperty pointsProperty = property.FindPropertyRelative("Points");
        SerializedProperty gridSizeProperty = property.FindPropertyRelative("Size");
        MergeCardShapeData data;
        string key = property.serializedObject.targetObject.GetInstanceID() + "_" + property.propertyPath;
        if (!_dummyShapeDataDict.TryGetValue(key, out var value))
        {
            _dummyShapeDataDict[key] = new MergeCardShapeData();
            data = InitializeDummyData(property);
            data.Size = gridSizeProperty.vector2IntValue;
        }
        else
        {
            data = value;
        }
        
        // Get size
        float lineSpace = EditorGUIUtility.standardVerticalSpacing;
        float singleLineHeight = EditorGUIUtility.singleLineHeight;
        float lineHeight = singleLineHeight + lineSpace;
        int gridSize = MergeGrid.ROW_COLUMN_COUNT - 1;
        
        // Begin draw property!!!!!!!!!!
        EditorGUI.BeginProperty(position, label, property);
        // BG
        EditorGUI.HelpBox(position, string.Empty, MessageType.None);
        // Label
        EditorGUI.DropShadowLabel(new Rect(position.x, position.y, position.width, singleLineHeight), 
            $"MergeCardShape {data.Size}",
            _customHelpBoxStyle);
        // Modify button function
        bool modifyingThis = string.CompareOrdinal(_currentModifyingKey, key) == 0;
        if (GUI.Button(
                new Rect(position.x + lineSpace,
                    position.y + lineHeight,
                    modifyingThis ?
                        position.width / 3 - lineSpace :
                        position.width - lineSpace  * 2,
                    singleLineHeight),
                modifyingThis ? "Apply" : "Modify"))
        {
            if (!modifyingThis)
            {
                if (_dummyShapeData != null)
                {
                    _dummyShapeDataDict[_currentModifyingKey] = _dummyShapeData;
                }
                _dummyShapeData = new MergeCardShapeData(_dummyShapeDataDict[key]);
            }
            else
            {
                _dummyShapeData = null;
            }
            _currentModifyingKey = modifyingThis ? string.Empty : key;
            modifyingThis = string.CompareOrdinal(_currentModifyingKey, key) == 0;
            if (!modifyingThis)
            {
                data.Size = Vector2Int.zero;
                // Check bound size
                Vector2Int boundMin = Vector2Int.one * MergeGrid.ROW_COLUMN_COUNT;
                Vector2Int boundMax = -Vector2Int.one;
                foreach (var t in data.Points)
                {
                    if (boundMin.x > t.x)
                        boundMin.x = t.x;
                    if (boundMin.y > t.y)
                        boundMin.y = t.y;
                    if (boundMax.x < t.x)
                        boundMax.x = t.x;
                    if (boundMax.y < t.y)
                        boundMax.y = t.y;
                }
                pointsProperty.arraySize = data.Points.Count;
                // Remove blank
                for (int i = 0; i < data.Points.Count; ++i)
                {
                    data.Points[i] -= new Vector2Int(boundMin.x, boundMin.y);
                    pointsProperty.GetArrayElementAtIndex(i).vector2IntValue = data.Points[i];
                }

                data.Size = boundMax - boundMin + Vector2Int.one;
                gridSizeProperty.vector2IntValue = data.Size;
            }
        }

        if (modifyingThis)
        {
            // Clear button function
            if (GUI.Button(new Rect(position.x + position.width / 3 + lineSpace,
                        position.y + lineHeight,
                        position.width / 3 - lineSpace,
                        singleLineHeight),
                    "Clear"))
            {
                data.Points.Clear();
                data.Size = Vector2Int.zero;
            }
            // Cancel button function
            if (GUI.Button(new Rect(position.x + position.width / 3 * 2 + lineSpace,
                        position.y + lineHeight,
                        position.width / 3 - lineSpace * 2,
                        singleLineHeight),
                    "Cancel"))
            {
                ClearDummyData();
                InitializeDummyData(property);
            }
        }

        // Draw
        Vector2 startPosition =
            new Vector2(position.x + (position.width - lineHeight * gridSize) / 2 + lineSpace,
                position.y + lineHeight * 2);
        if (modifyingThis)
        {
            data.Size.x = data.Size.y = 0;
        }
        for (int i = 0; i < gridSize; ++i)
        {
            for (int j = 0; j < gridSize; ++j)
            {
                Rect rect = new Rect(startPosition.x + i * lineHeight,
                    startPosition.y + j *  lineHeight,
                    singleLineHeight,
                    singleLineHeight);

                bool activeBlock = data.Points.Contains(new Vector2Int(i, j));
                if (modifyingThis)
                {
                    if (GUI.Button(rect, activeBlock ? Texture2D.whiteTexture : Texture2D.blackTexture))
                    {
                        if (activeBlock)
                        {
                            data.Points.Remove(new Vector2Int(i, j));
                        }
                        else
                        {
                            data.Points.Add(new Vector2Int(i, j));
                        }
                    }
                }
                else
                {
                    if (activeBlock)
                    {
                        float offset = lineSpace / 2;
                        rect.x -= offset;
                        rect.y -= offset;
                        rect.width += offset;
                        rect.height += offset;
                    }
                    
                    GUI.DrawTexture(rect, activeBlock ? Texture2D.whiteTexture :
                        i < data.Size.x && j < data.Size.y ? Texture2D.grayTexture : _backgroundTexture);
                }
                
                // UpdateGridSize
                if (modifyingThis && activeBlock)
                {
                    if (data.Size.x <= i)
                    {
                        data.Size.x = i + 1;
                    }

                    if (data.Size.y <= j)
                    {
                        data.Size.y = j + 1;
                    }
                }
            }
        }
        EditorGUI.EndProperty();
    }
    
    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        float lineHeight = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;
        lineHeight += lineHeight * MergeGrid.ROW_COLUMN_COUNT;
        return lineHeight;
    }

    private MergeCardShapeData InitializeDummyData(SerializedProperty property)
    {
        string key = property.serializedObject.targetObject.GetInstanceID() + "_" + property.propertyPath;
        var data = _dummyShapeDataDict[key];
        var shapeProperty = property.FindPropertyRelative("Points");
        var gridSizeProperty = property.FindPropertyRelative("Size");
        data.Points.Clear();
        for (int i = 0; i < shapeProperty.arraySize; ++i)
        {
            data.Points.Add(shapeProperty.GetArrayElementAtIndex(i).vector2IntValue);
        }

        data.Size = gridSizeProperty.vector2IntValue;
        
        return data;
    }

    private void ClearDummyData()
    {
        _currentModifyingKey = string.Empty;
        _dummyShapeData = null;
    }
}
