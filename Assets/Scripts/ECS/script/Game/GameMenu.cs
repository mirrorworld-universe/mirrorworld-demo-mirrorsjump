using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameMenu : MonoBehaviour
{


    public GameOverPanel GameOverWindow;

    public GameObject GamePauseWindow;

    public GameController GameController;

    public TextMeshProUGUI HighScore;


    public GameObject UnlockHeightAdvice;

    public GameObject UnlockAdvice;

    private bool IsHeightAdvice = false;
    private bool IsUnlockAdvice = false;
    private float CurrentTime = 0;


    public TextMeshProUGUI UnlockedHeightText;

    public void SetUnlockedHeightText(string height)
    {
        UnlockedHeightText.text = "Break " + height + " score and unlock new scene!";
    
    }

    private void Start()
    {
        HighScore.text = "0";
        
        UnlockHeightAdvice.SetActive(false);
        UnlockAdvice.SetActive(false);
        OpenUnlockHeightAdvice();
        EventDispatcher.Instance.userScoreReceived += OnUserScoreReceived;
        
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.userScoreReceived -= OnUserScoreReceived;
    }

    private void OnUserScoreReceived(UserScoreUpdateData data)
    {
        PlayerPrefs.SetString(GlobalDef.maxScore, ((long)data.highest_score).ToString());
        if (data.new_scenes.Count > 0)
        {
            // 解锁了新场景
            GameOverWindow.UnlockNewScene(data.new_scenes[0].scene_id);
        }
        else
        {
            // 未解锁新场景
            GameOverWindow.UnlockNewScene(0);
        }
        LoadingPanel.Instance.SetLoadingPanelEnable(false);
        GameOverWindow.RefreshData();
    }

    private void OpenUnlockHeightAdvice()
    {

        if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSpaceIndex)
        {
            if (1 == PlayerPrefs.GetInt("ThemeDesertState", 0))
            {
                return;
            }
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeDesertIndex)
        {
            if (1 ==  PlayerPrefs.GetInt("ThemeSnowState", 0))
            {
                return;
            }
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSnowIndex)
        {    
            if (1 ==   PlayerPrefs.GetInt("ThemeCyberpunkState", 0))
            {
                return;
            }
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeCyberpunkIndex)
        {    
            if (1 ==   PlayerPrefs.GetInt("ThemePastureState", 0))
            {
                return;
            }
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemePastureIndex)
        {
            return;
        }
        
        IsHeightAdvice = true;
        CurrentTime = 0;
        UnlockHeightAdvice.SetActive(true);
        
    }
    
    


    public void OpenUnlockAdvice()
    {
        IsUnlockAdvice = true;
        CurrentTime = 0;
        UnlockAdvice.SetActive(true);
        
    }

    


    private void Update()
    {
        
        if (IsHeightAdvice)
        {
            CurrentTime+=Time.deltaTime;
            if (CurrentTime >= 3)
            {
                IsHeightAdvice = false;
                CurrentTime = 0;
                UnlockHeightAdvice.SetActive(false);
            }
        }

        
        if (IsUnlockAdvice)
        {
            CurrentTime+=Time.deltaTime;
            if (CurrentTime >= 3)
            {
                IsUnlockAdvice = false;
                CurrentTime = 0;
                UnlockAdvice.SetActive(false);
            }
        }
    }





    public void GameOver()
    {
        LoadingPanel.Instance.SetLoadingPanelEnable(true);

        GameOverWindow.gameObject.SetActive(true);
        GameController.OnGameOver();

        UserScoreUpdateReq req = new UserScoreUpdateReq();
        req.user_id = LoginState.WalletAddress;

        if (FindObjectOfType<GameController>().GetMaxHeight() <= 0)
        {
            req.score = 0;
        }
        else
        {
            req.score = FindObjectOfType<GameController>().GetMaxHeight();
        }
    
        req.scene = PlayerPrefs.GetInt("CurrentTheme");
        
        Debug.Log("调用 NetworkManager.Instance.SendUserScoreReq(req)");
        Debug.Log("req.user_id :" + req.user_id);
        Debug.Log("req.score :" + req.score);
        Debug.Log("req.scene :" + req.scene);
        
        NetworkManager.Instance.SendUserScoreReq(req);
    }

    public void GamePause()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        GameController.OnGamePause();
      
        GamePauseWindow.SetActive(true);
        
    }

    public void GameResume()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        GamePauseWindow.SetActive(false);
        GameController.OnGameResume();
    }

    public void StartNewGame()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        GameController.StartNewGame();
    }

    public void CloseGameOverWindow()
    {
        SoundManager.Instance.PlaySound(SoundName.Close);
        GameOverWindow.gameObject.SetActive(false);
    }

    public void SetHighScore(string score)
    {
        HighScore.text = score;
    }

    public void UserExitGame()
    {   
        TAManager.Instance.EndGame("user_end");
        SoundManager.Instance.PlaySound(SoundName.Close);
        SceneManager.LoadScene("Menu");
    }
    
    public void GameOverExitGame()
    {   
        TAManager.Instance.EndGame("game_over");
        SoundManager.Instance.PlaySound(SoundName.Close);
        SceneManager.LoadScene("Menu");
    }
   
}
