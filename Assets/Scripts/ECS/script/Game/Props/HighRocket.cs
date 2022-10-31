using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HighRocket : ItemBase
{
  
    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;
    
    private GameController GameController;
    
    public float RocketThrust = 60;


    public Sprite[] Sprites = new Sprite[2];

    private bool IsPlayAnimation = true;

    private int CurrentIndex = 0;
    

    public void SetGameController(GameController gameController)
    {
        GameController = gameController;
    }
   
    private void OnCollisionEnter2D(Collision2D Other)
    {
         
        Rigidbody2D Rigid = Other.collider.GetComponent<Rigidbody2D>();
       // GetComponent<AudioSource>().Play();
        if (Rigid != null)
        {
            PickupItem();
            Other.collider.GetComponent<MirrorJump>().EnableRocket(RocketLevel.High);
            Vector2 Force = Rigid.velocity;
            Force.y = RocketThrust;
            Rigid.velocity = Force;
            IsPlayAnimation = false;
            DestroyStairs();
        }
    }
     
     
    // stairs collection 
    protected override void FixedUpdate()
    {
        base.FixedUpdate();

        if (GameController.GetGameState() == GameState.Gaming)
        {

            if (IsPlayAnimation)
            {
                if (CurrentIndex >= 2)
                {
                    CurrentIndex = 0;
                }

                transform.GetComponent<SpriteRenderer>().sprite = Sprites[CurrentIndex];
                CurrentIndex++;
            }
            
            RecoveryLine =  Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0)).y;

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
