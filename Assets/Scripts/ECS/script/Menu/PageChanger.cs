using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

/// <summary>
/// 页面选择组件
/// </summary>
public class PageChanger : MonoBehaviour
{
    public UnityAction onTurnLeft;
    public UnityAction onTurnRight;

    public TextMeshProUGUI[] pageTextList;
    public Button leftButton;
    public Button rightButton;
    /// <summary>
    /// 选中时颜色
    /// </summary>
    public Color selectionColor;

    private int totalCount;
    private int curIndex;

    void Start()
    {
        leftButton.onClick.AddListener(OnTurnLeft);
        leftButton.onClick.AddListener(OnTurnRight);
    }

    public void SetTotalPageCount(int count)
    {
        totalCount = count;

        if (totalCount == 0)
        {
            leftButton.gameObject.SetActive(false);
            rightButton.gameObject.SetActive(false);

            for (int i = 0; i < pageTextList.Length; ++i)
            {
                pageTextList[i].gameObject.SetActive(false);
            }
        }
        else if (totalCount < pageTextList.Length) 
        {
            // 隐藏多余的按钮
            for (int i = pageTextList.Length - 1; i > totalCount; --i) 
            {
                pageTextList[i].gameObject.SetActive(false);
            }

            SetPage(1);
        }
        else
        {
            SetPage(1);
        }

    }

    private void SetPage(int pageNumber)
    {
        pageNumber -= 1;
        // 先确定展示哪几个数字
        if (pageNumber > totalCount - pageTextList.Length)
        {
            // 第一个数字计算第一个数字该显示多少，若传入的pagenumber = 3， 123456，第一个显示3

        }

        // 当前页面数字高亮

        // 设置翻页按钮状态
    }

    private void OnTurnRight()
    {
        onTurnRight?.Invoke();
    }

    private void OnTurnLeft()
    {
        onTurnLeft?.Invoke();
    }
}
