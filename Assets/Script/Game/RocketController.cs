
using UnityEngine;

public class RocketController : MonoBehaviour
{
    
    public Sprite[] LowRocket = new Sprite[2];
    
    public Sprite[] HighRocket = new Sprite[2];
    
    public Sprite[] LowRocketSprites = new Sprite[2];
    
    public Sprite[] HighRocketSprites = new Sprite[2];
    
    public Sprite[] WorldCup = new Sprite[2];
    
    public Sprite[] FootBall = new Sprite[2];

    public GameObject HightRocketImage;

    public GameObject LowRocketImage;
    
    public GameController GameController;

    private RocketLevel currentRocketLevel;

    private bool IsStartRocket = false;

    private int CurrentIndex = 0;
    
    
    
    
    private void Start()
    {
        int index = PlayerPrefs.GetInt("CurrentTheme");
        
        if (index == Constant.ThemeWorldCupIndex)
        {

            LowRocket[0] = FootBall[0];
            LowRocket[1] = FootBall[1];
            
            HighRocket[0] =WorldCup[0];
            HighRocket[1] = WorldCup[1];
        }
        else
        { 
            LowRocket[0] = LowRocketSprites[0];
            LowRocket[1] =LowRocketSprites[1];
            
            HighRocket[0] = HighRocketSprites[0];
            HighRocket[1] = HighRocketSprites[1];
            
        }
    }
    
    
    public void StartRocket(RocketLevel rocketLevel)
    {
        currentRocketLevel = rocketLevel;
        IsStartRocket = true;
        CurrentIndex = 0;

        if (rocketLevel == RocketLevel.High)
        {
            HightRocketImage.SetActive(true);
            
        }else 
        {
            LowRocketImage.SetActive(true);
        }

    }

    public void CloseRocket()
    {
        IsStartRocket = false;
        HightRocketImage.SetActive(false);
        LowRocketImage.SetActive(false);
    }

    
    
    private void FixedUpdate()
    {
        if (GameController.GetComponent<GameController>().GetGameState() == GameState.Gaming)
        {
            if (IsStartRocket)
            {
                RocketState();
            }
        }
        
    }
    
    private void RocketState()
    {
        if (CurrentIndex >= 2)
        {
            CurrentIndex = 0;
        }

        if (currentRocketLevel == RocketLevel.High)
        {
            HightRocketImage.transform.GetComponent<SpriteRenderer>().sprite = HighRocket[CurrentIndex];

        }else if(currentRocketLevel == RocketLevel.Low)
        {
            LowRocketImage.transform.GetComponent<SpriteRenderer>().sprite = LowRocket[CurrentIndex];
        }

        CurrentIndex++;
    }
    
    
    
    
    
    
}
