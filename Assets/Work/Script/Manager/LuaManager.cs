using System;
using System.Collections.Generic;
using UnityEngine;
using XLua;

public static class LuaManager
{
    public static LuaEnv LuaEnv { get; set; }
    public static Dictionary<string, Dictionary<string, LuaFunction>> Library { get; set; }

    public static void LuaRandomSeed(int randomSeed = -1)
    {
        string randomSeedStr = (randomSeed == -1 ? Guid.NewGuid().GetHashCode() : randomSeed).ToString();
        // Random seed initialize for lua.
        LuaEnv.DoString($"math.randomseed({randomSeedStr})");
    }

    public static void Initialize()
    {
        Library = new Dictionary<string, Dictionary<string, LuaFunction>>();

        LuaTable functionLibrary = LuaEnv.Global.Get<LuaTable>("FunctionLibrary");

        functionLibrary.ForEach<string, LuaTable>((k, v) =>
        {
            if (!Library.ContainsKey(k))
            {
                Library.Add(k, new Dictionary<string, LuaFunction>());
            }
            v.ForEach<string, LuaFunction>((key, val) =>
            {
                Library[k][key] = val;

            });
        });

        Library["Test"]["TestFunc"].Call();
    }
}
