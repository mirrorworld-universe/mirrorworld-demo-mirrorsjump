
using UnityEngine;

public class BreakageStairs : MonoBehaviour
{
    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;

    private GameController GameController;

    private bool Fall_Down = false;

    public GameObject LeftStairs;
    public GameObject RightStair;




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
            SoundManager.Instance.PlaySound(SoundName.Broken);
            GetComponent<EdgeCollider2D>().enabled = false;
            GetComponent<PlatformEffector2D>().enabled = false;
            Fall_Down = true;

        }
    }






    // stairs collection 
    private void FixedUpdate()
    {
        if (Fall_Down)
        {
            transform.position -= new Vector3(0, 0.15f, 0);
            if (LeftStairs.transform.localEulerAngles.z >= -15.186f)
            {
                LeftStairs.transform.localEulerAngles = new Vector3(LeftStairs.transform.localEulerAngles.x,
                    LeftStairs.transform.localEulerAngles.y, LeftStairs.transform.localEulerAngles.z - 1f);
            }

            if (RightStair.transform.localEulerAngles.z <= 7.499f)
            {
                RightStair.transform.localEulerAngles = new Vector3(RightStair.transform.localEulerAngles.x,
                    RightStair.transform.localEulerAngles.y, RightStair.transform.localEulerAngles.z + 0.8f);
            }

        }

        if (null != GameController && GameController.GetGameState() == GameState.Gaming)
        {
            RecoveryLine = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

            if (RecoveryLine - transform.position.y >= HeightOffset)
            {
                DestroyStairs();
            }


        }


    }

    public void StopAnimation()
    {
        GetComponent<Animation>().enabled = false;

    }

    private void DestroyStairs()
    {
        Destroy(gameObject);
    }
}
