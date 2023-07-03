using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeightNumber : MonoBehaviour
{
    [SerializeField] Sprite[] numberList;
    [SerializeField] Sprite mile;
    [SerializeField] SpriteRenderer srModel;
    [SerializeField] List<SpriteRenderer> srList;

    private float offset = 0.28f;

    private void Awake()
    {
        // 初始化sr列表,里面包含单位
        for(int i = 0; i < 7; ++i)
        {
            var numberSr = Instantiate(srModel, gameObject.transform);
            numberSr.transform.localPosition = new Vector3((i + 1) * offset, 0, 0);
            numberSr.gameObject.SetActive(true);
            srList.Add(numberSr);
        }
    }

    public void Setup(long height)
    {
        HideAll();

        if(height == 0)
        {
            srList[0].sprite = numberList[0];
            srList[1].sprite = mile;
            srList[0].color = Color.white;
            srList[1].color = Color.white;

            return;
        }

        // 计算显示位数
        var count = 0;
        var res = height;
        while(res != 0)
        {
            res = res / 10;
            ++count;
        }

        // 最后1位显示单位
        srList[count].sprite = mile;
        srList[count].color = Color.white;

        var numberTemp = height;
        // 获取每位的数字，显示出来
        for(int i = 0; i < count; ++i)
        {
            srList[i].color = Color.white;
            if (i == 0)
            {
                // 直接获取最高位
                srList[i].sprite = numberList[height / (long)Mathf.Pow(10, count - 1)];
            }
            else if(i == count - 1)
            {
                // 直接获取个位
                srList[i].sprite = numberList[height % 10];
            }
            else
            {
                srList[i].sprite = numberList[height / (long)Mathf.Pow(10, count - 1 - i) % 10];
            }
        }
    }

    private void HideAll()
    {
        foreach(var sr in srList)
        {
            sr.color = Color.clear;
        }
    }
}
