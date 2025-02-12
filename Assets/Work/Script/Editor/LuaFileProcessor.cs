using UnityEditor;
using UnityEngine;
using System.IO;

public class LuaFileProcessor : AssetPostprocessor
{
    private const string TargetFolder = "Assets/Work/Addressable/Lua";

    [MenuItem("Assets/Generate Lua.txt file", true)]
    private static bool ValidateProcessLuaFiles()
    {
        foreach (var selectedObject in Selection.objects)
        {
            var selectedAssetPath = AssetDatabase.GetAssetPath(selectedObject);
            if (selectedAssetPath.EndsWith(".lua"))
            {
                return true;
            }
        }
        return false;
    }

    [MenuItem("Assets/Generate Lua.txt file")]
    private static void ProcessLuaFiles()
    {
        if (!Directory.Exists(TargetFolder))
        {
            Directory.CreateDirectory(TargetFolder);
        }

        foreach (var selectedObject in Selection.objects)
        {
            var selectedAssetPath = AssetDatabase.GetAssetPath(selectedObject);

            if (!selectedAssetPath.EndsWith(".lua"))
            {
                Debug.LogWarning($"Skipped non-lua file: {selectedAssetPath}");
                continue;
            }

            string luaContent;
            try
            {
                luaContent = File.ReadAllText(selectedAssetPath);
            }
            catch (System.Exception e)
            {
                Debug.LogError($"Failed to read .lua file: {e.Message}");
                continue;
            }

            string fileName = Path.GetFileName(selectedAssetPath) + ".txt"; // Skill.lua -> Skill.lua.txt
            string targetPath = Path.Combine(TargetFolder, fileName);

            try
            {
                File.WriteAllText(targetPath, luaContent);
                Debug.Log($"Processed Lua file saved at: {targetPath}");
            }
            catch (System.Exception e)
            {
                Debug.LogError($"Failed to write processed file: {e.Message}");
            }
        }

        AssetDatabase.Refresh();
    }
}