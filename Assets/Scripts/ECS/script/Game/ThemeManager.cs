
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
        if ("false" == PlayerPrefs.GetString("HasGuidence", "false"))
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
        
    }
    
    public void ToRightTheme()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        
        if ("false" == PlayerPrefs.GetString("HasGuidence", "false"))
        {
            return;
        }

        if (CurrentThemeIndex +1 > 5)
        {
            //  do some advice
            
            return;
        }
        
        PlayerPrefs.SetInt("CurrentTheme",CurrentThemeIndex+1);

        SoundManager.Instance.PlaySound(SoundName.TurnPage);
        RefreshLockState();
    }
    
    private void RefreshLockState()
    {
        int SpriteIndex = PlayerPrefs.GetInt("CurrentTheme");

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
        ThemeCloundRight.gameObject.GetComponent<Image>().sprite =  GetCloundByIndex(SpriteIndex);
        
        
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
