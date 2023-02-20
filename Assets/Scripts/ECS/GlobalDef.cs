
using System.Collections.Generic;
using MirrorworldSDK;
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

    public static bool IsUseRespawn = false;

    
    //  正式环境下取消 TokenGuidence
    public static  bool HasTokenGuidence = false;


    
    public static string GetCurrentVersion()
    {
        if (IsIOSEnv)
        {
            return iOSVersion + "." + universalVersion;
        }
        return $"{Application.version}.{universalVersion}";
    }


    public static int ReviewVersionCode = 1;

    public static bool IsShowPackage;

    //Main!!!
    // Global  Parent Collection  &  Action House
    //MainNet
    public static string marketAuctionHouse = "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C";
    //MainetCollection
    public static string ParentCollectionMainNet = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw";
    //DevnetCollection
    public static string ParentCollectionDevNet = "DUuMbpmH3oiREntViXfGZhrLMbVcYBwGeBa4Wn9X8QfM";
    public static string UserCollection = ParentCollectionMainNet;
    public static bool IsMainNet = true;
    // market 路径标识枚举
    public static MirrorEnv Env = MirrorEnv.ProductionMainnet;
    //出了这个还有MirrorSDK的手动指定环境，Unity面板上的环境和APIKey
    // 生产环境
    public static string server = "https://mirror-jump.mirrorworld.fun/";
    // 是否为 IOS 环境
    public static bool IsGoogleEnv = false;
    public static bool IsIOSEnv = true;
    public static string iOSVersion = "1.2.3.2";
    public static string universalVersion = "02201154";



    ////Dev!!!
    //// Global Parent Collection  &  Action House
    ////DevNet
    //public static string marketAuctionHouse = "AiEqGqMDMa7G6sDF484pqfgsxRGuCcjgxv43MxoiVCsz";
    ////MainNet
    ////public static string marketAuctionHouse = "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C";
    ////MainetCollection
    //public static string ParentCollectionMainNet = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw";
    ////DevnetCollection
    //public static string ParentCollectionDevNet = "DUuMbpmH3oiREntViXfGZhrLMbVcYBwGeBa4Wn9X8QfM";
    //public static bool IsMainNet = false;
    ////market 路径标识枚举
    //public static MirrorEnv Env = MirrorEnv.StagingDevNet;
    //public static string UserCollection = ParentCollectionDevNet;
    ////除了这个还有MirrorSDK的手动指定环境，Unity面板上的环境和APIKey
    //// 非生产环境
    ////public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
}

public struct AirDropPostData
{
    public string jsonrpc;
    public string id;
    public string method;
    public List<string> param;
}