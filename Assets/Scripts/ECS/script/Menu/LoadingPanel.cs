using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadingPanel : MonoSingleton<LoadingPanel>
{
    [SerializeField] private GameObject loadingPanel;

    [SerializeField] private GameObject retryPanel;

    public void SetLoadingPanelEnable(bool isEnable)
    {
        loadingPanel.SetActive(isEnable);
    }

    public void SetRetryPanelEnable()
    {
        retryPanel.SetActive(true);

        StartCoroutine(ASynHideRetry(2));
    }

    IEnumerator ASynHideRetry(float time)
    {
        yield return new WaitForSeconds(time);

        retryPanel.SetActive(false);
    }
}
