
using System.Collections;
using MirrorworldSDK;
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
        PlayerPrefs.DeleteAll();
        //    double oriD = 123.45;
        //    string numStr = oriD.ToString();
        //    double testF = PrecisionUtil.StrToFloat(numStr);
        //    double testD = PrecisionUtil.StrToDouble(numStr);
        //    Debug.Log("-=-=-=-=-=-==-=testD>>>>>" + testD);
        //    Debug.Log("-=-=-=-=-=-==-=testF>>>>>" + testF);
        //    float fff = float.Parse(numStr);
        //    Debug.Log("-=-=-=-=-=-==-=fff>>>>>" + fff);
        //    double dou = 123.45;
        //    Debug.Log("-=-=-=-=-=-==-=1>>>>>" + dou.ToString());
        //    decimal decimala = new decimal(dou);
        //    Debug.Log("-=-=-=-=-=-==-=2>>>>>" + decimala);
        //    string strNeed = PrecisionUtil.GetNumberDevided(1, 9);
        //    Debug.Log("-=-=-=-=-=-==-=>>>>>"+ strNeed);

        //移动到OpenWallet方法作为参数了
        // MirrorSDK.SetLogoutCallback(() =>
        //{
        //    PlayerPrefs.DeleteAll();
        //    SceneManager.LoadScene("Login");

        //});

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
            //TAManager.Instance.InitShuShuSDK();
        }
        
        GlobalDef.CanUserGoogleAdMob = true;

      

        
      
        
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
