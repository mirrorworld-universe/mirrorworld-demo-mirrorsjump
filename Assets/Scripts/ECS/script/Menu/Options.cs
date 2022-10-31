
using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class Options : MonoBehaviour
{
    public GameObject OptionMenu;

    public GameObject OptionMenuDetails;

    public GameObject Bg;

    public GameObject exit;

    public GameObject returnButton;

    public Button soundOn;
    public Button soundOff;


    public void OpenOptions()
    {
        SoundManager.Instance.PlaySound(SoundName.Pop);
        Bg.SetActive(true);
        exit.SetActive(true);
        OptionMenu.SetActive(true);
        OptionMenuDetails.SetActive(false);
        returnButton.SetActive(false);

        soundOn.onClick.AddListener(() =>
        {
            SoundManager.Instance.PlaySound(SoundName.AudioSwitch);
            OnSoundOn();
        });
        soundOff.onClick.AddListener(() =>
        {
            SoundManager.Instance.PlaySound(SoundName.AudioSwitch);
            OnSoundOff();
        });

        bool isMute = SoundManager.Instance.GetSoundState();

        if (isMute)
        {
            OnSoundOff();
        }
        else
        {
            OnSoundOn();
        }
    }

    private void OnSoundOff()
    {  
        
        TAManager.Instance.ChangeSound("off");
        SoundManager.Instance.SetSoundState(true);

        SetButtonSelected(soundOff , true);
        SetButtonSelected(soundOn, false);

        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();


    }

    private void OnSoundOn()
    {   
        TAManager.Instance.ChangeSound("on");
        
        SoundManager.Instance.SetSoundState(false);

        SetButtonSelected(soundOff, false);
        SetButtonSelected(soundOn, true);
        SoundManager.Instance.GetAudioSource().mute = SoundManager.Instance.GetSoundState();
    }

    public void SetButtonSelected(Button btn, bool isSelect)
    {
        if (isSelect)
        {
            btn.GetComponent<Image>().color = Color.black;
            btn.GetComponentInChildren<TextMeshProUGUI>().color = new Color(249 / 255f, 253 / 255f, 35 / 255f);
        }
        else
        {
            btn.GetComponent<Image>().color = Color.clear;
            btn.GetComponentInChildren<TextMeshProUGUI>().color = Color.black;
        }
    }

    public void ExitOptions()
    {
        SoundManager.Instance.PlaySound(SoundName.Close);
        Bg.SetActive(false);
        exit.SetActive(false);
        OptionMenu.SetActive(false);
        OptionMenuDetails.SetActive(false);
        returnButton.SetActive(false);
    }


    public void BackOptionMenu()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        returnButton.SetActive(false);
        OptionMenuDetails.SetActive(false);
        OptionMenu.SetActive(true);
    }
    
    

    public void AboutMirrorJump()
    {   
        TAManager.Instance.AboutMirrorjump();
        SoundManager.Instance.PlaySound(SoundName.Button);
        OptionMenu.SetActive(false);
        OptionMenuDetails.SetActive(true);
        returnButton.SetActive(true);
    }

    public void OpenFeedback()
    {   TAManager.Instance.GiveFeedback();
        SoundManager.Instance.PlaySound(SoundName.OpenUrl);
        Application.OpenURL("https://market-assets.mirrorworld.fun/game/researchjump2.html");
    }
    
    public void OpenFAQ()
    {   TAManager.Instance.ViewFAQ();
        SoundManager.Instance.PlaySound(SoundName.OpenUrl);
        Application.OpenURL("https://blog.mirrorworld.fun/p/mirrors-jump-faq");
    }
    
    public void OpenMirrorSDKLink()
    {   TAManager.Instance.ExploreSDK();
        SoundManager.Instance.PlaySound(SoundName.OpenUrl);
        Application.OpenURL("https://mirrorworld.fun/");
    }
    
   
}
