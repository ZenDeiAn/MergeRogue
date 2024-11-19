using UnityEngine;
using UnityEditor;

namespace RaindowStudio.Attribute
{
    [CustomPropertyDrawer(typeof(UneditableFieldAttribute), true)]
    public class UneditableFieldAttributeDrawer : PropertyDrawer
    {
        UneditableFieldAttribute Attribute => attribute as UneditableFieldAttribute;

        public override float GetPropertyHeight(SerializedProperty property, GUIContent label)
        {
            return EditorGUI.GetPropertyHeight(property, label, true);
        }

        public override void OnGUI(Rect position, SerializedProperty property, GUIContent label)
        {
            bool uneditable = true;
            switch (Attribute.Option)
            {
                case ShowOnlyOption.editMode:
                    uneditable = !Application.isPlaying;
                    break;
                case ShowOnlyOption.playMode:
                    uneditable = Application.isPlaying;
                    break;
            }
            using (var scope = new EditorGUI.DisabledGroupScope(uneditable))
            {
                EditorGUI.PropertyField(position, property, label, true);
            }
        }
    }
}
