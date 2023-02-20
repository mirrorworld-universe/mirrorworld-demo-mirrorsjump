using UnityEngine;
using System.Collections;
using MirrorworldSDK.Models;

public class PlayerCacheMgr
{
    public static void ClearAllCache()
    {
        //clear transfer sol result
        ClearTransferSOLResult();
        //clear Mint apiCallLimit
        StopMinting();
    }

    public static void StartMinting()
    {
        ApiCallLimit.SetMintApiLimit(Constant.ExecuteMint);
    }

    public static void StopMinting()
    {
        ApiCallLimit.SetMintApiLimit(Constant.StopMint);
    }

    public static void TransferSOLSuccess()
    {
        string walletAddress = MirrorSDK.GetWallet();
        Debug.Log("MirrorSDK TransferSol finished, wallet is:" + walletAddress);
        PlayerPrefs.SetString("HasTransferSol" + walletAddress, "true");
    }

    public static void ClearTransferSOLResult()
    {
        string walletAddress = MirrorSDK.GetWallet();
        Debug.Log("MirrorSDK TransferSol finished, wallet is:" + walletAddress);
        PlayerPrefs.SetString("HasTransferSol" + walletAddress, "false");
    }

    public static void FinishGuild()
    {
        Debug.Log("Guild:FinishGuild"+ MirrorSDK.GetWallet());
        PlayerPrefs.SetString("HasGuidence" + MirrorSDK.GetWallet(), "true");
    }

    public static bool GuildNotFinish()
    {
        bool notFinish = "false" == PlayerPrefs.GetString("HasGuidence" + MirrorSDK.GetWallet(), "false");
        Debug.Log("Guild:Check GuildNotFinish" + MirrorSDK.GetWallet() + " result:"+ notFinish);
        return notFinish;
    }
}
