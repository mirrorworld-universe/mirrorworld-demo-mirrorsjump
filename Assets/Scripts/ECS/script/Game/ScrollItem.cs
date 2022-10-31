using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/// <summary>
/// 若干素材依次横向滚动,Image专用
/// </summary>
public class ScrollItem : MonoBehaviour
{
    //[SerializeField] Image prefabImg;
    [SerializeField] float speed = 6;

    [SerializeField] private Image img1;
    [SerializeField] private Image img2;

    private Vector3 tempPos1;
    private Vector3 tempPos2;
    private float imageWidth;
    void Start()
    {
        var target = img2.transform.position;
        target.x -= img2.rectTransform.rect.width;
        img1.transform.position = target;

        imageWidth = img2.rectTransform.rect.width;
    }

    private void ResetZeroPos(Image img)
    {
        var target = img.transform.position;
        target.x -= imageWidth * 2;
        img.transform.position = target;
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        tempPos1 = img1.transform.position;
        tempPos1.x += Time.deltaTime * speed;
        img1.transform.position = tempPos1;
        tempPos2 = img2.transform.position;
        tempPos2.x += Time.deltaTime * speed;
        img2.transform.position = tempPos2;

        if (img1.transform.position.x > imageWidth)
        {
            ResetZeroPos(img1);
        }
        else if (img2.transform.position.x > imageWidth)
        {
            ResetZeroPos(img2);
        }
    }
}
