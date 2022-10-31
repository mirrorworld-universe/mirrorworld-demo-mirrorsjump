

using UnityEngine;
using UnityEngine.SceneManagement;

public class UIManager : MonoBehaviour
{


    public ThemeManager ThemeManager;
    

    public GameObject LoginButton;

    

    private void Start()
    {
        SoundManager.Instance.GetAudioSource().clip = SoundManager.Instance.Clips[5];
        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();
        SoundManager.Instance.GetAudioSource().Play();
        LoginButton.SetActive(false);
        
        
    }



    public void AutoLogin()
    {
        LoginButton.SetActive(false);
            LoadingPanel.Instance.SetLoadingPanelEnable(true);
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
                    LoginButton.SetActive(true);
                    LoadingPanel.Instance.SetLoadingPanelEnable(false);
                }
            });
            
            // LoginButton.SetActive(true);
            // LoadingPanel.Instance.SetLoadingPanelEnable(false);
    }

    private bool IsDebug;

    private void Awake()
    {
      
            EventDispatcher.Instance.userInfoDataReceived += OnUserDataReceived;
      
        
    }

    private void OnDestroy()
    {
     
            EventDispatcher.Instance.userInfoDataReceived -= OnUserDataReceived;

    }

    private void OnUserDataReceived(UserInfoData userInfoData)
    {    
        
        
        
        // 数据记录
        // 处理场景
        // 先清除所有的场景记录，避免换号登陆之后场景还是解锁状态
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeDesertIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeSnowIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemeCyberpunkIndex, 0);
        PlayerPrefs.SetInt(Constant.Theme_Pre + Constant.ThemePastureIndex, 0);
        
        PlayerPrefs.SetInt("ThemeDesertState", 0);
        
        PlayerPrefs.SetInt("ThemeSnowState", 0);
        
        PlayerPrefs.SetInt("ThemeCyberpunkState", 0);
        
        PlayerPrefs.SetInt("ThemePastureState", 0);
        
        

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

    public void Login()
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

    public void OpenWallet()
    {   
        SoundManager.Instance.PlaySound(SoundName.Button);
        TAManager.Instance.OpenWallet();
        MirrorSDK.OpenWalletPage();
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


    
}
