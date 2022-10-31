using System;
using Unity.VisualScripting;
using UnityEngine;


public class StairProp : MonoBehaviour
{

    public float VerticalVelocity = 10f;

    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;

    private GameController GameController;

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
    }


    // stairs collection 
    private void FixedUpdate()
    {

        if (GameController.GetGameState() == GameState.Gaming)
        {
            RecoveryLine = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

            if (RecoveryLine - transform.position.y >= HeightOffset)
            {
                DestroyStairs();
            }
        }


    }

    private void DestroyStairs()
    {
        GetComponent<EdgeCollider2D>().enabled = false;
        GetComponent<PlatformEffector2D>().enabled = false;
        GetComponent<SpriteRenderer>().enabled = false;

        Destroy(gameObject);
    }

}
