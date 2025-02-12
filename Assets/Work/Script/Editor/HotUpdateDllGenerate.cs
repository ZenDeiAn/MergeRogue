using System.IO;
using UnityEditor;
using UnityEngine;

public class HotUpdateDllGenerate
{
    [MenuItem("HybridCLR/Move Dll")]
    public static void MoveDll()
    {
        string sourcePath = Path.Combine(Application.dataPath, "../HybridCLRData/HotUpdateDlls/Android/HotUpdate.dll");

        string targetFolder = Path.Combine(Application.dataPath, "Work/Addressable/HotUpdateLibrary");
        string targetFile = Path.Combine(targetFolder, "HotUpdate.dll.bytes");

        // Check File
        if (!File.Exists(sourcePath))
        {
            Debug.LogError($"No such file : {sourcePath}");
            return;
        }

        if (!Directory.Exists(targetFolder))
        {
            Directory.CreateDirectory(targetFolder);
        }

        File.Copy(sourcePath, targetFile, true);

        AssetDatabase.Refresh();

        Debug.Log($"Move Succeed : {targetFile}");
    }
}
