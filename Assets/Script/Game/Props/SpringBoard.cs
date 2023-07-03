
using UnityEngine;


public class SpringBoard : MonoBehaviour
{
    private float HeightOffset = 0.19f;

    private float RecoveryLine = 0;

    public float SpringBoardForce;
    
    private GameController GameController;


    public Sprite[] Sprites = new Sprite[3];


    private int IntervalNumber = 1;

    private int CurrentFrameCount = 0;
    
    private int CurrentIndex = 0;


    private bool IsSpringPop = false;
    
    
    
    
    
    

    public void SetGameController(GameController gameController)
    {
        GameController = gameController;
    }
   
    private void OnCollisionEnter2D(Collision2D Other)
    {
         
        Rigidbody2D Rigid = Other.collider.GetComponent<Rigidbody2D>();

        if (Rigid != null)
        {


            IsSpringPop = true;
            SoundManager.Instance.PlaySound(SoundName.SpringBoard);
            Vector2 Force = Rigid.velocity;
            
            Other.collider.GetComponent<MirrorJump>().StartOverturn();

            if (Other.collider.GetComponent<MirrorJump>().GetSpringState())
            {
                Force.y = SpringBoardForce + Other.collider.GetComponent<MirrorJump>().SpringForce;
                Other.collider.GetComponent<MirrorJump>().UseSpring();
            }
            else
            {
                Force.y = SpringBoardForce;
            }
            
            
            Rigid.velocity = Force;
            
        }
    }
     
     
    // stairs collection 
    private void FixedUpdate()
    {

        if (GameController.GetGameState() == GameState.Gaming)
        {

            if (IsSpringPop)
            {
                SpringPop();
                
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


    private void SpringPop()
    {
        CurrentFrameCount++;
        if (CurrentFrameCount >= IntervalNumber)
        {
            CurrentFrameCount = 0;
            if (CurrentIndex >= 3)
            {
                CurrentIndex = 0;
            }
            transform.gameObject.GetComponent<SpriteRenderer>().sprite = Sprites[CurrentIndex];
            CurrentIndex++;
        }
        
    }
    
    
}
