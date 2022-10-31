using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResourceManager : MonoSingleton<ResourceManager>
{
    private Dictionary<string, GameObject> resDict = new Dictionary<string, GameObject>();

    /// <summary>
    /// 获取资源
    /// </summary>
    /// <param name="path"></param>
    /// <returns></returns>
    public GameObject Get(string path)
    {
        if (resDict.ContainsKey(path))
        {
            return resDict[path];
        }

        resDict[path] = Resources.Load<GameObject>(path);

        return resDict[path];
    }
}
