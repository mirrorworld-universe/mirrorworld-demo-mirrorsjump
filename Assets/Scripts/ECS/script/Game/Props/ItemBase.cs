using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 可拾取道具基类
/// </summary>
public class ItemBase : MonoBehaviour
{
    private GameObject itemEffect;
    private SpriteRenderer sr;

    private float maxScale = 1.5f;
    private float minScale = 0.8f;
    private float curScale;
    private bool isBigger;
    private float scaleSpeed = 0.2f;

    private void Awake()
    {
        //// 创建道具摆放效果
        //var showObPrefabj = ResourceManager.Instance.Get("Prefab/ItemShowObj");
        //showObj = Instantiate(showObPrefabj, transform);
        //showObj.transform.localPosition = Vector3.zero;
        //showObj.GetComponent<SpriteRenderer>().sprite = sr.sprite;

        // 创建道具亮晶晶效果
        var prefab = ResourceManager.Instance.Get("Prefab/ItemEffect");
        itemEffect = Instantiate(prefab);
        itemEffect.transform.localScale = Vector3.one;
        itemEffect.transform.parent = transform;
        itemEffect.transform.localPosition = Vector3.zero;

        curScale = transform.localScale.x;
        maxScale = curScale * 1.3f;
        minScale = curScale * 1.2f;
    }

    /// <summary>
    /// 道具被拾取时调用此方法
    /// </summary>
    protected void PickupItem()
    {
        itemEffect.SetActive(false);

        var obj = ObjectPooler.Instance.SpawnFromPool("Pickup", transform.position, Quaternion.identity, 1f);
        obj.GetComponent<Animator>().SetTrigger("Play");
    }

    protected virtual void FixedUpdate()
    {
        if (isBigger)
        {
            curScale += scaleSpeed * Time.deltaTime;
        }
        else
        {
            curScale -= scaleSpeed * Time.deltaTime;
        }

        if (curScale >= maxScale)
        {
            isBigger = false;
        }
        else if(curScale < minScale)
        {
            isBigger = true;
        }

        transform.localScale = new Vector3(curScale, curScale, curScale);
    }
}
