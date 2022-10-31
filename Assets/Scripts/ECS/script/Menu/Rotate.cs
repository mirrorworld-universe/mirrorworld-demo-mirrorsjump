using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour
{
    // 每次旋转360度的多少份
    [SerializeField] private float speed = 10;
    private Vector3 eulerAngle;

    private void FixedUpdate()
    {
        eulerAngle = transform.eulerAngles;
        eulerAngle.z += Time.fixedDeltaTime* speed;
        transform.eulerAngles = eulerAngle;
    }
}
