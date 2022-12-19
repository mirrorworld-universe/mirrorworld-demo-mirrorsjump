

using System;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class UIManager : MonoBehaviour
{



    public GameObject LoginPanel;
    
    public GameObject RankList;


    public GoogleMobileAdsManager GoogleMobileAdsManager;
    
    
    // watch Ad for prop reward

    public Sprite LowRocket;

    public Sprite HighRocket;

    public Sprite Spring;

    public GameObject RewardAdvice;


    public Image RewardImage;


    public GameObject RewardPackage;

    public TextMeshProUGUI LowRocketNumber;
    
    public TextMeshProUGUI HighRocketNumber;
    
    public TextMeshProUGUI SpringNumber;

   
    
    
    

    public ThemeManager ThemeManager;

    public GameObject LoginButton;


    public bool IsInitPropPackage = true;


    public TMP_InputField Account;

    public TMP_InputField PassWord;


    public GameObject Title;

    public GameObject GameLoginTitle;

    public GameObject Back;

    public GameObject FailurePanel;


    public Button GameLoginButton;
    
    
    

    

    private void Start()
    {   GameLoginButton.interactable = false;
        SoundManager.Instance.GetAudioSource().clip = SoundManager.Instance.Clips[6];
        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();
        SoundManager.Instance.GetAudioSource().Play();
        LoginButton.SetActive(false);
        
        if (null != GoogleMobileAdsManager)
        {
            GoogleMobileAdsManager.InitGoogleMobileAdsSDK();
        }
        
    }

    private void Update()
    {
        if (!GlobalDef.IsShowPackage)
        {
            if (Account.text.Length >0 && PassWord.text.Length > 0)
            {
                GameLoginButton.interactable = true;
            }
            else
            {
                GameLoginButton.interactable = false;
            }
        }
    }


    public void AutoLogin()
    {
            LoginButton.SetActive(false);
            LoadingPanel.Instance.SetLoadingPanelEnable(true);
            Back.SetActive(false);

            if (GlobalDef.IsShowPackage)
            {
                Title.SetActive(true);
                GameLoginTitle.SetActive(false);
            }
            else
            {
                Title.SetActive(false);
                GameLoginTitle.SetActive(true);
            }
            
            
            
            MirrorSDK.IsLoggedIn((result) =>
            {
                if (result)
                {
                    // 自动登录钱包地址（user_id）非空性检查 
                    if (PlayerPrefs.GetString("walletAddress", "empty") == "empty")
                    {
                        LoginButton.SetActive(true);
                        LoadingPanel.Instance.SetLoadingPanelEnable(false);
                        return;
                    }
                    LoginState.HasLogin = true;
                    LoginState.WalletAddress = PlayerPrefs.GetString("walletAddress");
                    LoginState.Email = PlayerPrefs.GetString("emailAddress");
                    
                    Debug.Log("call NetworkManager.Instance.SendUserBasicInfoReq");
                    Debug.Log("wallet(user_id)"+PlayerPrefs.GetString("walletAddress"));
                    
                
                    NetworkManager.Instance.SendUserBasicInfoReq(PlayerPrefs.GetString("walletAddress"));
                    //SceneManager.LoadScene("Menu");
                    
                }
                else
                {
                    
                    if (GlobalDef.IsShowPackage)
                    {
                        LoginButton.SetActive(true);
                        LoadingPanel.Instance.SetLoadingPanelEnable(false);
                        Back.SetActive(false);
                        
                    }
                    else
                    {
                        LoginButton.SetActive(false);
                        LoadingPanel.Instance.SetLoadingPanelEnable(false);
                        Back.SetActive(false);
                        GameLogin();
                    }
                    
                    
                
                }
            });
            
         
    }
    
    public void Login()
    {


        if (GlobalDef.IsShowPackage)
        {
               
            if (IsDebug)
            {
                SoundManager.Instance.PlaySound(SoundName.Button);
                SceneManager.LoadScene("Menu");
            }
            else
            {   
            
                SoundManager.Instance.PlaySound(SoundName.Button);

         
                MirrorSDK.StartLogin((LoginResponse)=>
                {
                    if(LoginResponse.access_token == "" || LoginResponse.refresh_token == "")
                    {
                        Debug.Log("MirrorJump:Login failed!");
                    }
                    else
                    {   
                    
                        LoginState.HasLogin = true;
                        LoginState.Name = LoginResponse.user.username;
                        LoginState.WalletAddress = LoginResponse.user.wallet.sol_address;
                        PlayerPrefs.SetString("walletAddress", LoginResponse.user.wallet.sol_address);
                    
                    
                        // LoginResponse.user.sol_address
                    
                        PlayerPrefs.SetString("emailAddress", LoginResponse.user.email);
                        LoginState.ID = LoginResponse.user.id.ToString();

                        LoadingPanel.Instance.SetLoadingPanelEnable(true);
                        // 与服务器通信发送登陆信息
                        NetworkManager.Instance.SendUserBasicInfoReq(LoginState.WalletAddress);
                        //SceneManager.LoadScene("Menu");
                    }

                });
            }
        }

    }





    public void GameLogin()
    {
        string userAccount = "mirrorworldtest001@gmail.com";
        string password = "123456789!";
        
        //  review
        MirrorSDK.LoginWithEmail(userAccount,password, (LoginResponse) =>
        {
            if (LoginResponse.status == "success")
            {
                LoginState.HasLogin = true;
                LoginState.Name = LoginResponse.data.user.username;
                LoginState.WalletAddress = LoginResponse.data.user.wallet.sol_address;
                PlayerPrefs.SetString("walletAddress", LoginResponse.data.user.wallet.sol_address);
                // LoginResponse.user.sol_address
                    
                PlayerPrefs.SetString("emailAddress", LoginResponse.data.user.email);
                LoginState.ID = LoginResponse.data.user.id.ToString();

                LoadingPanel.Instance.SetLoadingPanelEnable(true);
                // 与服务器通信发送登陆信息
                NetworkManager.Instance.SendUserBasicInfoReq(LoginState.WalletAddress);
            }
            else
            {
                FailurePanel.SetActive(true);
            }
            
        });

    }


    public void CloseFailure()
    {
        FailurePanel.SetActive(false);
    }

    private bool IsDebug;

    private void Awake()
    {
      
            EventDispatcher.Instance.userInfoDataReceived += OnUserDataReceived;
            EventDispatcher.Instance.OnPropResponse += OnPropCountReceived;
            NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);
            
    }

    private void OnDestroy()
    {
            EventDispatcher.Instance.userInfoDataReceived -= OnUserDataReceived;
            EventDispatcher.Instance.OnPropResponse -= OnPropCountReceived;
    }


    public void OnPropCountReceived(PropResponse propResponse)
    {
        if (propResponse.data.props.high_rocket <= 0)
        {
            HighRocketNumber.text = "x0";
        }
        else
        {
            HighRocketNumber.text = "x"+propResponse.data.props.high_rocket;
        }
        
        if (propResponse.data.props.low_rocket <= 0)
        {
            LowRocketNumber.text = "x0";
           
        }else
        {
            LowRocketNumber.text = "x"+propResponse.data.props.low_rocket;
        }
        
        
        if (propResponse.data.props.spring <= 0)
        {
            SpringNumber.text = "x0";
           
        }else
        {
            SpringNumber.text = "x"+propResponse.data.props.spring;
        }

        GlobalDef.HighRocketCount = propResponse.data.props.high_rocket;
        GlobalDef.LowRocketCount = propResponse.data.props.low_rocket;
        GlobalDef.SpringCount = propResponse.data.props.spring;

        if (!IsInitPropPackage)
        {
            LoadingPanel.Instance.SetLoadingPanelEnable(false);
            RewardPackage.SetActive(true);
        }

        IsInitPropPackage = false;

    }
    
    
    public void OpenRewardPackage()
    {
        //
        // if (GlobalDef.HighRocketCount <= 0)
        // {
        //     HighRocketNumber.text = "x0";
        //    
        // }else
        // {
        //     HighRocketNumber.text = "x"+GlobalDef.HighRocketCount;
        // }
       
       
        // if (GlobalDef.LowRocketCount <= 0)
        // {
        //     LowRocketNumber.text = "x0";
        //    
        // }else
        // {
        //     LowRocketNumber.text = "x"+GlobalDef.LowRocketCount;
        // }

       
        // if (GlobalDef.SpringCount <= 0)
        // {
        //     SpringNumber.text = "x0";
        //    
        // }else
        // {
        //     SpringNumber.text = "x"+GlobalDef.SpringCount;
        // }
       
        // RewardPackage.SetActive(true);
        
        NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);
        LoadingPanel.Instance.SetLoadingPanelEnable(true);
       
    }

    private void OnUserDataReceived(UserInfoData userInfoData)
    {

        if (null == userInfoData.name)
        {
            GlobalDef.UserName = "default";
        }
        else
        {
            GlobalDef.UserName = userInfoData.name;
        }
        
        // 数据记录
        // 处理场景
        // 先清除所有的场景记录，避免换号登陆之后场景还是解锁状态
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeDesertIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeSnowIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeCyberpunkIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemePastureIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeWorldCupIndex, 0);
        
        PlayerPrefs.SetInt("ThemeDesertState", 0);
        
        PlayerPrefs.SetInt("ThemeSnowState", 0);
        
        PlayerPrefs.SetInt("ThemeCyberpunkState", 0);
        
        PlayerPrefs.SetInt("ThemePastureState", 0);
        
        PlayerPrefs.SetInt("ThemeWorldCupState", 0);
        
        

        foreach(var scenes in userInfoData.scenes)
        {
            if(scenes.scene_id == 0)
            {
                continue;
            }

            PlayerPrefs.SetInt(Constant.Theme_Pre + scenes.scene_id, 1);

            if (scenes.scene_id == 1)
            {
                PlayerPrefs.SetInt("ThemeDesertState", 1);
                
            }else if (scenes.scene_id == 2)
            {
                PlayerPrefs.SetInt("ThemeSnowState", 1);
            }else if (scenes.scene_id == 3)
            {
                PlayerPrefs.SetInt("ThemeCyberpunkState", 1);
            }else if (scenes.scene_id == 4)
            {
                PlayerPrefs.SetInt("ThemePastureState", 1);
                
            }else if (scenes.scene_id == 5)
            {
                PlayerPrefs.SetInt("ThemeWorldCupState", 1);
            }

        }

        // 处理NFT
        LoginState.defaultRoleData = null;
        LoginState.mintableRoleData = null;
        foreach(var data in userInfoData.packages)
        {
            if (data.is_default)
            {
                LoginState.defaultRoleData = data;
            }
            else
            {
                LoginState.mintableRoleData = data;
                PlayerPrefs.SetString("MintUrl", data.token_url);
                PlayerPrefs.SetString("TokenId",data.token_id.ToString());
                PlayerPrefs.SetInt("CurrentTokenID",data.token_id);
            }
        }

        // 检查PlayerPref中的当前nft是否还存在
        // TODO
        LoadingPanel.Instance.SetLoadingPanelEnable(false);

        PlayerPrefs.SetString("HasReceiveToken", userInfoData.airdrop_sol? "true":"false");
        
        
        // 处理 token guidence 流程
        if (userInfoData.airdrop_sol)
        {
            PlayerPrefs.SetString("HasReceiveToken", "true");
            PlayerPrefs.SetString("HasGuidence", "true");
        }
        
        TAManager.Instance.AccountLogin(LoginState.WalletAddress);

        if (null != LoginState.Email)
        {
            TAManager.Instance.LoginEvent(LoginState.Email);   
            TAManager.Instance.UserSet(LoginState.Email);
        }
        else
        {
            TAManager.Instance.LoginEvent();   
            TAManager.Instance.UserSet();
        }

        SceneManager.LoadScene("Menu");
    }

    public void OnDebugClick()
    {   
        
        
        Debug.LogWarning("click");
        IsDebug = true;
        
    }
    
    public void PlayGame()
    {    
        if (ThemeManager.GetCurrentLockState())
        {   
            // add some tips 
            return;
        }
        
        TAManager.Instance.StartGame();
        
        SoundManager.Instance.PlaySound(SoundName.Button);
        
        SoundManager.Instance.GetAudioSource().mute = true;
        SoundManager.Instance.GetAudioSource().clip = null;
        
        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();
        
        SceneManager.LoadScene("Game");
    }

   

    public void OpenWallet()
    {   
        SoundManager.Instance.PlaySound(SoundName.Button);
        TAManager.Instance.OpenWallet();
<<<<<<< HEAD
        MirrorSDK.OpenWalletPage(()=> {
            PlayerPrefs.DeleteAll();
            SceneManager.LoadScene("Login");
        });
=======
        MirrorSDK.OpenWalletPage(() =>
        {
           
                PlayerPrefs.DeleteAll();
                SceneManager.LoadScene("Login");
                
        });
        
>>>>>>> Google-Dev1
    }
    
    public void OpenMarket()
    {   
        SoundManager.Instance.PlaySound(SoundName.Button);
        TAManager.Instance.OpenMarketPlace();
        MirrorSDK.OpenMarketPage();
    }

    public void ClearAllPersistingData()
    {
        PlayerPrefs.DeleteAll();
    }
    
    
    
    
    // todo Reward Advice & Reward Package
    
    // Google AdMob Watch Ad for Reward
    public void OpenRewardAdvice()
    {
        RewardImage.sprite = GenerateRewardProp();
        RewardAdvice.SetActive(true);
        
    }
    
    // just mock data
    private Sprite GenerateRewardProp()
    {
        int seed = Random.Range(1, 30);

        if (seed <= 10)
        {
            GlobalDef.SpringCount++;
            
            
            Debug.Log("UpdatePropParams:"+LoginState.WalletAddress+"  "+0+"  "+0+"   "+1);
            
            NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,0,0,1);
            return Spring;
            
        }else if (seed <= 20)
        {
            GlobalDef.LowRocketCount++;
            Debug.Log("UpdatePropParams:"+LoginState.WalletAddress+"  "+0+"  "+0+"   "+1);
            
            NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,0,1,0);
            return LowRocket;
        }

        GlobalDef.HighRocketCount++;
        Debug.Log("UpdatePropParams:"+LoginState.WalletAddress+"  "+0+"  "+0+"   "+1);
        NetworkManager.Instance.UpdateProp(LoginState.WalletAddress,1,0,0);
        return HighRocket;
    }



    public void CloseRewardAdvice()
    {
      
        RewardAdvice.SetActive(false);
        RewardImage.sprite = null;
    }

    public void CloseRewardPackage()
    {
        RewardPackage.SetActive(false);
    }


    public void OpenRankList()
    {
        RankList.SetActive(true);
        RankList.GetComponent<RankListManager>().OpenDayRank();
    }
    
    public void CloseRankList()
    {
        RankList.SetActive(false);
    }
    
}
