// using UnityEngine;
// using System.Collections;
// using cn.sharesdk.unity3d;
//
// public class ShareSDKManager : MonoBehaviour
// {
//     private MobSDK mobsdk;
//     public ShareSDK ssdk;
//
//     public void Awake()
//     {
//         ssdk = gameObject.GetComponent<ShareSDK>();
//         mobsdk = gameObject.GetComponent<MobSDK>();
//     }
//
//     public void Share()
//     {
//         ShareContent content = new ShareContent();
//         content.SetText("this is a test string.");
//         content.SetImageUrl("https://f1.webshare.mob.com/code/demo/img/1.jpg");
//         content.SetTitle("test title");
//         content.SetTitleUrl("http://www.mob.com");
//         content.SetSite("Mob-ShareSDK");
//         content.SetSiteUrl("http://www.mob.com");
//         content.SetUrl("http://www.mob.com");
//         content.SetComment("test description");
//         content.SetMusicUrl("http://mp3.mwap8.com/destdir/Music/2009/20090601/ZuiXuanMinZuFeng20090601119.mp3");
//         content.SetShareType(ContentType.Webpage);
//
//         ssdk.shareHandler = ShareResultHandler;
//         ssdk.authHandler = AuthResultHandler;
//         ssdk.showUserHandler = GetUserInfoResultHandler;
//         //通过分享菜单分享
//         PlatformType[] aa = new PlatformType[] { PlatformType.SinaWeibo };
//         ssdk.ShowPlatformList(aa, content, 100, 100);
//         ////直接通过编辑界面分享
//         //ssdk.ShowShareContentEditor(PlatformType.SinaWeibo, content);
//         ////直接分享
//         //ssdk.ShareContent(PlatformType.SinaWeibo, content);
//
//         ssdk.Authorize(PlatformType.SinaWeibo);
//         ssdk.GetUserInfo(PlatformType.SinaWeibo);
//     }
//
//     //以下为回调的定义:
//     void ShareResultHandler(int reqID, ResponseState state, PlatformType type, Hashtable result)
//     {
//         if (state == ResponseState.Success)
//         {
//             Debug.Log("share result :");
//             Debug.Log(MiniJSON.jsonEncode(result));
//         }
//         else if (state == ResponseState.Fail)
//         {
//             Debug.Log("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
//         }
//         else if (state == ResponseState.Cancel)
//         {
//             Debug.Log("cancel !");
//         }
//     }
//
//     //以下为回调的定义:
//     void AuthResultHandler(int reqID, ResponseState state, PlatformType type, Hashtable result)
//         {
//             if (state == ResponseState.Success)
//             {
//             Debug.Log("authorize success !");
//             }
//             else if (state == ResponseState.Fail)
//             {
//             Debug.Log("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
//             }
//             else if (state == ResponseState.Cancel)
//             {
//             Debug.Log("cancel !");
//             }
//         }
//
//     //以下为回调的定义:
//     void GetUserInfoResultHandler(int reqID, ResponseState state, PlatformType type, Hashtable result)
//     {
//         if (state == ResponseState.Success)
//         {
//             Debug.Log("get user info result :");
//             Debug.Log(MiniJSON.jsonEncode(result));
//         }
//         else if (state == ResponseState.Fail)
//         {
//             Debug.Log("fail! throwable stack = " + result["stack"] + "; error msg = " + result["msg"]);
//         }
//         else if (state == ResponseState.Cancel)
//         {
//             Debug.Log("cancel !");
//         }
//     }
// }
