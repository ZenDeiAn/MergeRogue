using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;

[CustomPropertyDrawer(typeof(MergeCardShapeData))]
public class MergeCardShapeDataEditor : PropertyDrawer
{
    private readonly Vector2Int gridSize = new Vector2Int(4, 4);
    private readonly Dictionary<string, MergeCardShapeData> _dummyShapeDataDict = new();
    private MergeCardShapeData _dummyShapeData = null;
    private string _curretModifyingkey = "";
    
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
            _customHelpBoxStyle = new GUIStyle(EditorStyles.helpBox)
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
        SerializedProperty _shapeProperty = property.FindPropertyRelative("ShapeGrid");
        SerializedProperty _gridSizeProperty = property.FindPropertyRelative("GridSize");
        MergeCardShapeData data;
        string key = property.serializedObject.targetObject.GetInstanceID() + "_" + property.propertyPath;
        if (!_dummyShapeDataDict.TryGetValue(key, out var value))
        {
            _dummyShapeDataDict[key] = new MergeCardShapeData();
            data = InitializeDummyData(property);

            data.GridSize = _gridSizeProperty.vector2IntValue;
        }
        else
        {
            data = value;
        }
        
        // Get height
        float lineHeight = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;

        // Begin draw property!!!!!!!!!!
        EditorGUI.BeginProperty(position, label, property);
        // BG
        EditorGUI.HelpBox(position, string.Empty, MessageType.None);
        // Label
        EditorGUI.LabelField(new Rect(position.x, position.y, position.width, EditorGUIUtility.singleLineHeight), 
            $"MergeCardShape {data.GridSize}",
            _customHelpBoxStyle);
        // Modify button function
        bool modifying = String.CompareOrdinal(_curretModifyingkey, key) == 0;
        if (GUI.Button(
                new Rect(position.x + EditorGUIUtility.standardVerticalSpacing,
                    position.y + lineHeight,
                    modifying ? position.width / 3 - EditorGUIUtility.standardVerticalSpacing : position.width,
                    EditorGUIUtility.singleLineHeight),
                modifying ? "Apply" : "Modify"))
        {
            if (!modifying)
            {
                if (_dummyShapeData != null)
                {
                    _dummyShapeDataDict[_curretModifyingkey] = _dummyShapeData;
                }
                _dummyShapeData = new MergeCardShapeData(_dummyShapeDataDict[key]);
            }
            else
            {
                _dummyShapeData = null;
            }
            _curretModifyingkey = modifying ? string.Empty : key;
            if (!modifying)
            {
                data.GridSize = Vector2Int.zero;
                // Check Blank.
                int firstNonEmptyColumn = gridSize.x;
                int lastNonEmptyColumn = 0;
                int firstNonEmptyRow = gridSize.y;
                int lastNonEmptyRow = 0;
                for (int i = 0; i < data.ShapeGrid.Count; ++i)
                {
                    var row = data.ShapeGrid[i].Row;
                    for (int j = 0; j < row.Count; ++j)
                    {
                        if (row[j])
                        {
                            if (firstNonEmptyColumn > j)
                                firstNonEmptyColumn = j;
                            if (firstNonEmptyRow > i)
                                firstNonEmptyRow = i;
                            if (lastNonEmptyColumn < j)
                                lastNonEmptyColumn = j;
                            if (lastNonEmptyRow < i)
                                lastNonEmptyRow = i;
                        }
                    }
                }
                // Remove blank
                for (int i = 0; i < firstNonEmptyRow && i < data.ShapeGrid.Count; ++i)
                {
                    data.ShapeGrid.RemoveAt(0);
                }
                for (int i = data.ShapeGrid.Count; i > lastNonEmptyRow + 1; --i)
                {
                    data.ShapeGrid.RemoveAt(data.ShapeGrid.Count - 1);
                }

                for (int i = 0; i < data.ShapeGrid.Count; ++i)
                {
                    int index = 0;
                    var row = data.ShapeGrid[i].Row;
                    for (int j = 0; j < firstNonEmptyColumn && j < row.Count; ++j)
                    {
                        row.RemoveAt(0);
                    }
                    for (int j = row.Count; j > lastNonEmptyColumn + 1; --j)
                    {
                        row.RemoveAt(row.Count - 1);
                    }
                }
                
                // Apply modification.
                _shapeProperty.arraySize = 0;
                for (int i = 0; i < data.ShapeGrid.Count; ++i)
                {
                    _shapeProperty.arraySize++;
                    var row = data.ShapeGrid[i].Row;
                    SerializedProperty innerList = _shapeProperty.GetArrayElementAtIndex(i).FindPropertyRelative("Row");
                    innerList.arraySize = 0;
                    for (int j = 0; j < row.Count; j++)
                    {
                        innerList.arraySize++;
                        innerList.GetArrayElementAtIndex(j).boolValue = row[j];
                        if (data.GridSize.x <= j)
                        {
                            data.GridSize.x = j + 1;
                        }
                    }
                }
                data.GridSize.y = data.ShapeGrid.Count;

                _gridSizeProperty.vector2IntValue = data.GridSize;
            }
        }

        if (modifying)
        {
            // Clear button function
            if (GUI.Button(new Rect(position.x + position.width / 3 + EditorGUIUtility.standardVerticalSpacing,
                        position.y + lineHeight,
                        position.width / 3 - EditorGUIUtility.standardVerticalSpacing * 2,
                        EditorGUIUtility.singleLineHeight),
                    "Clear"))
            {
                data.ShapeGrid.Clear();
                data.GridSize = Vector2Int.zero;
            }
            // Cancel button function
            if (GUI.Button(new Rect(position.x + position.width / 3 * 2 + EditorGUIUtility.standardVerticalSpacing,
                        position.y + lineHeight,
                        position.width / 3 - EditorGUIUtility.standardVerticalSpacing,
                        EditorGUIUtility.singleLineHeight),
                    "Cancel"))
            {
                _curretModifyingkey = string.Empty;
                _dummyShapeData = null;
                InitializeDummyData(property);
            }
        }

        // Draw
        Vector2 startPosition =
            new Vector2((position.width - lineHeight * gridSize.x) / 2 + EditorGUIUtility.standardVerticalSpacing,
                lineHeight * 2);
        if (modifying)
        {
            data.GridSize.x = data.GridSize.y = 0;
        }
        for (int i = 0; i < gridSize.y; ++i)
        {
            for (int j = 0; j < gridSize.x; ++j)
            {
                Rect rect = new Rect(startPosition.x + j * lineHeight,
                    startPosition.y + i *  lineHeight,
                    EditorGUIUtility.singleLineHeight,
                    EditorGUIUtility.singleLineHeight);
                bool activeBlock = false;
                
                if (data.ShapeGrid.Count > i)
                {
                    var row = data.ShapeGrid[i].Row;
                    activeBlock = row.Count > j && row[j];
                }

                if (modifying)
                {
                    if (GUI.Button(rect, activeBlock ? Texture2D.whiteTexture : Texture2D.blackTexture))
                    {
                        if (activeBlock)
                        {
                            data.ShapeGrid[i].Row[j] = false;
                        }
                        else
                        {
                            for (int m = data.ShapeGrid.Count; m <= i; ++m)
                            {
                                data.ShapeGrid.Add(new MergeCardShapeRow());   
                            }
                            var row = data.ShapeGrid[i].Row;

                            for (int m = row.Count; m <= j; ++m)
                            {
                                row.Add(false);
                            }
                            row[j] = true;
                        }
                    }
                }
                else
                {
                    if (activeBlock)
                    {
                        float offset = EditorGUIUtility.standardVerticalSpacing / 2;
                        rect.x -= offset;
                        rect.y -= offset;
                        rect.width += offset;
                        rect.height += offset;
                    }
                    GUI.DrawTexture(rect, activeBlock ? Texture2D.whiteTexture :
                        j < data.GridSize.x && i <data.GridSize.y ? Texture2D.grayTexture : _backgroundTexture);
                }
                
                // UpdateGridSize
                if (modifying && activeBlock)
                {
                    if (data.GridSize.x <= j)
                    {
                        data.GridSize.x = j + 1;
                    }

                    if (data.GridSize.y <= i)
                    {
                        data.GridSize.y = i + 1;
                    }
                }
            }
        }
        EditorGUI.EndProperty();
    }
    
    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        float lineHeight = EditorGUIUtility.singleLineHeight + EditorGUIUtility.standardVerticalSpacing;
        lineHeight += lineHeight * (gridSize.y + 1);
        return lineHeight;
    }

    public MergeCardShapeData InitializeDummyData(SerializedProperty property)
    {
        string key = property.serializedObject.targetObject.GetInstanceID() + "_" + property.propertyPath;
        var data = _dummyShapeDataDict[key];
        var shapeProperty = property.serializedObject.FindProperty("ShapeGrid");
        var gridSizeProperty = property.serializedObject.FindProperty("GridSize");
        for (int i = 0; i < shapeProperty.arraySize; ++i)
        {
            SerializedProperty innerList = shapeProperty.GetArrayElementAtIndex(i).FindPropertyRelative("Row");
            data.ShapeGrid.Add(new MergeCardShapeRow());
            for (int j = 0; j < innerList.arraySize; ++j)
            {
                data.ShapeGrid[i].Row.Add(innerList.GetArrayElementAtIndex(j).boolValue);
            }
        }

        data.GridSize = gridSizeProperty.vector2IntValue;
        
        return data;
    }
}
