
using System.Collections;
using UnityEngine;
using DG.Tweening;

public class DisposableStairs : MonoBehaviour
{
    public float VerticalVelocity = 10f;

    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;
    
    private GameController GameController;

    public SpriteRenderer SpriteRenderer;

    private float AlphaChangeDelta = 0.1f;

    private bool IsStartDisappear = false;

    public SpriteRenderer broken1;
    public SpriteRenderer broken2;

    private bool isBroken = false;

    private void Start()
    {
        broken1.gameObject.SetActive(false);
        broken2.gameObject.SetActive(false);
    }

    public void SetGameController(GameController gameController)
    {
        GameController = gameController;
    }
   
    private void OnCollisionEnter2D(Collision2D Other)
    {
        Rigidbody2D Rigid = Other.collider.GetComponent<Rigidbody2D>();
        
        // 避免触发相应道具后和台阶发生二次碰撞
        if (Other.collider.GetComponent<MirrorJump>().GetOverTurnState() || 
            Other.collider.GetComponent<MirrorJump>().GetRocketState()||   
            Other.collider.GetComponent<MirrorJump>().GetEnterBlackState())
        {
            return;
        }

        if (Rigid != null)
        {
            if (!isBroken)
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

            SpriteRenderer.enabled = false;

            broken1.gameObject.SetActive(true);
            broken2.gameObject.SetActive(true);

            if (isBroken)
            {
                SoundManager.Instance.PlaySound(SoundName.Broken);
                GetComponent<EdgeCollider2D>().enabled = false;
                GetComponent<PlatformEffector2D>().enabled = false;
                IsStartDisappear = true;
            }
            else
            {
                SoundManager.Instance.PlaySound(SoundName.BeforeDisappear);
            }

            isBroken = true;
        }
    }
     
    // stairs collection 
    private void FixedUpdate()
    {

        if (GameController.GetGameState() == GameState.Gaming)
        {
            RecoveryLine =  Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

            if (RecoveryLine - transform.position.y >= HeightOffset)
            {
                StartCoroutine(DestroyStairs());
            }

            if (IsStartDisappear)
            {
                StartCoroutine(DestroyStairs());
            }
            
        }
       
         
    }

    private IEnumerator DestroyStairs()
    {
        broken1.DOFade(0, 0.5f);
        broken2.DOFade(0, 0.5f);

        broken1.transform.DOMoveY(broken1.transform.position.y - 0.2f, 0.5f);
        broken2.transform.DOMoveY(broken2.transform.position.y - 0.2f, 0.5f);

        yield return new WaitForSeconds(0.5f);

        gameObject.SetActive(false);
         
        Destroy(gameObject);
    }
    
    
    
}
