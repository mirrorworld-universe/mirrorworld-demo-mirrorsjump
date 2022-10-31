using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoleClimb : MonoBehaviour
{
    [SerializeField] private Transform[] points;
    [SerializeField] private float power = 1.5f;
    [SerializeField] private float interval = 0.3f;

    private float waitTime;
    void Start()
    {
        waitTime = (points.Length - 1) * interval;
        StartCoroutine(ASynClimb());
    }

    private IEnumerator ASynClimb()
    {
        while (true)
        {
            transform.position = points[0].position;
            Sequence sequence = DOTween.Sequence();

            for (int i = 1; i < points.Length; ++i)
            {
                sequence.Append(transform.DOJump(points[i].position, power, 1, interval));
            }

            yield return new WaitForSeconds(waitTime);
        }
    }
}
