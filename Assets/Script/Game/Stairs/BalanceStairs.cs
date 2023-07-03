using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class BalanceStairs : MonoBehaviour
{
    public float VerticalVelocity = 10f;
    private float HeightOffset = 0.19f;
    private GameController GameController;
    private float RecoveryLine = 0;

    [SerializeField] private Transform stair;
    [SerializeField] private Transform leftBorder;
    [SerializeField] private Transform rightBorder;

    public void SetGameController(GameController gameController)
    {
        GameController = gameController;
    }

    private void OnCollisionEnter2D(Collision2D Other)
    {
        Rigidbody2D Rigid = Other.collider.GetComponent<Rigidbody2D>();

        // 避免触发相应道具后和台阶发生二次碰撞
        if (Other.collider.GetComponent<MirrorJump>().GetOverTurnState() ||
            Other.collider.GetComponent<MirrorJump>().GetRocketState() ||
            Other.collider.GetComponent<MirrorJump>().GetEnterBlackState())
        {
            return;
        }

        if (Rigid != null)
        {
            // 计算角色落点位置
            var mirriorX = Rigid.transform.position.x;

            var leftX = leftBorder.position.x;
            var rightX = rightBorder.position.x;

            if(mirriorX> leftX && mirriorX < rightX)
            {
                // 正常跳跃
                Vector2 Force = Rigid.velocity;

                if (Other.collider.GetComponent<MirrorJump>().GetSpringState())
                {
                    Force.y = VerticalVelocity + Other.collider.GetComponent<MirrorJump>().SpringForce;
                    Other.collider.GetComponent<MirrorJump>().UseSpring();
                }
                else
                {
                    Force.y = VerticalVelocity;
                    Other.collider.GetComponent<MirrorJump>().SingleJump();
                }

                Rigid.velocity = Force;
            }
            else if(mirriorX < leftX)
            {
                // 板子向左倾斜
                SoundManager.Instance.PlaySound(SoundName.Balance);
                transform.DORotate(new Vector3(0, 0, 90), 0.2f).SetEase(Ease.Linear);
                StartCoroutine(ASynRecoverRotate(0.2f));
            }
            else
            {
                // 板子向右倾斜
                SoundManager.Instance.PlaySound(SoundName.Balance);
                transform.DORotate(new Vector3(0, 0, -90), 0.2f).SetEase(Ease.Linear);
                StartCoroutine(ASynRecoverRotate(0.2f));
            }
        }
    }

    private IEnumerator ASynRecoverRotate(float time)
    {
        yield return new WaitForSeconds(time/2);

        GetComponent<EdgeCollider2D>().enabled = false;
        GetComponent<PlatformEffector2D>().enabled = false;

        yield return new WaitForSeconds(time / 2);

        // 恢复水平
        transform.DORotate(new Vector3(0, 0, 0), time).SetEase(Ease.Linear);

        yield return new WaitForSeconds(time);

        GetComponent<EdgeCollider2D>().enabled = true;
        GetComponent<PlatformEffector2D>().enabled = true;
    }

    private void FixedUpdate()
    {
        if (GameController.GetGameState() == GameState.Gaming)
        {
            RecoveryLine = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

            if (RecoveryLine - transform.position.y >= HeightOffset)
            {
                Destroy(gameObject);
            }
        }
    }
}
