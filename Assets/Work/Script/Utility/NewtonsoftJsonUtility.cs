using System.Collections;
using System.Collections.Generic;
using System.Diagnostics.Eventing.Reader;
using Newtonsoft.Json.Linq;
using UnityEngine;

public static class NewtonsoftJsonUtility
{
    public static int ToInt(this JToken self)
    {
        if (int.TryParse(self.ToString(), out int result))
        {
            return result;
        }
        
        Debug.LogError($"JToken : {self} cannot convert to integer.");
        return 0;
    }
    
    public static float ToFloat(this JToken self)
    {
        if (float.TryParse(self.ToString(), out float result))
        {
            return result;
        }
        
        Debug.LogError($"JToken : {self} cannot convert to float.");
        return 0;
    }
    
    public static bool ToBool(this JToken self)
    {
        if (bool.TryParse(self.ToString(), out bool result))
        {
            return result;
        }
        
        Debug.LogError($"JToken : {self} cannot convert to boolean.");
        return false;
    }

    public static bool TryApplyDataToListProperty<T>(this JToken jToken, string keyName, ref List<T> targetListProperty) =>
        (jToken as JObject).TryApplyDataToListProperty(keyName, ref targetListProperty);

    public static bool TryApplyDataToProperty<T>(this JToken jToken, string keyName, ref T targetProperty) =>
        (jToken as JObject).TryApplyDataToProperty(keyName, ref targetProperty);

    public static bool TryApplyDataToListProperty<T>(this JObject jObject, string keyName, ref List<T> targetListProperty)
    {
        if (!jObject.TryGetValue(keyName, out JToken jToken))
            return false;
        {
            JArray jArray = jToken as JArray;
            if (jArray == null)
                return false;
            {
                foreach (var itemAmount in jArray)
                {
                    targetListProperty.Add(itemAmount.ToObject<T>());
                }

                return true;
            }
        }
    }
    
    public static bool TryApplyDataToProperty<T>(this JObject jObject, string keyName, ref T targetProperty)
    {
        if (jObject.TryGetValue(keyName, out JToken jToken))
        {
            if (typeof(T) == typeof(Vector2))
            {
                string tokenString = jToken.ToString();
                string[] strings = tokenString.Remove(tokenString.Length - 1, 1).Remove(0, 1).Split(',');
                if (strings.Length == 2 &&
                    float.TryParse(strings[0].Trim(), out float x) &&
                    float.TryParse(strings[1].Trim(), out float y))
                    targetProperty = (T)(object)new Vector2(x, y);
                else
                    return false;
            }
            else if (typeof(T) == typeof(Vector2Int))
            {
                string tokenString = jToken.ToString();
                string[] strings = tokenString.Remove(tokenString.Length - 1, 1).Remove(0, 1).Split(',');
                if (strings.Length == 2 &&
                    int.TryParse(strings[0].Trim(), out int x) &&
                    int.TryParse(strings[1].Trim(), out int y))
                    targetProperty = (T)(object)new Vector2Int(x, y);
                else
                    return false;
            }
            else if (typeof(T) == typeof(Vector3))
            {
                string tokenString = jToken.ToString();
                string[] strings = tokenString.Remove(tokenString.Length - 1).Remove(0).Split(',');
                if (strings.Length == 3 &&
                    float.TryParse(strings[0].Trim(), out float x) &&
                    float.TryParse(strings[1].Trim(), out float y) &&
                    float.TryParse(strings[2].Trim(), out float z))
                    targetProperty = (T)(object)new Vector3(x, y, z);
                else
                    return false;
                
            }
            else if (typeof(T) == typeof(Vector3Int))
            {
                string tokenString = jToken.ToString();
                string[] strings = tokenString.Remove(tokenString.Length - 1).Remove(0).Split(',');
                if (strings.Length == 3 &&
                    int.TryParse(strings[0].Trim(), out int x) &&
                    int.TryParse(strings[1].Trim(), out int y) &&
                    int.TryParse(strings[2].Trim(), out int z))
                    targetProperty = (T)(object)new Vector2Int(x, y);
                else
                    return false;
            }
            else
            {
                targetProperty = jToken.ToObject<T>();
            }
            return true;
        }

        return false;
    }
}
