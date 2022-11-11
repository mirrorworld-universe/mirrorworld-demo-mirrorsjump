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

    public static bool IsInitGoogleAdMob = false;
    

    // 非生产环境
   // public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
    // 生产环境
  //  public static string server = "https://mirror-jump.mirrorworld.fun/";
    
    public static string version = "22102713"; 
    
    public static string GetCurrentVersion()
    {
        return $"{Application.version}.{version}";
    }

    public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
    // 生产环境
   // public static string server = "https://mirror-jump.mirrorworld.fun";

}

public struct AirDropPostData
{
    public string jsonrpc;
    public string id;
    public string method;
    public List<string> param;
}