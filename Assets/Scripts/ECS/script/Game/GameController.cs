
using UnityEngine;
using Random = UnityEngine.Random;

public enum GameState
{
    Gaming,
    GamePause,
    GameOver
}

public class GameController : MonoBehaviour
{

    public GroupRuleModule GroupRuleModule;
    
    public StairsFactory StairsFactory;

    public GameObject MirrorObject;

    public MapRunSystem MapRunSystem;

    public CameraTracking CameraTracking;

    public GameMenu GameMenu;

    private Vector2 Speed = new Vector2(0, 0);

    private Vector2 SpeedZero = new Vector2(0, 0);

    private Vector2 FirstStairsPosition = new Vector2(0, -3f); 

    private long MaxHeight = 0;

    private GameState GameState = GameState.GameOver;
    
    
    // role change
    public RolePersistence RolePersistence;


    public CloundMoveManager CloundMoveManager;
    
    private float UnlockHeight;

    private bool IsUnlock = true;


   
    
    
    
    private void Start()
    {
        OnGameStart();
        SetUnlockedHeight();
    }

    private void FixedUpdate()
    {
        if (GetGameState() == GameState.Gaming)
        {
            GetHeightScore();
            if (IsUnlock)
            {
                ThemeLockState();
            }

        }
        
    }

    public long GetMaxHeight()
    {
        return MaxHeight;
    }


    private void GetHeightScore()
    {
        if (MirrorObject.transform.position.y* GlobalDef.heightCoefficient > MaxHeight)
        {
            MaxHeight = (long)MirrorObject.transform.position.y * GlobalDef.heightCoefficient;

            GameMenu.SetHighScore(MaxHeight.ToString());
        }
    }


  
    
    public void StartNewGame()
    {
        StairsFactory.DestroyAllStairs();
        OnGameStart();
    }
    
    // Game State
    public GameState GetGameState()
    {
        return this.GameState;
    }
   

    public void OnGamePause()
    {   
       
        Speed= MirrorObject.transform.gameObject.GetComponent<Rigidbody2D>().velocity;
        MirrorObject.transform.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0;
        GameState = GameState.GamePause;
        MirrorObject.transform.gameObject.GetComponent<Rigidbody2D>().velocity = SpeedZero ;
    }

    public void OnGameResume()
    {   
        GameState = GameState.Gaming;
        MirrorObject.transform.gameObject.GetComponent<Rigidbody2D>().velocity =  Speed;
        MirrorObject.transform.gameObject.GetComponent<Rigidbody2D>().gravityScale = 2.5f;
    }


    public void OnGameOver()
    {
        GameState = GameState.GameOver;
        
    }

    public void OnGameStart()
    {   
        MirrorJump mj = MirrorObject.GetComponent<MirrorJump>();
        
        if (null == PlayerPrefs.GetString("CurrentRole") || null == PlayerPrefs.GetString("CurrentRarity"))
        {
            mj.Spr_Player[1] = RolePersistence.GetDefaultRole();
            mj.Spr_Player[0] = RolePersistence.GetDefaultRoleJump();
            mj.RefreshSprite();
        }
        else
        {
            mj.Spr_Player[1] =
                RolePersistence.GetRoleImage(PlayerPrefs.GetString("CurrentRole"),
                    PlayerPrefs.GetString("CurrentRarity"));

            mj.Spr_Player[0] =
                RolePersistence.GetRoleImageJump(PlayerPrefs.GetString("CurrentRole"),
                    PlayerPrefs.GetString("CurrentRarity"));

            mj.RefreshSprite();
        }

        Vector2 initPos = FirstStairsPosition;
        long initScore = 0;
        if (PlayerPrefs.GetInt(GlobalDef.hasInitPosY) == 1)
        {
            initScore = long.Parse(PlayerPrefs.GetString(GlobalDef.maxScore))/2;
            PlayerPrefs.SetInt(GlobalDef.hasInitPosY, 0);
        }
        var initY = initScore / GlobalDef.heightCoefficient;
        initPos.y += initY;
        
        MirrorObject.transform.eulerAngles = new Vector3(0,0,0);
        MirrorObject.transform.localScale = new Vector3(0.28f,0.28f,0.28f);
        MirrorObject.transform.GetComponent<Rigidbody2D>().velocity = new Vector2(0, 0);
        MirrorObject.transform.GetComponent<MirrorJump>().Setup();
        SetTransformPosition(MirrorObject.transform,new Vector3(initPos.x, initPos.y+2f,107.4f));
        
        StairsFactory.GenerateStairs(initPos,StairsType.General);

        StairsRuleItem stairsRuleItem = new StairsRuleItem();
        stairsRuleItem.pos = initPos;
        stairsRuleItem.StairsType = StairsType.General;
        GroupRuleModule.SetLastRuleItem(stairsRuleItem);

        HeightDisplayManager.Instance.GenerateFirst(initScore);

        MapRunSystem.ResetMapPosition(initY);
        
        CloundMoveManager.ResetCloundPosition();
        
        CameraTracking.ResetCameraPosition(initY);

        MaxHeight = initScore;
        GameMenu.SetHighScore(MaxHeight.ToString());
        
        GroupRuleModule.SetTopStaisHeight(initPos.y);
        
        GameState = GameState.Gaming;
        
        GameMenu.CloseGameOverWindow();
        
        MirrorObject.transform.GetComponent<MirrorJump>().FallStateNotify(true);
    }


    private void SetTransformPosition(Transform transform, Vector3 position)
    {
        transform.position = position;
    }
    
    
    private void SetUnlockedHeight()
    {
        
        
        if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSpaceIndex)
        {
            UnlockHeight = 1000f;
            
            GameMenu.SetUnlockedHeightText("1000");
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeDesertIndex)
        {
            UnlockHeight = 2000f;
            GameMenu.SetUnlockedHeightText("2000");
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSnowIndex)
        {
            UnlockHeight = 3000f;
            GameMenu.SetUnlockedHeightText("3000");
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeCyberpunkIndex)
        {
            UnlockHeight = 4000f;
            GameMenu.SetUnlockedHeightText("4000");
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemePastureIndex)
        {
            IsUnlock = false;
            return;
        }
        

        IsUnlock = true;

    }
    
    private void ThemeLockState()
    {
        if (GetMaxHeight() < UnlockHeight)
        {
            return;
            
        }

        IsUnlock = false;

        if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSpaceIndex)
        {
            if (1 == PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeDesertIndex, 0))
            {
                return;
            }

            PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeDesertIndex, 1);
            PlayerPrefs.SetInt("ThemeDesertState", 1);

        }
        else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeDesertIndex)
        {

            if (1 == PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeSnowIndex, 0))
            {
                return;
            }

            PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeSnowIndex, 1);
            PlayerPrefs.SetInt("ThemeSnowState", 1);

        }
        else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSnowIndex)
        {
            if (1 == PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeCyberpunkIndex, 0))
            {
                return;
            }

            PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeCyberpunkIndex, 1);
            PlayerPrefs.SetInt("ThemeCyberpunkState", 1);

        }
        else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeCyberpunkIndex)
        {
            if (1 == PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemePastureIndex, 0))
            {
                return;
            }

            PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemePastureIndex, 1);
            PlayerPrefs.SetInt("ThemePastureState", 1);

        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemePastureIndex)
        {
            return;
        }
        
        // notify
        GameMenu.OpenUnlockAdvice();
        
    }
    
    
    
    
}
