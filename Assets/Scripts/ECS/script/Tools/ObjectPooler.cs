using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectPooler : MonoSingleton<ObjectPooler>
{

    [System.Serializable]
    public class Pool
    {
        public string tag;
        public GameObject prefab;
        public int size;
    }

    [SerializeField] Transform poolParent;
    public List<Pool> pools;
    public Dictionary<string, Queue<GameObject>> poolDictionary;

    void Start()
    {
        poolDictionary = new Dictionary<string, Queue<GameObject>>();

        foreach(Pool pool in pools)
        {
            Queue<GameObject> objectPool = new Queue<GameObject>();
            for(int i=0;i<pool.size;++i)
            {
                GameObject obj = Instantiate(pool.prefab, poolParent);
                obj.SetActive(false);
                objectPool.Enqueue(obj);
            }

            poolDictionary.Add(pool.tag, objectPool);
        }
    }

    // hideTime = -1时，不定时隐藏
    public GameObject SpawnFromPool(string tag, Vector3 position,Quaternion rotation, float hideTime)
    {
        if(!poolDictionary.ContainsKey(tag))
        {
            Debug.LogWarning("type doesn't exist! " + tag);
            return null;
        }

        GameObject objectToSpawn = poolDictionary[tag].Dequeue();

        objectToSpawn.SetActive(true);
        objectToSpawn.transform.position = position;
        objectToSpawn.transform.rotation = rotation;

        poolDictionary[tag].Enqueue(objectToSpawn);

        StartCoroutine(HideItem(objectToSpawn, hideTime));

        return objectToSpawn;
    }

    // 回收全部对象
    public void RecoveryAllObject(string tag)
    {
        foreach(var obj in poolDictionary[tag])
        {
            obj.SetActive(false);
        }
    }

    IEnumerator HideItem(GameObject obj, float time)
    {
        if(time < 0)
        {
            yield break;
        }
        yield return new WaitForSeconds(time);
        obj.SetActive(false);
    }
}
