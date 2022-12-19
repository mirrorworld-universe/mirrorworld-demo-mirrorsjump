
using System.Collections.Generic;
using UnityEngine;

public class ResourceManager : MonoSingleton<ResourceManager>
{
    private Dictionary<string, GameObject> resDict = new Dictionary<string, GameObject>();
    
    private Dictionary<string, Sprite> _sprites = new Dictionary<string, Sprite>();

    private Dictionary<string, Sprite> _sprites = new Dictionary<string, Sprite>();

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
<<<<<<< HEAD
    
=======


>>>>>>> Google-Dev1
    public Sprite GetSprite(string path)
    {
        if (_sprites.ContainsKey(path))
        {
            return _sprites[path];
        }

        _sprites[path] = Resources.Load<Sprite>(path);

        return _sprites[path];
    }
<<<<<<< HEAD
=======
    
    
    
>>>>>>> Google-Dev1
}
