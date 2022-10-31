
using UnityEngine;
using Random = UnityEngine.Random;


public enum StairsType
{
    General,
    Disposable,
    Breakage,
    MoveVerticle,
    MoveHorizontal,
    BlackRole,
    Balance
}


public class StairsFactory : MonoBehaviour
{

    public GameObject MirrorObject;

    public GameObject StairsParent;

    public GameObject GeneralStairs;
    
    public GameObject DisposableStairs;
    
    public GameObject DisappearStairs;
    
    public GameObject BreakageStairs;
    
    public GameObject  MovingStairs;

    public GameObject BalanceStairs;
    
    public GameController GameController;

    private float DifficultyInterval = 50f;

    public PropsFactory PropsFactory;

    public GroupRuleModule GroupRuleModule;

    public RuleConfig RuleConfig;
    
    
    
    // just test 对 brakable stairs 临时限制
    private bool Limit = false;
    
    
    // theme change
    
    public Sprite[] ThemeSpaceStairs = new Sprite[8];
    
    public Sprite[] ThemeDesertStairs = new Sprite[8];
    
    public Sprite[]  ThemeSnowStairs = new Sprite[8];
    
    public Sprite[]  ThemeCyberpunkStairs = new Sprite[8];
    
    public Sprite[]  ThemePastureStairs = new Sprite[8];


    private void Awake()
    {
        StairsThemeChange();
    }

 

    private void StairsThemeChange()
    {
        int stairsTheme =  PlayerPrefs.GetInt("CurrentTheme",Constant.GeneralStairs);

       
       if (stairsTheme == Constant.ThemeDesertIndex)
       {
           DesertStairsSpriteChange();
           
       }else if(stairsTheme == Constant.ThemeSnowIndex)
       {
           
          SnowStairsSpriteChange();
           
       }else if(stairsTheme == Constant.ThemeCyberpunkIndex)
       {
           CyberpunkStairsSpriteChange();
           
       }else if(stairsTheme == Constant.ThemePastureIndex)
       {
           PastureStairsSpriteChange();
       }
       else
       {
           SpaceStairsSpriteChange();
       }
       
    }


    private void SpaceStairsSpriteChange()
    {  
        
        GeneralStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.GeneralStairs];
        MovingStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.MovingStairs];
        
         DisposableStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairs];
         DisposableStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairsLeft];
         DisposableStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairsRight];
       
         
         BreakageStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairsLeft];
         BreakageStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairsRight];
         BreakageStairs.transform.Find("right/top").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSpaceStairs[Constant.BreakageStairsTop];

         BalanceStairs.transform.Find("Stair").gameObject.GetComponent<SpriteRenderer>().sprite =
             ThemeSpaceStairs[Constant.BalanceStairs];
        
         
         
         BalanceStairs.transform.Find("Axis").gameObject.GetComponent<SpriteRenderer>().sprite =
             ThemeSpaceStairs[Constant.BalanceStairsAxis];
         

    }
    
    private void DesertStairsSpriteChange()
    {  
        
        GeneralStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.GeneralStairs];
        MovingStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.MovingStairs];
        
        DisposableStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairs];
        DisposableStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairsLeft];
        DisposableStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairsRight];
       
         
        BreakageStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairsLeft];
        BreakageStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairsRight];
        BreakageStairs.transform.Find("right/top").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeDesertStairs[Constant.BreakageStairsTop];

        BalanceStairs.transform.Find("Stair").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeDesertStairs[Constant.BalanceStairs];
        
         
         
        BalanceStairs.transform.Find("Axis").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeDesertStairs[Constant.BalanceStairsAxis];
         

    }
    
    private void SnowStairsSpriteChange()
    {  
        
        GeneralStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.GeneralStairs];
        MovingStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.MovingStairs];
        
        DisposableStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairs];
        DisposableStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairsLeft];
        DisposableStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairsRight];
       
         
        BreakageStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairsLeft];
        BreakageStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairsRight];
        BreakageStairs.transform.Find("right/top").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeSnowStairs[Constant.BreakageStairsTop];

        BalanceStairs.transform.Find("Stair").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeSnowStairs[Constant.BalanceStairs];
        
         
         
        BalanceStairs.transform.Find("Axis").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeSnowStairs[Constant.BalanceStairsAxis];
         

    }
    
    private void CyberpunkStairsSpriteChange()
    {  
        
        GeneralStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.GeneralStairs];
        MovingStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.MovingStairs];
        
        DisposableStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairs];
        DisposableStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairsLeft];
        DisposableStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairsRight];
       
         
        BreakageStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairsLeft];
        BreakageStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairsRight];
        BreakageStairs.transform.Find("right/top").gameObject.GetComponent<SpriteRenderer>().sprite = ThemeCyberpunkStairs[Constant.BreakageStairsTop];

        BalanceStairs.transform.Find("Stair").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeCyberpunkStairs[Constant.BalanceStairs];
        
         
         
        BalanceStairs.transform.Find("Axis").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemeCyberpunkStairs[Constant.BalanceStairsAxis];
         

    }
    
    private void PastureStairsSpriteChange()
    {  
        
        GeneralStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.GeneralStairs];
        MovingStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.MovingStairs];
        
        DisposableStairs.transform.gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairs];
        DisposableStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairsLeft];
        DisposableStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairsRight];
       
         
        BreakageStairs.transform.Find("left").gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairsLeft];
        BreakageStairs.transform.Find("right").gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairsRight];
        BreakageStairs.transform.Find("right/top").gameObject.GetComponent<SpriteRenderer>().sprite = ThemePastureStairs[Constant.BreakageStairsTop];

        BalanceStairs.transform.Find("Stair").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemePastureStairs[Constant.BalanceStairs];
        
         
         
        BalanceStairs.transform.Find("Axis").gameObject.GetComponent<SpriteRenderer>().sprite =
            ThemePastureStairs[Constant.BalanceStairsAxis];
         

    }
    
    

    public void GenerateStairs(Vector2 position,StairsType stairsType)
    {   
        Vector3 pos = new Vector3(position.x, position.y, 107.4f);
        
        InstantiationStairs(stairsType,pos);
        
    }
    
    

    private void InstantiationStairs(StairsType stairsType, Vector3 pos)
    {

        if (stairsType == StairsType.General)
        {    
            var tran = (UnityEngine.Object.Instantiate(GeneralStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<StairProp>().SetGameController(GameController);
            tran.transform.SetParent(StairsParent.transform);
            
            RandomProps(tran,GameController);

        }else if (stairsType == StairsType.Disposable)
        {
            var tran = (UnityEngine.Object.Instantiate(DisposableStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<DisposableStairs>().SetGameController(GameController);
            tran.transform.SetParent(StairsParent.transform);
            
            RandomProps(tran,GameController);
            
        }else if (stairsType == StairsType.Breakage)
        {
            var tran = (UnityEngine.Object.Instantiate(BreakageStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<BreakageStairs>().SetGameController(GameController);
            tran.transform.SetParent(StairsParent.transform);
            
            RandomProps(tran,GameController);
            
        }else if (stairsType == StairsType.MoveHorizontal)
        {   
           
            MovingDirection movingDirection = MovingDirection.Horizontal;
            var tran = (UnityEngine.Object.Instantiate(MovingStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<MovingStairs>().SetGameController(GameController);
            tran.gameObject.GetComponent<MovingStairs>().SetMovingParams(movingDirection,1f,3,3);
            tran.transform.SetParent(StairsParent.transform);
            
            RandomProps(tran,GameController);
            
        }else if (stairsType == StairsType.MoveVerticle)
        {
            MovingDirection movingDirection = MovingDirection.Vertical;
            var tran = (UnityEngine.Object.Instantiate(MovingStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<MovingStairs>().SetGameController(GameController);
            tran.gameObject.GetComponent<MovingStairs>().SetMovingParams(movingDirection,1f,3,3);
            tran.transform.SetParent(StairsParent.transform);
            RandomProps(tran,GameController);
            
        }else if (stairsType == StairsType.Balance)
        {
            var tran = (UnityEngine.Object.Instantiate(BalanceStairs.gameObject)).GetComponent<Transform>();
            tran.position = pos;
            tran.gameObject.GetComponent<BalanceStairs>().SetGameController(GameController);
            tran.transform.SetParent(StairsParent.transform);

            RandomProps(tran, GameController);

        }else if (stairsType == StairsType.BlackRole)
        {
            GenerateBlackRole(StairsParent.transform,GameController,pos);
        }
        
    }
    
    
   
    
    private void RandomProps(Transform StairsParent,GameController gameController)
    {
        if (MirrorObject.transform.position.y * 4 < 20)
        {
            return;
        }
        

        if (RuleConfig.GeneratePropType() == PropType.Spring)
        {
            GenerateSpringProp(StairsParent, GameController);
            
        }else if (RuleConfig.GeneratePropType() == PropType.SpringBoard)
        {
            GenerateSpringBoard(StairsParent, GameController);
            
        }else if (RuleConfig.GeneratePropType() == PropType.LowRocket)
        {
            GenerateLowRocket(StairsParent, GameController);
            
        }else if (RuleConfig.GeneratePropType() == PropType.HighRocket)
        {
            GenerateHeighRocket(StairsParent, GameController);
        }else if (RuleConfig.GeneratePropType() == PropType.Empty)
        {
            
            
        }
        
    }

    private void GenerateSpringBoard(Transform StairsParent,GameController gameController)
    {
        PropsFactory.GenerateSpringBoard(StairsParent, GameController, new Vector3(0, 0.79f, 0));
    }
    
    private void GenerateSpringProp(Transform StairsParent,GameController gameController)
    {
        PropsFactory.GenerateSpringProp(StairsParent, GameController, new Vector3(0, 1f, 0));
    }
    
    private void GenerateLowRocket(Transform StairsParent,GameController gameController)
    {
        PropsFactory.GenerateLowRocket(StairsParent, GameController, new Vector3(0, 1f, 0));
    }
    
    private void GenerateHeighRocket(Transform StairsParent,GameController gameController)
    {
        PropsFactory.GenerateHeightRocket(StairsParent, GameController, new Vector3(0, 1.5f, 0));
    }
    
    private void GenerateBlackRole(Transform StairsParent,GameController gameController,Vector3 pos)
    {
        PropsFactory.GenerateBlackRole(StairsParent, GameController, pos);
    }
    
    public void DestroyAllStairs()
    {
        for (int i = 0; i < StairsParent.transform.childCount; i++)
        {
            Destroy( StairsParent.transform.GetChild(i).gameObject);
        }
       
    } 
    


}
