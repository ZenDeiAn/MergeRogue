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
        label.text = !string.IsNullOrEmpty(nameProperty.stringValue) ? nameProperty.stringValue : "MergeCard(Undefined)";
        Sprite iconProperty = property.FindPropertyRelative("Icon").objectReferenceValue as Sprite;
        GUIContent content = new GUIContent(label);
        if (iconProperty != null)
        {
            content.image = iconProperty.texture;
            Rect textureRect = iconProperty.rect;
            Rect uv = new Rect(
                textureRect.x / content.image.width,
                textureRect.y / content.image.height,
                textureRect.width / content.image.width,
                textureRect.height / content.image.height
            );
        }

        EditorGUI.BeginProperty(position, content, property);
        
        property.isExpanded = EditorGUI.BeginFoldoutHeaderGroup(
            new Rect(position.x, position.y, position.width, lineHeight),
            property.isExpanded,
            content);
        if (property.isExpanded)
        {
            Rect rect = new Rect(position.x, position.y + lineHeight + space, position.width, lineHeight);
            // Iterate over all child properties
            SerializedProperty childProperty = property.Copy();
            SerializedProperty endProperty = property.GetEndProperty();
            // Start iteration
            if (childProperty.NextVisible(true)) // Move to the first child
            {
                do
                {
                    // Break if we've reached the end of the current property scope
                    if (SerializedProperty.EqualContents(childProperty, endProperty))
                        break;
                    // Handle arrays or lists
                    rect.height = EditorGUI.GetPropertyHeight(childProperty, true);
                    EditorGUI.PropertyField(rect, childProperty, true);
                    rect.y += rect.height + space;
                } while (childProperty.NextVisible(false)); // Move to the next visible child
            }
        }

        EditorGUI.EndFoldoutHeaderGroup();
        
        EditorGUI.EndProperty();
    }

    public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
    {
        return EditorGUI.GetPropertyHeight(property, true);
    }
}
