
using UnityEngine;

public class BlackHole : MonoBehaviour
{
    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;
    
    private GameController GameController;


    private bool StartAttract = false;
    

    public void SetGameController(GameController gameController)
    {
        GameController = gameController;
    }
   
    private void OnCollisionEnter2D(Collision2D Other)
    {
         
        Rigidbody2D Rigid = Other.collider.GetComponent<Rigidbody2D>();

        if (Rigid != null)
        {
            SoundManager.Instance.PlaySound(SoundName.BlackHole);
            StartAttract = true;
            
            Other.collider.GetComponent<MirrorJump>().EnterHole(new Vector2(transform.position.x,transform.position.y));
             

        }
    }
     
     
    // stairs collection 
    private void FixedUpdate()
    {
        if (GameController.GetGameState() == GameState.Gaming)
        {
            
            if (StartAttract)
            {
                transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y,
                    transform.eulerAngles.z -21f);
            }
            else
            {
                transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y,
                    transform.eulerAngles.z + 9.6f);
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
