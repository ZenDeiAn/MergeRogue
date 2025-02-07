using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TMPFontChanger : MonoBehaviour
{
    [SerializeField] private TMP_FontAsset newFont;

    [ContextMenu("Change All TextMeshPro Fonts")]
    private void ChangeAllTextMeshProFonts()
    {
        if (newFont == null)
        {
            Debug.LogError("New font is not assigned.");
            return;
        }

        ChangeFontsInChildren(transform);
        Debug.Log("Font change completed.");
    }

    private void ChangeFontsInChildren(Transform parent)
    {
        foreach (Transform child in parent)
        {
            TextMeshProUGUI[] tmpTexts = child.GetComponentsInChildren<TextMeshProUGUI>(true);
            foreach (TextMeshProUGUI tmpText in tmpTexts)
            {
                tmpText.font = newFont;
            }

            TMP_InputField[] tmpInputFields = child.GetComponentsInChildren<TMP_InputField>(true);
            foreach (TMP_InputField tmpInputField in tmpInputFields)
            {
                tmpInputField.fontAsset = newFont;
            }

            // Recursively call this function to handle nested children
            if (child.childCount > 0)
            {
                ChangeFontsInChildren(child);
            }
        }
    }
}
