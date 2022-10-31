
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

 

    public Sprite[] ThemeBackSprites = new Sprite[5];
    
    public Sprite[] ThemeGroudSprites = new Sprite[5];
    
    public Sprite[] ThemeCloudSprites = new Sprite[5];




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

        if (CurrentThemeIndex +1 > 4)
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

        if (SpriteIndex >= 4)
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
        
        ThemeBack.gameObject.GetComponent<Image>().sprite = ThemeBackSprites[SpriteIndex];
        ThemeGroud.gameObject.GetComponent<Image>().sprite = ThemeGroudSprites[SpriteIndex];
        ThemeCloud.gameObject.GetComponent<Image>().sprite = ThemeCloudSprites[SpriteIndex];
        ThemeCloundRight.gameObject.GetComponent<Image>().sprite = ThemeCloudSprites[SpriteIndex];
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

        return;
        if (index == Constant.ThemeDesertIndex)
        {
            ThemeGroud.GetComponent<RectTransform>().sizeDelta = new Vector2(ThemeGroud.GetComponent<RectTransform>().sizeDelta.x,630f);
        }
        else
        { 
            ThemeGroud.GetComponent<RectTransform>().sizeDelta = new Vector2(ThemeGroud.GetComponent<RectTransform>().sizeDelta.x,536f);
        }
        
    }

}
