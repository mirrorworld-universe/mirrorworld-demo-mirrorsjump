using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScrollSceneItem : MonoBehaviour
{
    [SerializeField] float speed = 6;

    [SerializeField] private Transform img1;
    [SerializeField] private Transform img2;

    private Vector3 tempPos1;
    private Vector3 tempPos2;

    private float initX;
    //private float imageWidth;

    GameController gameController;
    void Start()
    {
        initX = img1.localPosition.x;
        gameController = FindObjectOfType<GameController>();
    }

    private void ResetZeroPos(Transform img)
    {
        Vector3 posTemp = img.localPosition;
        posTemp.x = initX;
        img.localPosition = posTemp;
    }

    public void SetSpeed(float speed_)
    {
        speed = speed_;
    }

    void FixedUpdate()
    {
        if (gameController.GetGameState() == GameState.Gaming)
        {

            tempPos1 = img1.position;
            tempPos1.x += Time.deltaTime * speed;
            img1.position = tempPos1;

            tempPos2 = img2.position;
            tempPos2.x += Time.deltaTime * speed;
            img2.position = tempPos2;

            if (img1.position.x >= 11)
            {
                ResetZeroPos(img1);
            }

            if (img2.position.x >= 11)
            {
                ResetZeroPos(img2);
            }
        }
    }
}
