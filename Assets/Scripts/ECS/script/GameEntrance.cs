using System;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Video;

public class GameEntrance : MonoBehaviour
{
    [SerializeField] VideoPlayer videoPlayer;
    [SerializeField] bool useShuShuAnalysis = true;
    [SerializeField] bool IsTestEnv = true;
    
    

    private void Start()
    {
        
         MirrorSDK.SetLogoutCallback(() =>
        {
            PlayerPrefs.DeleteAll();
            SceneManager.LoadScene("Login");
            
        });

         if (!IsTestEnv)
         {

             PlayerPrefs.SetString("IsTestEnvironment", "false");
         }
         else
         {
             PlayerPrefs.SetString("IsTestEnvironment", "true");
             
         }
         
             StartPlay();
        
        if (useShuShuAnalysis)
        {
            TAManager.Instance.InitShuShuSDK();
        }
    }


    public void StartPlay()
    {
        videoPlayer.loopPointReached += OnVideoFinished;//添加播放结束事件
        videoPlayer.Play();
      
    }


    private void OnVideoFinished(VideoPlayer source)
    {  
        videoPlayer.Pause();
        
        StartCoroutine(ASynHidePanel());

    }

    IEnumerator ASynHidePanel()
    {
        yield return new WaitForSeconds(0.5f);
        videoPlayer.targetTexture.Release();
         videoPlayer.gameObject.SetActive(false);
         SceneManager.LoadScene("Login");
         
         
    }
    
 
    
    
}
