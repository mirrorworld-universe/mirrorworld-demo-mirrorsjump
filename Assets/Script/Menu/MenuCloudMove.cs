
using System;
using UnityEngine;

public class MenuCloudMove : MonoBehaviour
{
    private float Speed = -0.5f;

    private void Start()
    {
        Speed = -0.5f;
    }

    private void FixedUpdate()
    {
        if (Speed > 0)
            {
                if (gameObject.GetComponent<RectTransform>().anchoredPosition.x >= 0)
                {
                    Speed = -Speed;
                    return;
                }

                gameObject.GetComponent<RectTransform>().anchoredPosition = new Vector2( gameObject.GetComponent<RectTransform>().anchoredPosition.x
                    +Speed, gameObject.GetComponent<RectTransform>().anchoredPosition.y);
            }
            else
            {
                if (gameObject.GetComponent<RectTransform>().anchoredPosition.x <= -1000)
                {
                    Speed = -Speed;
                    return;
                }

                gameObject.GetComponent<RectTransform>().anchoredPosition = new Vector2( gameObject.GetComponent<RectTransform>().anchoredPosition.x
                    +Speed, gameObject.GetComponent<RectTransform>().anchoredPosition.y);
              
            
            }
        
    }
    
    
    
}
