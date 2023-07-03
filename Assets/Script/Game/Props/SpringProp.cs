using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpringProp : ItemBase
{
  

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
        SoundManager.Instance.PlaySound(SoundName.SpringProp);
        if (Rigid != null)
        {
            PickupItem();
            Other.collider.GetComponent<MirrorJump>().SetSpringState(true);
            Other.collider.GetComponent<MirrorJump>().ResetSpringUseCount();
            
            Vector2 Force = Rigid.velocity;
            Force.y = 20f;
            Rigid.velocity = Force;
            
            DestroyStairs();
        }
    }
     
     
    // stairs collection 
    protected override void FixedUpdate()
    {
        base.FixedUpdate();
        if (GameController.GetGameState() == GameState.Gaming)
        {
            RecoveryLine =  Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

            if (RecoveryLine - transform.position.y >= HeightOffset)
            {
                if ( null!=GetComponent<AudioSource>()&&!GetComponent<AudioSource>().isPlaying)
                {
                    DestroyStairs();
                }
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
