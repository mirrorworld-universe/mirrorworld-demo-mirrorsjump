
using System.Collections.Generic;
using MirrorWorld;
using MirrorWorldResponses;
using MirrorworldSDK;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class ThemeManager : MonoBehaviour
{
    public GameObject ThemeBack;
    public GameObject ThemeGroud;
    public GameObject ThemeCloud;
    public GameObject ThemeCloundRight;
    

    public GameObject LockedBack;
    public GameObject Tips;
    
    

    

    private int CurrentThemeIndex ;


    private bool IsLockCurrentTheme;


    public GameObject LeftPage;

    public GameObject RightPage;


  
    
    
    
    
    
    private void Start()
    {   
       
        if (PlayerPrefs.GetInt("CurrentTheme",-1) == -1)
        {
           PlayerPrefs.SetInt("CurrentTheme",Constant.ThemeSpaceIndex);
        }
        RefreshLockState();
        
    }
    
    public void ToLeftTheme()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        if (GlobalDef.IsShowPackage && PlayerCacheMgr.GuildNotFinish())
        {
            return;
        }
        
        if (CurrentThemeIndex - 1 < 0)
        {
            //  do some advice
            return;
        }
        
        PlayerPrefs.SetInt("CurrentTheme",CurrentThemeIndex-1);

        SoundManager.Instance.PlaySound(SoundName.TurnPage);
        RefreshLockState();

        SecretCheck(1);
    }
    
    public void ToRightTheme()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);

        Debug.Log("ToRightTheme: ToRightTheme start...");
        if (GlobalDef.IsShowPackage && PlayerCacheMgr.GuildNotFinish())
        {
            Debug.Log("ToRightTheme: Guild is not finished,return!");
            return;
        }

        if (CurrentThemeIndex +1 > 5)
        {
            //  do some advice
            Debug.Log("ToRightTheme: CurrentThemeIndex is "+ CurrentThemeIndex+", it is not bigger than 5,return!");

            return;
        }

        int aaa = CurrentThemeIndex + 1;
        Debug.Log("ToRightTheme: save CurrentThemeIndex as "+ aaa);
        PlayerPrefs.SetInt("CurrentTheme",CurrentThemeIndex+1);

        Debug.Log("ToRightTheme: play sound turnpage... ");
        SoundManager.Instance.PlaySound(SoundName.TurnPage);
        Debug.Log("ToRightTheme: refresh lock state... ");
        RefreshLockState();

        SecretCheck(2);
    }


    private List<int> secretList = new List<int>() { 2, 1, 2, 2, 1 };
    private int secretIdx = 0;
    private void SecretCheck(int secretNum)
    {
        Debug.Log("Secret idx:" + secretIdx);
        Debug.Log("Secret input:" + secretNum);
        if (secretIdx < secretList.Count)
        {
            int target = secretList[secretIdx];
            Debug.Log("Secret target:" + target);
            if (secretNum == target)
            {
                secretIdx++;
                if (secretIdx == secretList.Count - 1)
                {
                    secretIdx = 0;
                    Debug.Log("Secret");
                    GlobalDef.AddMintableRoleToPackage = true;
                }
            }
            else
            {
                secretIdx = 0;
            }
        }


        //string cName = "Collection0703";
        //string cSymbol = "C0703";
        //string json = "http://metadata-assets.mirrorworld.fun/mirror_jump/metadata/101.json";

        //MWSDK.Solana.Asset.MintCollection(cName,cSymbol,json,400, Confirmation.Default,null,(response)=> {
        //    Debug.Log("=====>"+JsonUtility.ToJson(response));
        //});

        //EVMReqStorefrontObj sf = new EVMReqStorefrontObj();
        //sf.description = "Store front obj";
        //sf.name = "Mirrors Jump Marketplace";
        //sf.subdomain = "mj";
        //List<string> collections = new List<string>();
        //collections.Add(GlobalDef.ParentCollectionDevNet);
        //MWSDK.Solana.Asset.CreateMarketplace(200,sf, collections,(res)=> {
        //    Debug.Log("======>"+JsonUtility.ToJson(res));
        //});
    }

    private void RefreshLockState()
    {
        int SpriteIndex = PlayerPrefs.GetInt("CurrentTheme");
        Debug.Log("ToRightTheme: SpriteIndex is " + SpriteIndex);

        if (SpriteIndex >= 5)
        {
            RightPage.gameObject.GetComponent<CanvasGroup>().alpha = 0f;
            RightPage.gameObject.GetComponent<Button>().interactable =false;
            
        }else if (SpriteIndex <= 0)
        {
            LeftPage.gameObject.GetComponent<CanvasGroup>().alpha = 0f;
            LeftPage.gameObject.GetComponent<Button>().interactable = false;
        }
        else
        {
            RightPage.gameObject.GetComponent<CanvasGroup>().alpha = 1f;
            LeftPage.gameObject.GetComponent<CanvasGroup>().alpha = 1f;
            LeftPage.gameObject.GetComponent<Button>().interactable = true;
            RightPage.gameObject.GetComponent<Button>().interactable =true;
        }

        ThemeBack.gameObject.GetComponent<Image>().sprite = GetBackGroudByIndex(SpriteIndex);
        ThemeGroud.gameObject.GetComponent<Image>().sprite = GetGrassByIndex(SpriteIndex);
        ThemeCloud.gameObject.GetComponent<Image>().sprite = GetCloundByIndex(SpriteIndex);
        ThemeCloundRight.gameObject.GetComponent<Image>().sprite = GetCloundByIndex(SpriteIndex);
        ClundPositionAdjust(SpriteIndex);
        GrassPositionAdjust(SpriteIndex);
        
        if (LockState())
        {
            IsLockCurrentTheme = true;
            LockedBack.SetActive(true);
            Tips.SetActive(true);
            
        }
        else
        {
            IsLockCurrentTheme = false;
            LockedBack.SetActive(false);
            Tips.SetActive(false);
            
        }
        
        CurrentThemeIndex = PlayerPrefs.GetInt("CurrentTheme");
        Debug.Log("ToRightTheme: refresh CurrentThemeIndex to " + CurrentThemeIndex);
    }
    
    
    
    
    private Sprite GetBackGroudByIndex(int index)
    {
        if (index == 0)
        {
            return ResourceManager.Instance.GetSprite("bg");

        }else if (index == 1)
        {
            return ResourceManager.Instance.GetSprite("bg_2");
            
        }else if (index == 2)
        {
            
            return ResourceManager.Instance.GetSprite("bg_3");
            
        }else if (index == 3)
        {
            return ResourceManager.Instance.GetSprite("bg_4");
            
        }else if (index == 4)
        {
            return ResourceManager.Instance.GetSprite("bg_5");
            
        }else if (index == 5)
        {
            return ResourceManager.Instance.GetSprite("bg_6");
        }


        return null;
    }

    private Sprite GetCloundByIndex(int index)
    {
        if (index == 0)
        {
            return ResourceManager.Instance.GetSprite("yuncai_1");

        }else if (index == 1)
        {
            return ResourceManager.Instance.GetSprite("yuncai_2");
            
        }else if (index == 2)
        {
            
            return ResourceManager.Instance.GetSprite("yuncai_3");
            
        }else if (index == 3)
        {
            return ResourceManager.Instance.GetSprite("yuncai_4");
            
        }else if (index == 4)
        {
            return ResourceManager.Instance.GetSprite("yuncai_5");
            
        }else if (index == 5)
        {
            return ResourceManager.Instance.GetSprite("yuncai_6");
        }


        return null;
    }


    private Sprite GetGrassByIndex(int index)
    {
        if (index == 0)
        {
            return ResourceManager.Instance.GetSprite("bg_up");

        }else if (index == 1)
        {
            return ResourceManager.Instance.GetSprite("bg_up_2");
            
        }else if (index == 2)
        {
            
            return ResourceManager.Instance.GetSprite("bg_up_3");
            
        }else if (index == 3)
        {
            return ResourceManager.Instance.GetSprite("bg_up_4");
            
        }else if (index == 4)
        {
            return ResourceManager.Instance.GetSprite("bg_up_5");
            
        }else if (index == 5)
        {
            return ResourceManager.Instance.GetSprite("bg_up_6");
        }


        return null;
    }
    
    
    
    private bool LockState()
    {
        int LockState = 1;

        if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeDesertIndex)
        {
            LockState = PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeDesertIndex, 0);

        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeSnowIndex)
        {
            LockState = PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeSnowIndex, 0);
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeCyberpunkIndex)
        {
            LockState = PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeCyberpunkIndex, 0);
            
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemePastureIndex)
        {
             LockState = PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemePastureIndex, 0); 
             
        }else if (PlayerPrefs.GetInt("CurrentTheme") == Constant.ThemeWorldCupIndex)
        {
            LockState = PlayerPrefs.GetInt(Constant.Theme_Pre + Constant.ThemeWorldCupIndex, 0); 
        }


        if (LockState == 0)
        {
            return true;
        }

        return false;
        
    }


    public bool GetCurrentLockState()
    {
        return IsLockCurrentTheme;
    }


    private void ClundPositionAdjust(int index)
    {
        if (index == Constant.ThemeSpaceIndex)
        {
            ThemeCloud.GetComponent<RectTransform>().sizeDelta = new Vector2(1069f,1661f);
            ThemeCloundRight.GetComponent<RectTransform>().sizeDelta = new Vector2(1069f,1661f);
        }
        else if (index == Constant.ThemeDesertIndex)
        {
            ThemeCloud.GetComponent<RectTransform>().sizeDelta = new Vector2(689f,740f);
            ThemeCloundRight.GetComponent<RectTransform>().sizeDelta = new Vector2(689f,740f);
            
        }else if (index == Constant.ThemeSnowIndex)
        {
            ThemeCloud.GetComponent<RectTransform>().sizeDelta = new Vector2(1190f,1121f);
            ThemeCloundRight.GetComponent<RectTransform>().sizeDelta = new Vector2(1190f,1121f);

        }else if (index == Constant.ThemeCyberpunkIndex)
        {
           
            ThemeCloud.GetComponent<RectTransform>().sizeDelta = new Vector2(1105f,644f);
            ThemeCloundRight.GetComponent<RectTransform>().sizeDelta = new Vector2(1105f,644f);
            
        }else if (index == Constant.ThemePastureIndex)
        {
            ThemeCloud.GetComponent<RectTransform>().sizeDelta = new Vector2(1034f,595f);
            ThemeCloundRight.GetComponent<RectTransform>().sizeDelta = new Vector2(1034f,595f);
        }
        
    }
    
    private void GrassPositionAdjust(int index)
    {
        // 1080  1160
     
        if (index == Constant.ThemeWorldCupIndex)
        {
            ThemeGroud.GetComponent<RectTransform>().sizeDelta = new Vector2(ThemeGroud.GetComponent<RectTransform>().sizeDelta.x,1160f);
          //  WorldCup.SetActive(true);
        }
        else
        { 
            ThemeGroud.GetComponent<RectTransform>().sizeDelta = new Vector2(ThemeGroud.GetComponent<RectTransform>().sizeDelta.x,1080f);
            //WorldCup.SetActive(false);
        }
        
    }

}
