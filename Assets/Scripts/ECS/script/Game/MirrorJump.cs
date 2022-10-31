using DG.Tweening;
using System;
using System.Collections;
using UnityEngine;
using UnityEngine.PlayerLoop;


public enum RocketLevel
{
    Low,
    High
}

public class MirrorJump : MonoBehaviour
{

    public Sprite[] Spr_Player = new Sprite[2];

    public float OffsetOfBoundary = 0.8f;

    public GameObject GameController;



    // Spring

    public GameObject Spring;

    public GameObject SpringJump;

    public int SpringUseCount = 0;

    private int UseCount = 5;

    private bool HasSpring = false;

    public float SpringForce = 10f;

    private float gravity;


  

   
    
    

    private void Awake()
    {
        Screen.sleepTimeout = SleepTimeout.NeverSleep;
    }

    public void SetSpringState(bool hasSpring)
    {
        HasSpring = hasSpring;
    }


    public void ResetSpringUseCount()
    {
        SpringUseCount = 0;
    }

    public void RefreshSprite()
    {
        var verticalVelocity = rigidbody2D.velocity.y;
        if (verticalVelocity > 0)
        {
            transform.gameObject.GetComponent<SpriteRenderer>().sprite = Spr_Player[0];
        }
        else
        {
            transform.gameObject.GetComponent<SpriteRenderer>().sprite = Spr_Player[1];
        }
    }

    public bool GetSpringState()
    {
        return HasSpring;
    }

    public void SingleJump()
    {
        SoundManager.Instance.PlaySound(SoundName.Jump);
    }

    public void UseSpring()
    {
        SpringUseCount++;
        if (SpringUseCount >= UseCount)
        {
            SpringUseCount = 0;
            HasSpring = false;
        }

        SoundManager.Instance.PlaySound(SoundName.SpringProp);
    }


    // Spring position adjust
    // 宇航 女仆
    private Vector2 SpringPostion1 = new Vector2(0.24f, -3.17f);
    // other
    private Vector2 SpringPostion2 = new Vector2(0.32f, -3.43f);

    // 武士 海盗
    private Vector2 SpringJumpPostion1 = new Vector2(0.62f, -2.75f);

    // 女仆 宇航员
    private Vector2 SpringJumpPostion2 = new Vector2(0.41f, -2.53f);

    // 僵尸
    private Vector2 SpringJumpPostion3 = new Vector2(-0.23f, -3.05f);


    private void SetSpringState()
    {
        if (HasSpring)
        {
            Spring.SetActive(true);
            if (PlayerPrefs.GetString("CurrentRole") == Constant.Samurai ||
                PlayerPrefs.GetString("CurrentRole") == Constant.Zombie || PlayerPrefs.GetString("CurrentRole") == Constant.PirateCaptain)
            {
                Spring.transform.localPosition =
                    new Vector3(SpringPostion2.x, SpringPostion2.y, Spring.transform.localPosition.z);
            }
            else
            {
                Spring.transform.localPosition =
                    new Vector3(SpringPostion1.x, SpringPostion1.y, Spring.transform.localPosition.z);
            }
        }
        else
        {
            Spring.SetActive(false);
        }

    }

    private void SetSpringJumpState()
    {
        if (HasSpring)
        {
            SpringJump.SetActive(true);
            if (PlayerPrefs.GetString("CurrentRole") == Constant.Samurai ||
                PlayerPrefs.GetString("CurrentRole") == Constant.PirateCaptain)
            {
                SpringJump.transform.localPosition =
                    new Vector3(SpringJumpPostion1.x, SpringJumpPostion1.y, Spring.transform.localPosition.z);
            }
            else if (PlayerPrefs.GetString("CurrentRole") == Constant.Zombie)
            {
                SpringJump.transform.localPosition =
                    new Vector3(SpringJumpPostion3.x, SpringJumpPostion3.y, Spring.transform.localPosition.z);
            }
            else
            {
                SpringJump.transform.localPosition =
                    new Vector3(SpringJumpPostion2.x, SpringJumpPostion2.y, Spring.transform.localPosition.z);
            }
        }
        else
        {
            SpringJump.SetActive(false);
        }

    }




    // Black Hole
    private bool IsEnterBlackHole = false;

    /// <summary>
    /// 角色初始化
    /// </summary>
    public void Setup()
    {
        SetEnterBlackState(false);
        FallStateNotify(false);

        // 禁用弹簧鞋
        SetSpringState(false);
        SpringJump.SetActive(false);
        Spring.SetActive(false);
        // 强制重力恢复 &  强制道具清除
        rigidbody2D.gravityScale = 2.5f;
        IsEnterBlackHole = false;
        DisabledRocket();
        
    }
    public void SetEnterBlackState(bool IsEnter)
    {
        IsEnterBlackHole = IsEnter;
    }

    public bool GetEnterBlackState()
    {
        return IsEnterBlackHole;
    }

    public void EnterHole(Vector2 HolePosition)
    {
        IsEnterBlackHole = true;

        transform.gameObject.GetComponent<BoxCollider2D>().enabled = false;

        StartCoroutine(ASynEnterHole(HolePosition));
    }

    private IEnumerator ASynEnterHole(Vector3 target)
    {
        gravity = rigidbody2D.gravityScale;
        rigidbody2D.gravityScale = 0;
        transform.DOMove(target, 1f);

        transform.DORotate(new Vector3(0, 0, 180f), 0.5f).SetEase(Ease.Linear);

        transform.DOScale(new Vector3(0f, 0f, 0f), 1f);

        yield return new WaitForSeconds(0.5f);

        transform.DORotate(new Vector3(0, 0, 360f), 0.5f).SetEase(Ease.Linear);
        SoundManager.Instance.PlaySound(SoundName.Dead);

        yield return new WaitForSeconds(0.5f);

        rigidbody2D.gravityScale = gravity;
        IsEnterBlackHole = false;
        FallState = false;
        GameMenu.GameOver();
    }

    private float GetSinValue(Vector2 HolePos)
    {
        float a = Math.Abs(HolePos.y - transform.position.y);
        return a / GetC(HolePos);

    }
    private float GetCosValue(Vector2 HolePos)
    {
        float b = Math.Abs(HolePos.x - transform.position.x);
        return b / GetC(HolePos);
    }

    private float GetC(Vector2 HolePos)
    {

        float a = Math.Abs(HolePos.y - transform.position.y);

        float b = Math.Abs(HolePos.x - transform.position.x);

        return (float)Math.Sqrt(a * a + b * b);

    }


    // Spring board
    private bool IsOverturn = false;

    public void StartOverturn()
    {
        IsOverturn = true;
    }

    public bool GetOverTurnState()
    {
        return IsOverturn;
    }



    // Role
    private float HorizontalVelocity = 0f;

    private float SpeedValue = 15f;

    Rigidbody2D rigidbody2D = null;

    private Vector3 MirrorLocalScale;

    private bool FallState = false;

    private float ReferencePosition = 0;

    private float DeathLength = 12f;

    private float TowardThreshold = 1.5f;

    public GameMenu GameMenu;

    public void FallStateNotify(bool state)
    {
        FallState = state;
        if (state)
        {
            ReferencePosition = transform.position.y;
        }
    }



    // Rocket

    private bool HasRocket = false;
    public bool GetRocketState()
    {
        return HasRocket;
    }



    public RocketController RocketController;

    public void EnableRocket(RocketLevel rocketLevel)
    {
        HasRocket = true;
        float LocalScaleX = transform.localScale.x;

        if (LocalScaleX < 0)
        {
            transform.localScale = new Vector3(MirrorLocalScale.x, MirrorLocalScale.y, MirrorLocalScale.z);
        }
        RocketController.StartRocket(rocketLevel);


        SoundManager.Instance.PlaySound(SoundName.Rocket);

    }

    public void DisabledRocket()
    {
        HasRocket = false;
        RocketController.CloseRocket();
    }

    private void Start()
    {
        rigidbody2D = transform.gameObject.GetComponent<Rigidbody2D>();
        MirrorLocalScale = transform.localScale;
      
    }


    private void Update()
    {
        if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
        {
            if (FallState)
            {
                if (transform.position.y < ReferencePosition)
                {
                    float y = transform.position.y;
                    if (Math.Abs(transform.position.y - ReferencePosition) >= DeathLength)
                    {
                        // Game over
                        SoundManager.Instance.PlaySound(SoundName.Dead);
                        GameMenu.GameOver();
                        FallState = false;
                    }
                }
            }

          
        }


    }
    

   


  
    
    
    
    
    
    
    
    
    
    
    
    private void FixedUpdate()
    {
#if UNITY_EDITOR
        KeyboardControl();
#elif UNITY_ANDROID || UNITY_IOS
        GyroscopeControl();
#else
        KeyboardControl();
#endif

        // 控制人物转向
        if (HorizontalVelocity > TowardThreshold)
        {
            transform.localScale = new Vector3(MirrorLocalScale.x, MirrorLocalScale.y, MirrorLocalScale.z);

        }
        else if (HorizontalVelocity < -TowardThreshold)
        {
            transform.localScale = new Vector3(-MirrorLocalScale.x, MirrorLocalScale.y, MirrorLocalScale.z);

        }

        if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
        {
            if (IsOverturn)
            {
                transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y,
                    transform.eulerAngles.z + 10f);

                if (transform.eulerAngles.z >= 340)
                {
                    transform.eulerAngles = new Vector3(transform.eulerAngles.x, transform.eulerAngles.y,
                        0);
                    IsOverturn = false;
                }
            }

            if (IsEnterBlackHole)
            {
                return;
            }
            Vector2 Velocity = rigidbody2D.velocity;
            Velocity.x = HorizontalVelocity;
            rigidbody2D.velocity = Velocity;
            MirrorJumpState(Velocity.y);
        }
    }


    private void KeyboardControl()
    {
        if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
        {
            if (IsEnterBlackHole)
            {
                return;
            }

            if (Input.GetKey(KeyCode.A))
            {
                this.HorizontalVelocity = -8f;
            }
            else if (Input.GetKey(KeyCode.D))
            {
                this.HorizontalVelocity = 8f;
            }
            else
            {
                this.HorizontalVelocity = 0f;
            }
        }
    }

    // gyroscope control   in Android platform use this method
    private void GyroscopeControl()
    {
        if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
        {
            if (!IsEnterBlackHole /*&& !HasRocket*/)
            {
                this.HorizontalVelocity = SpeedValue * Input.acceleration.x;

                float LocalScaleX = transform.localScale.x;
            }
        }
    }



    private void MirrorJumpState(float verticalVelocity)
    {
        if (verticalVelocity > 0)
        {
            Spring.SetActive(false);
            transform.gameObject.GetComponent<SpriteRenderer>().sprite = Spr_Player[0];
            transform.gameObject.GetComponent<BoxCollider2D>().enabled = false;
            SetSpringJumpState();
        }
        else
        {
            if (HasRocket)
            {
                DisabledRocket();
            }

            transform.gameObject.GetComponent<BoxCollider2D>().enabled = true;
            if (verticalVelocity < -6)
            {
                SpringJump.SetActive(false);
                transform.gameObject.GetComponent<SpriteRenderer>().sprite = Spr_Player[1];
                SetSpringState();
            }

        }

        BoundaryRestrictions();

    }

    // Boundary restrictions
    private void BoundaryRestrictions()
    {
        Vector3 ZeroScreen = Camera.main.ScreenToWorldPoint(new Vector3(0, 0, 0));

        if (transform.position.x > -ZeroScreen.x + OffsetOfBoundary)
            transform.position = new Vector3(ZeroScreen.x - OffsetOfBoundary, transform.position.y, transform.position.z);
        else if (transform.position.x < ZeroScreen.x - OffsetOfBoundary)
            transform.position = new Vector3(-ZeroScreen.x + OffsetOfBoundary, transform.position.y, transform.position.z);
    }


}
