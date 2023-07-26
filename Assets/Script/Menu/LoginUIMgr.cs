
using MirrorworldSDK;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class LoginUIMgr : MonoBehaviour
{
    public GameObject LoginPanel;
    public GameObject LoginButton;
    public bool IsInitPropPackage = true;
    public TMP_InputField Account;
    public TMP_InputField PassWord;
    public GameObject Title;

    public GameObject GameLoginTitle;

    public GameObject Back;

    public GameObject FailurePanel;


    private void Start()
    {
        SoundManager.Instance.GetAudioSource().clip = SoundManager.Instance.Clips[6];
        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();
        SoundManager.Instance.GetAudioSource().Play();
        LoginButton.SetActive(false);
    }

    private void Update()
    {
        //if (!GlobalDef.IsShowPackage)
        //{
        //    if (Account.text.Length >0 && PassWord.text.Length > 0)
        //    {
        //        GameLoginButton.interactable = true;
        //    }
        //    else
        //    {
        //        GameLoginButton.interactable = false;
        //    }
        //}
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

        MirrorSDK.GetAccessToken((isSuccess)=> {
            if (isSuccess)
            {
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

                        NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);

                        Debug.Log("call NetworkManager.Instance.SendUserBasicInfoReq");
                        Debug.Log("wallet(user_id)" + PlayerPrefs.GetString("walletAddress"));


                        NetworkManager.Instance.SendUserBasicInfoReq(PlayerPrefs.GetString("walletAddress"));
                        //SceneManager.LoadScene("Menu");

                    }
                    else
                    {
                        if (!GlobalDef.IsIOSEnv)
                        {
                            LoginButton.SetActive(true);
                            LoadingPanel.Instance.SetLoadingPanelEnable(false);
                            Back.SetActive(false);
                            return;
                        }


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
            else
            {
                if (!GlobalDef.IsIOSEnv)
                {
                    LoginButton.SetActive(true);
                    LoadingPanel.Instance.SetLoadingPanelEnable(false);
                    Back.SetActive(false);
                    return;
                }


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
                        PlayerCacheMgr.WalletAddress = LoginResponse.user.wallet.sol_address;
                        LoginState.HasLogin = true;
                        LoginState.Name = LoginResponse.user.username;
                        LoginState.WalletAddress = LoginResponse.user.wallet.sol_address;
                        LoginState.SUIWalletAddress = LoginResponse.user.wallet.sui_address;
                        PlayerPrefs.SetString("walletAddress", LoginResponse.user.wallet.sol_address);

                        NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);

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
                NetworkManager.Instance.GetPropInfo(LoginState.WalletAddress);
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
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.userInfoDataReceived -= OnUserDataReceived;
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
        foreach(UserInfoPackageData data in userInfoData.packages)
        {
            if (data.is_default)
            {
                LoginState.defaultRoleData = data;
            }
            else
            {
                LoginState.mintableRoleData = data;
                //xxxx/1.json
                PlayerPrefs.SetString("MintUrl", data.token_url);
                //Mint ID
                PlayerPrefs.SetString("TokenId",data.token_id.ToString());
                //当前玩家选中的游戏人物
                PlayerPrefs.SetInt("CurrentTokenID",data.token_id);
            }
        }

        if (GlobalDef.AddMintableRoleToPackage)
        {
            LoginState.mintableRoleData = new UserInfoPackageData();
            //xxxx/1.json
            LoginState.mintableRoleData.token_url = "http://metadata-assets.mirrorworld.fun/mirror_jump/metadata/101.json";
            LoginState.mintableRoleData.is_default = false;
            LoginState.mintableRoleData.image = "https://metadata-assets.mirrorworld.fun/mirror_jump/images/" + TestNFTGenerator.GenerateRandomNFTImage();
            LoginState.mintableRoleData.token_id = TmpTokenID++;
        }

        // 检查PlayerPref中的当前nft是否还存在
        // TODO
        LoadingPanel.Instance.SetLoadingPanelEnable(false);

        PlayerPrefs.SetString("HasReceiveToken", userInfoData.airdrop_sol? "true":"false");
        
        
        // 处理 token guidence 流程
        if (userInfoData.airdrop_sol)
        {
            PlayerPrefs.SetString("HasReceiveToken", "true");
            PlayerCacheMgr.FinishGuild();
        }
        
        //TAManager.Instance.AccountLogin(LoginState.WalletAddress);

        if (null != LoginState.Email)
        {
            //TAManager.Instance.LoginEvent(LoginState.Email);   
            //TAManager.Instance.UserSet(LoginState.Email);
        }
        else
        {
            //TAManager.Instance.LoginEvent();   
            //TAManager.Instance.UserSet();
        }

        SceneManager.LoadScene("Menu");
    }

    private int TmpTokenID = 1;
    public void OnDebugClick()
    {   
        
        
        Debug.LogWarning("click");
        IsDebug = true;
        
    }
}
