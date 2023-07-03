using UnityEngine;
using System.Collections;
using MirrorworldSDK.Models;
using System;

public class PlayerCacheMgr
{
    public static string WalletAddress;

    public static string GetMintID()
    {
        DateTime today = DateTime.Today;

        // 获取Unix时间戳
        long unixTime = new DateTimeOffset(today).ToUnixTimeSeconds();

        int mintID = PlayerPrefs.GetInt("mint_id");
        if(mintID == 0)
        {
            mintID = 1;
        }
        else
        {
            mintID++;
        }
        PlayerPrefs.SetInt("mint_id", mintID);

        string newMintID = WalletAddress + "_" + (unixTime + mintID);
        Debug.Log("newMintID: " + newMintID);
        return newMintID;
    }

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
