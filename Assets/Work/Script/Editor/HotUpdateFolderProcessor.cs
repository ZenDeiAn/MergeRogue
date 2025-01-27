using System.Collections.Generic;
using System.IO;
using System.Text.RegularExpressions;
using System.Linq;
using UnityEditor;
using UnityEngine;

public class HotUpdateFolderProcessor : AssetPostprocessor
{
    private const string TargetFolder = "Assets/Work/Script";
    
    [MenuItem("Assets/Generate Script Reference class", true)]
    private static bool ValidateProcessHotUpdateFolder()
    {
        // 检查选择的对象是否是名为 "HotUpdate" 的文件夹
        if (Selection.activeObject is DefaultAsset asset && AssetDatabase.IsValidFolder(AssetDatabase.GetAssetPath(asset)))
        {
            return asset.name == "HotUpdate";
        }
        return false;
    }
    
    [MenuItem("Assets/Generate Script Reference class")]
    private static void ProcessHotUpdateFolder()
    {
        // 获取当前选择的文件夹路径
        var folderPath = AssetDatabase.GetAssetPath(Selection.activeObject);

        // 获取文件夹下的所有 .cs 脚本，忽略 HotUpdateGeneratedEnums.cs
        var csFiles = Directory.GetFiles(folderPath, "*.cs", SearchOption.AllDirectories);
        var filteredFiles = new List<string>();
        foreach (var file in csFiles)
        {
            if (!file.EndsWith("HotUpdateGeneratedEnums.cs"))
            {
                filteredFiles.Add(file);
            }
        }

        // 存储类名与静态方法名
        var classMethods = new Dictionary<string, List<string>>();

        // 遍历每个脚本文件并解析类和静态方法
        foreach (var file in filteredFiles)
        {
            var code = File.ReadAllText(file);

            // 提取类名
            var classMatches = Regex.Matches(code, @"\bclass\s+(\w+)");
            foreach (Match classMatch in classMatches)
            {
                var className = classMatch.Groups[1].Value;
                if (!classMethods.ContainsKey(className))
                {
                    classMethods[className] = new List<string>();
                }

                // 提取静态方法名
                var staticMethodMatches = Regex.Matches(code, @"\bstatic\s+.*?\s+(\w+)\s*\(");
                foreach (Match methodMatch in staticMethodMatches)
                {
                    var methodName = methodMatch.Groups[1].Value;
                    classMethods[className].Add(methodName);
                }
            }
        }

        // 指定生成的文件保存路径
        var outputPath = Path.Combine(TargetFolder, "HotUpdateDefinitionReference.cs");

        // 生成代码内容
        var enumCode = GenerateEnumCode(classMethods);

        // 写入到指定文件
        File.WriteAllText(outputPath, enumCode);
        AssetDatabase.Refresh();
        Debug.Log($"Enum 文件生成成功，路径：{outputPath}");
    }

    private static string GenerateEnumCode(Dictionary<string, List<string>> classMethods)
    {
        using (var writer = new StringWriter())
        {
            writer.WriteLine("namespace HotUpdate");
            writer.WriteLine("{");

            foreach (var kvp in classMethods)
            {
                var className = kvp.Key;
                var methods = kvp.Value;

                writer.WriteLine($"    public enum {className}");
                writer.WriteLine("    {");
                foreach (var method in methods)
                {
                    writer.WriteLine($"        {method},");
                }
                writer.WriteLine("    }");
            }

            writer.WriteLine("}");
            return writer.ToString();
        }
    }
}