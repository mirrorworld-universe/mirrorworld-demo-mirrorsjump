using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

public class LoadingDialog : MonoBehaviour
{
    public Transform circle;
    public TextMeshProUGUI text;
    public GameObject button;
    public GameObject failedNotice;

    private Action retryAction;

    public void Init(Action retryAction)
    {
        this.retryAction = retryAction;
    }

    public void ShowWaiting(bool isWaiting,string waitingText)
    {
        failedNotice.SetActive(!isWaiting);
        this.text.gameObject.SetActive(isWaiting);
        this.text.text = waitingText;
        button.SetActive(!isWaiting);
        circle.gameObject.SetActive(isWaiting);
    }

    // Start is called before the first frame update
    void Start()
    {
        circle.DORotate(new Vector3(0, 0, 360), 1, RotateMode.WorldAxisAdd).SetLoops(-1);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnRetryClicked()
    {
        if (retryAction != null) retryAction();
    }
}
