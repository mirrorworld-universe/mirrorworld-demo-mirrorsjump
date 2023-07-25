
using UnityEngine;
using UnityEngine.UI;

public class UsePropMenu : MonoBehaviour
{

    private bool HasHighRocket = false;

    private bool HasLowRocket = false;

    private bool HasSpring = false;

    public Image HightRocketIcon;

    public Image LowRocketIcon;

    public Sprite[] NormalIcons = new Sprite[2];

    public Sprite[] WorldCupIcons = new Sprite[2];
    
    
    
    
    
    


    public GameObject MirrorObject;

    public GameController GameController;

    public CanvasGroup HighRocketContent;

    public CanvasGroup LowRocketContent;

    public CanvasGroup SpringContent;


    private void Start()
    {
        EventDispatcher.Instance.OnPropResponse += OnPropCountReceived;
        NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);
        
        HasHighRocket = false;
        HighRocketContent.alpha = 0.5f;
        
        HasLowRocket = false;
        LowRocketContent.alpha = 0.5f;
        
        HasSpring= false;
        SpringContent.alpha = 0.5f;
        
        int index = PlayerPrefs.GetInt("CurrentTheme");
        
        if (index == Constant.ThemeWorldCupIndex)
        {

            HightRocketIcon.sprite = WorldCupIcons[0];
            LowRocketIcon.sprite= WorldCupIcons[1];
        }
        else
        { 
            HightRocketIcon.sprite = NormalIcons[0];
            LowRocketIcon.sprite= NormalIcons[1];
        }
    }
    
    private void OnDestroy()
    {
        EventDispatcher.Instance.OnPropResponse -= OnPropCountReceived;
    }


    public void UpdateUseMenu()
    {   
        HasHighRocket = false;
        HighRocketContent.alpha = 0.5f;
        
        HasLowRocket = false;
        LowRocketContent.alpha = 0.5f;
        
        HasSpring= false;
        SpringContent.alpha = 0.5f;
        NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);
    }
    
    
    public void OnPropCountReceived(PropResponse propResponse)
    {
        GlobalDef.HighRocketCount = propResponse.data.props.high_rocket;
        GlobalDef.LowRocketCount = propResponse.data.props.low_rocket;
        GlobalDef.SpringCount = propResponse.data.props.spring;
        UpdatePropMenu();
    }



    private void UpdatePropMenu()
    {
        if (GlobalDef.HighRocketCount <= 0)
        {
            HasHighRocket = false;
            HighRocketContent.alpha = 0.5f;
        }
        else
        {
            HasHighRocket = true;
            HighRocketContent.alpha = 1f;
        }
        
        if (GlobalDef.LowRocketCount <= 0)
        {
            HasLowRocket = false;
            LowRocketContent.alpha = 0.5f;
        }
        else
        {
            HasLowRocket = true;
            LowRocketContent.alpha = 1f;
        }
        
        if (GlobalDef.SpringCount <= 0)
        {
            HasSpring = false;
            SpringContent.alpha = 0.5f;
        }
        else
        {
            HasSpring = true;
            SpringContent.alpha = 1f;
            
        }
        
        
        
      
    }


    public void OnUseHighRocket()
    {
        if (!HasHighRocket)
        {
            return;
        }

        if (GameController.GetGameState() == GameState.GameOver)
        {
            return;
        }

        if (MirrorObject.GetComponent<MirrorJump>().GetRocketState() == true)
        {
            return;
        }
        
        if (MirrorObject.GetComponent<MirrorJump>().GetEnterBlackState() == true)
        {
            return;
        }
        
        //TAManager.Instance.UseProp(GlobalDef.CurrentScore,"high_rocket");
        
        // use prop
        NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,-1,0,0);
        PickupItem();
        MirrorObject.GetComponent<MirrorJump>().EnableRocket(RocketLevel.High);
        Vector2 Force = MirrorObject.GetComponent<Rigidbody2D>().velocity;
        Force.y = 60;
        MirrorObject.GetComponent<Rigidbody2D>().velocity = Force;

        GlobalDef.HighRocketCount--;

      
            HasHighRocket = false;
            HighRocketContent.alpha = 0.5f;
        
    }


    public void OnUseLowRocket()
    {
        if (!HasLowRocket)
        {
            return;
        }
        
        if (GameController.GetGameState() == GameState.GameOver)
        {
            return;
        }

        if (MirrorObject.GetComponent<MirrorJump>().GetRocketState() == true)
        {
            return;
        }
        
        if (MirrorObject.GetComponent<MirrorJump>().GetEnterBlackState() == true)
        {
            return;
        }
        
        //TAManager.Instance.UseProp(GlobalDef.CurrentScore,"low_rocket");
        // use prop
        NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,0,-1,0);
        PickupItem();
        MirrorObject.GetComponent<MirrorJump>().EnableRocket(RocketLevel.Low);
        Vector2 Force = MirrorObject.GetComponent<Rigidbody2D>().velocity;
        Force.y = 35;
        MirrorObject.GetComponent<Rigidbody2D>().velocity = Force;
        
        
        GlobalDef.LowRocketCount--;

     
           HasLowRocket = false; 
           LowRocketContent.alpha = 0.5f;
        
        
    }


    public void OnUseSpring()
    {
        if (!HasSpring)
        {
            return;
        }
        
        
        // use prop
        //TAManager.Instance.UseProp(GlobalDef.CurrentScore,"spring");
        NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,0,0,-1);
        
        if (GameController.GetGameState() == GameState.GameOver)
        {
            return;
        }

        if (MirrorObject.GetComponent<MirrorJump>().GetSpringState() == true)
        {
            return;
        }
        
        if (MirrorObject.GetComponent<MirrorJump>().GetEnterBlackState() == true)
        {
            return;
        }

        
        PickupItem();
        MirrorObject.GetComponent<MirrorJump>().SetSpringState(true);
        MirrorObject.GetComponent<MirrorJump>().ResetSpringUseCount();
            
        Vector2 Force =  MirrorObject.GetComponent<Rigidbody2D>().velocity;
        Force.y = 20f;
        MirrorObject.GetComponent<Rigidbody2D>().velocity = Force;

        GlobalDef.SpringCount--;

     
            HasSpring = false;
            SpringContent.alpha = 0.5f;
        
    }
    
    
    private void PickupItem()
    {
        var obj = ObjectPooler.Instance.SpawnFromPool("Pickup", transform.position, Quaternion.identity, 1f);
        obj.GetComponent<Animator>().SetTrigger("Play");
    }
    
    
    
    
    
}
