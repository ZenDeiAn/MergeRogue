/*
using System.Collections.Generic;
using UnityEngine;
using System;
using System.IO;
using System.Linq;
using System.Reflection;
using RaindowStudio.DesignPattern;
using RaindowStudio.IniParser;
using TMPro;
using UnityEngine.UI;

namespace QFSW.QC
{
    [DefaultExecutionOrder(-2)]
    public class QuantumConsoleImplement : MonoBehaviour
    {
        private const string FILE_NAME = "GameConfig.ini";
        private const string INI_SECTION = "Game Configuration";
        
        [SerializeField] private string password = "airpass1511";
        [SerializeField] private GameObject manual;
        [SerializeField] private TextMeshProUGUI txt_manual;
        [SerializeField] private Image img_commandPasswording;
        [SerializeField] private TextMeshProUGUI txt_gameVersion;

        public static List<CommandData> savableCommands = new List<CommandData>();

        private static QuantumSerializer _serializer = new QuantumSerializer();
        private static Dictionary<string, string> commandDescriptionOverride = new();

        private bool commandOpening = false;
        private string commandOpenPassword = string.Empty;

        [Command("configs")]
        public static void ListConfigs()
        {
            for (int i = 0; i < savableCommands.Count; ++i)
            {
                QuantumConsole.Instance.LogToConsole($"<color=#90FD40><b>{savableCommands[i].CommandName}</b></color>");
                if (!string.IsNullOrEmpty(savableCommands[i].CommandDescription))
                {
                    QuantumConsole.Instance.LogToConsole($"Description : {savableCommands[i].CommandDescription}");
                }
                QuantumConsole.Instance.LogToConsole($"<color=#FDF940>Value : {_serializer.SerializeFormatted(QuantumConsoleProcessor.InvokeCommand(savableCommands[i].CommandName))}</color>");
                QuantumConsole.Instance.LogToConsole(" ");
            }
        }

        [Command("save", "Save current configs.")]
        public static void Save()
        {
            string path = Path.Combine(Application.streamingAssetsPath, FILE_NAME);
            var iniData = File.Exists(path) ? 
                new IniDatas(path) :
                new IniDatas();
            if (!iniData.data.ContainsKey(INI_SECTION))
            {
                iniData.Add(new IniSection(INI_SECTION)); 
            }
            IniSection iniSection = iniData[INI_SECTION];
            
            foreach (var cmd in savableCommands)
            {
                IniNode iniNode;
                if (iniSection.data.TryGetValue(cmd.CommandName, out iniNode))
                {
                    iniNode.value =
                        _serializer.SerializeFormatted(QuantumConsoleProcessor.InvokeCommand(cmd.CommandName));
                }
                else
                {
                    if (cmd.HasDescription)
                    {
                        iniNode = new IniNode(cmd.CommandName,
                            _serializer.SerializeFormatted(QuantumConsoleProcessor.InvokeCommand(cmd.CommandName)),
                            cmd.CommandDescription);
                    }
                    else
                    {
                        iniNode = new IniNode(cmd.CommandName,
                            _serializer.SerializeFormatted(QuantumConsoleProcessor.InvokeCommand(cmd.CommandName)));
                    }
                    iniSection.Add(iniNode);
                }
            }
            
            iniData.Write(path);
        }

        [Command("load", "Load previous configs.")]
        public static void Load()
        {
            bool needUpdate = false;
            
            commandDescriptionOverride.Clear();
            string path = Path.Combine(Application.streamingAssetsPath, FILE_NAME);
            bool fileExist = File.Exists(path);
            if (fileExist)
            {
                var iniSection = new IniDatas(path)[INI_SECTION];

                foreach (var cmd in savableCommands)
                {
                    // Load config's value.
                    if (iniSection.data.ContainsKey(cmd.CommandName))
                    {
                        try
                        {
                            IniNode node = iniSection[cmd.CommandName];
                            QuantumConsoleProcessor.InvokeCommand($"{cmd.CommandName} {node.value}");
                            if (node.comments.Count > 0)
                            {
                                string description = "";
                                foreach (var comment in node.comments)
                                {
                                    description += comment;
                                }

                                if (!string.IsNullOrWhiteSpace(description))
                                {
                                    commandDescriptionOverride.Add(cmd.CommandName, description);
                                }
                            }
                        }
                        catch (Exception)
                        {
                            needUpdate = true;
                        }
                    }
                    else
                    {
                        needUpdate = true;
                    }
                }
            }
            else
            {
                needUpdate = true;
            }
                
            if (needUpdate || !fileExist)
            {
                Save();
            }
        }

        private void RefreshConfigsManualText()
        {
            txt_manual.text = "";
            for (int i = 0; i < savableCommands.Count; ++i)
            {
                var cmd = savableCommands[i];
                txt_manual.text += ($"<color=#90FD40><b>{cmd.CommandName}</b></color>" + Environment.NewLine);
                if (string.IsNullOrWhiteSpace(cmd.CommandDescription))
                {
                    if (commandDescriptionOverride.TryGetValue(cmd.CommandName, out var description))
                    {
                        txt_manual.text += $"Description : {description}" + Environment.NewLine;
                    }
                }
                else if(cmd.HasDescription)
                {
                    txt_manual.text += $"Description : {savableCommands[i].CommandDescription}" + Environment.NewLine;
                }
                txt_manual.text += $"<color=#FDF940>Value : {_serializer.SerializeFormatted(QuantumConsoleProcessor.InvokeCommand(savableCommands[i].CommandName))}</color>" + Environment.NewLine;
                txt_manual.text += Environment.NewLine;
            }
        }

        // Start is called before the first frame update
        void Awake()
        {
            password = $":{password}";
            // Filter savable commands.
            QuantumConsoleProcessor.GenerateCommandTable();
            IEnumerable<CommandData> commands = QuantumConsoleProcessor.GetUniqueCommands()
                .Where(t => !t.MethodData.DeclaringType.Assembly.FullName.StartsWith("QFSW.QC") &&
                            t.MethodData.GetCustomAttribute(typeof(SavableAttribute)) != null);

            foreach (var cmd in commands)
            {
                // Check validation.
                if (!cmd.MethodData.IsStatic)
                {
                    Type type = cmd.MethodData.DeclaringType;
                    if (type != null && !(type.IsSubclassOf(typeof(SingletonUnity<>).MakeGenericType(type)) ||
                                          type.IsSubclassOf(typeof(Singleton<>).MakeGenericType(type))))
                    {
                        Debug.LogWarning(
                            $"QuantumConsole Exception (SavableAttribute) : The field recommended to be declare as a static one or in a 'Singleton' class.\nFrom {type} - {cmd.CommandName}");
                    }
                }

                savableCommands.Add(cmd);
            }
            
            Load();
        }

        private void Start()
        {
            txt_manual.font = QuantumConsole.Instance.Theme.Font;
            QuantumConsole.Instance.OnActivate += () =>
            {
                manual.SetActive(true);
            };
            QuantumConsole.Instance.OnDeactivate += () =>
            {
                manual.SetActive(false);
            };
            RefreshConfigsManualText();
            QuantumConsole.Instance.OnInvoke += (t) =>
            {
                RefreshConfigsManualText();
            };
            txt_gameVersion.SetText($"{Application.productName} by {Application.companyName} - ver{Application.version}");
        }

        private void Update()
        {
            if (Input.GetKey(KeyCode.LeftAlt) && Input.GetKeyDown(KeyCode.BackQuote))
            {
                commandOpening = true;
                commandOpenPassword = ":";
            }

            if (!commandOpening) 
                return;
            
            commandOpenPassword += Input.inputString;
            img_commandPasswording.fillAmount = (float)commandOpenPassword.Length / password.Length;
            int index = commandOpenPassword.Length - 1;
            if (commandOpenPassword[index] != password[index])
            {
                commandOpening = false;
                img_commandPasswording.fillAmount = 0;
            }
            else if (commandOpenPassword == password)
            {
                QuantumConsole.Instance.Activate();
                commandOpening = false;
                img_commandPasswording.fillAmount = 0;
            }

            //commandPasswording.fillAmount = 
        }

        private void LateUpdate()
        {
            if(QuantumConsole.Instance.IsActive)
            {
                RefreshConfigsManualText();
            }
        }
    }

    [AttributeUsage(AttributeTargets.Field, AllowMultiple = true, Inherited = false)]
    public class SavableAttribute : Attribute { }
}
*/
