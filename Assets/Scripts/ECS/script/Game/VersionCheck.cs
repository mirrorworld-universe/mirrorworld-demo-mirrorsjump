using System.Collections;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class VersionCheck : MonoBehaviour
{


    private bool IsGoogleEnv = false;

    private bool IsIOSEnv = false;
    

    public UIManager UIManager;
     public struct VersionData
       {
           public string version;
           public string minversion;
           public string reviewversion; // 空字符串-非审核期，非空-审核期
           public string url;
           public string desc;
           public string googleUrl;
           public string iosurl;
           public string access;
           public bool stop;

           
           // 是否停服, 停服时不进行更新逻辑判断
       }
   
       struct Version
       {
           public int major;
           public int minor;
           public int patch;
           public int build;
       }
   
       [SerializeField] private VersionCheckDialog dialog;
       [SerializeField] private GameObject versionCheckPanel;
    
       private VersionData versionData;
       private bool needForceUpdate;

       private void Awake()
       {
           if (this.enabled)
           {
               versionCheckPanel.SetActive(true);
           }
       }
   
       void Start()
       {
           CheckVersion();
           dialog.confirmClicked += OnConfirmClicked;
           dialog.cancelClicked += OnCancelClicked;
   
       }
   
       private void OnCancelClicked()
       {
           dialog.gameObject.SetActive(false);
           // todo Start Auto Login
           UIManager.AutoLogin();
       }
   
       private void OnConfirmClicked()
       {
           if (versionData.stop)
           {
               Application.Quit();
           }
           else
           {

               if (IsGoogleEnv)
               {
                   Application.OpenURL(versionData.googleUrl);
               }
               else
               {
                   if (IsIOSEnv)
                   {
                       Application.OpenURL(versionData.iosurl);
                   }else
                   {
                       Application.OpenURL(versionData.url);
                   }
                  
               }
            
               
               if(!needForceUpdate)  
               {
                  dialog.gameObject.SetActive(false);
                  // todo Start Auto Login
                  UIManager.AutoLogin();
               }
               else
               {
                   dialog.gameObject.SetActive(true);
               }
           }
       }
   
       private void CheckVersion()
       {
           string url = "https://games.mirrorworld.fun/game/mirror_jump/Config/config.json";
   #if UNITY_ANDROID
           url = "https://games.mirrorworld.fun/game/mirror_jump/Config/config.json";
   #elif UNITY_IPHONE
           url = "https://games.mirrorworld.fun/game/mirror_jump/Config/config.json";
   #endif
           StartCoroutine(Get(url));
       }
   
       private IEnumerator Get(string path)
       {
   #if UNITY_IPHONE || UNITY_STANDALONE_OSX
           // ios和mac系统在场景初始化后离开发送http请求会耗时过长，所以加个延迟
           yield return new WaitForSeconds(0.8f);
   #endif
           using (UnityWebRequest request = UnityWebRequest.Get(path))
           {
               yield return request.SendWebRequest();
   
               versionCheckPanel.SetActive(false);
               var result = request.result;
   
               if(request.result == UnityWebRequest.Result.Success)
               {   
                   
                   Debug.Log("VersionText  "+request.downloadHandler.text);
                   var data = JsonConvert.DeserializeObject<VersionData>(request.downloadHandler.text);
                   versionData = data;
   
                   if (data.stop)
                   {
                       var currentVersionList = SplitVersion(GlobalDef.GetCurrentVersion());
                       var newestVersionList = SplitVersion(data.version);
                       
                       if(!IsLower(newestVersionList, currentVersionList))
                       {
                           dialog.displayMessage("Service Update", data.desc);
                           dialog.EnableConfirmButton("Exit");
                       }
                       else
                       {
                           // todo Start Auto Login
                           UIManager.AutoLogin();    
                       }
                       
                       
                   }
                   else
                   {
                       // 显示游客登陆时候，通知
                   if (NeedForceUpdate(data))
                   {
                       // 显示强制更新窗口
                       needForceUpdate = true; 
                       dialog.displayMessage("Update", data.desc);
                       dialog.EnableConfirmButton("Download");
                   }
                   else if (HasNewVersion(data))
                   {
                     
                            needForceUpdate = false;
                            dialog.displayMessage("Update", data.desc);
                            dialog.EnableConfirmButton("Download");
                            dialog.EnableCancelButton();
                       
                   }


                   if (!NeedForceUpdate(data) && !HasNewVersion(data))
                   {
                       // todo Start Auto Login
                       UIManager.AutoLogin();
                   }
                   }
               }
               
               
               
           }
       }
   
     
   
       /// <summary>
       /// 第一个版本是否比第二个版本低
       /// </summary>
       /// <param name="v1"></param>
       /// <param name="v2"></param>
       /// <returns></returns>
       private bool IsLower(Version v1, Version v2)
       {
           if (v1.major > v2.major)
           {
               return false;
           }
           else if (v1.major < v2.major)
           {
               return true;
           }
           else if (v1.minor > v2.minor)
           {
               return false;
           }
           else if (v1.minor < v2.minor)
           {
               return true;
           }
           else if (v1.patch > v2.patch)
           {
               return false;
           }
           else if (v1.patch < v2.patch)
           {
               return true;
           }
           else if (v1.build > v2.build)
           {
               return false;
           }
           else if(v1.build < v2.build)
           {
               return true;
           }
           else
           {
               return false;
           }
       }
   
       private bool NeedForceUpdate(VersionData data)
       {
           // 判断当前版本是否是最新版本
           var currentVersionList = SplitVersion(GlobalDef.GetCurrentVersion());
           var lowestVersionList = SplitVersion(data.minversion);
   
           return IsLower(currentVersionList, lowestVersionList);
       }
       
       private bool HasNewVersion(VersionData data)
       {
           var currentVersionList = SplitVersion(GlobalDef.GetCurrentVersion());
           var newestVersionList = SplitVersion(data.version);
   
           return IsLower(currentVersionList, newestVersionList);
       }
   
       private Version SplitVersion(string versionData)
       {
           Version version = new Version();
           var list = versionData.Split('.');
   
           version.major = int.Parse(list[0]);
           version.minor = int.Parse(list[1]);
           version.patch = int.Parse(list[2]);
           if(list.Length >= 4)
           {
               version.build = int.Parse(list[3]);
           }
   
           return version;
       }
   
     
}
