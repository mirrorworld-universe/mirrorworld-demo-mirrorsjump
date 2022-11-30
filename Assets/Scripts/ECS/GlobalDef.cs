using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum SoundName
{
    None,
    Pickup,
    Button,
    Pop,
    SpringProp,
    Jump,
    Rocket,
    SpringBoard,
    OpenUrl,
    Broken,
    Close,
    AudioSwitch,
    Dead,
    Victory,
    Failed,
    BlackHole,
    BeforeDisappear,
    TurnPage,
    Balance
}

public class GlobalDef 
{
    public static string isMute = "isMute";
    public static int heightCoefficient = 4;
    // 当得分为最高分并且进行了分享
    public static string hasInitPosY = "HasInitPosY";   
    public static string maxScore = "MaxScore";

    public static long CurrentScore = 0;

    public static bool IsInitGoogleAdMob = false;

    public static bool HasPlayerRewardAd = false;

    public static bool CanUserGoogleAdMob = false;

    public static string RankUserID;

    public static int TokenID = 0;


    // temb reward prop conut
    public static int HighRocketCount =1;

    public static int LowRocketCount = 2;

    public static int SpringCount =1;


    public static string UserName = "Default Name";


    public static bool HasTokenGuidence= false;
    
    
    
    

    // 非生产环境
  // public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
    // 生产环境
    public static string server = "https://mirror-jump.mirrorworld.fun/";
    
    public static string version = "22112119"; 
    
    public static string GetCurrentVersion()
    {
        return $"{Application.version}.{version}";
    }
    
  //  public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
  

}

public struct AirDropPostData
{
    public string jsonrpc;
    public string id;
    public string method;
    public List<string> param;
}