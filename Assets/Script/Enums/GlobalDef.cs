
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
    //测试时，强行给自己的背包加一个可Mint的Item，但图片可能会在market无法显示
    public static bool AddMintableRoleToPackage = false;
    //测试时，强行使游戏变为iOS审核模式
    public static bool ForceIOSReview = false;

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

    public static string ReceiveWallet = "qS6JW1CKQgpwZU6jG5JpXL3Q4EDMoDD5DWacPEsNZoe";
    public static int ReviewVersionCode = 1;

    //iOS审核时，关闭所有背包
    public static bool IsShowPackage;

    ////Main!!!
    //// Global  Parent Collection  &  Action House
    ////MainNet
    //public static string marketAuctionHouse = "6gysn49dh2tfwbqvLqWpJNwisjkZCJoX3AyjuyFUn89C";
    ////MainetCollection
    //public static string ParentCollectionMainNet = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw";
    ////DevnetCollection
    //public static string ParentCollectionDevNet = "DUuMbpmH3oiREntViXfGZhrLMbVcYBwGeBa4Wn9X8QfM";
    //public static string UserCollection = ParentCollectionMainNet;
    //public static bool IsMainNet = true;
    //// market 路径标识枚举
    //public static MirrorEnv Env = MirrorEnv.ProductionMainnet;
    ////出了这个还有MirrorSDK的手动指定环境，Unity面板上的环境和APIKey
    //// 生产环境
    //public static string server = "https://mirror-jump.mirrorworld.fun/";
    //// 是否为 IOS 环境
    //public static bool IsGoogleEnv = false;
    //public static bool IsIOSEnv = false;
    //public static string iOSVersion = "1.2.3.2";
    //public static string universalVersion = "02201154";



    ////Staging Dev!!!
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
    //public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
    //// 是否为 IOS 环境
    //public static bool IsGoogleEnv = false;
    //public static bool IsIOSEnv = false;
    //public static string iOSVersion = "1.2.3.2";
    //public static string universalVersion = "02201154";


    //Production Dev
    //Market auction house
    public static string marketAuctionHouse = "EggpsxeiCoahWgk2KQ7CmSn7Txcb19dzGggpqEr4qErU";
    //MainetCollection
    public static string ParentCollectionMainNet = "7Vv68CarFpqn291aTeeUz65Uxk1tp8X7gfR8CDMZo2gw";
    //DevnetCollection
    public static string ParentCollectionDevNet = "6Gjohc4p7YBRig6w756CxXDz3uuFprN1mv4bZeZ3XF4S";//临时申请的Collection
    public static bool IsMainNet = false;
    //market 路径标识枚举
    public static MirrorEnv Env = MirrorEnv.Devnet;
    public static string UserCollection = ParentCollectionDevNet;
    //除了这个还有MirrorSDK的手动指定环境，Unity面板上的环境和APIKey
    // 非生产环境
    public static string server = "https://mirror-jump-staging.mirrorworld.fun/";
    // 是否为 IOS 环境
    public static bool IsGoogleEnv = false;
    public static bool IsIOSEnv = false;
    public static string iOSVersion = "1.2.3.2";
    public static string universalVersion = "07261455";

    public static string suiCollection = "0x8174698832d193cc63d381bd78be85b2745dff363cf54aa76abea4d672a52b49";
}

public struct AirDropPostData
{
    public string jsonrpc;
    public string id;
    public string method;
    public List<string> param;
}