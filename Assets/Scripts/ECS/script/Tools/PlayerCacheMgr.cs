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
        UserResponse user = MirrorSDK.GetWallet();
        string walletAddress = user.wallet.sol_address;
        Debug.Log("MirrorSDK TransferSol finished, wallet is:" + walletAddress);
        PlayerPrefs.SetString("HasTransferSol" + walletAddress, "true");
    }

    public static void ClearTransferSOLResult()
    {
        UserResponse user = MirrorSDK.GetWallet();
        string walletAddress = user.wallet.sol_address;
        Debug.Log("MirrorSDK TransferSol finished, wallet is:" + walletAddress);
        PlayerPrefs.SetString("HasTransferSol" + walletAddress, "false");
    }
}
