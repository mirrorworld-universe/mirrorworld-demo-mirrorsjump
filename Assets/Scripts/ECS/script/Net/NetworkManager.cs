using LitJson;
using MirrorworldSDK;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using static UnityEngine.Networking.UnityWebRequest;

public class NetworkManager : MonoSingleton<NetworkManager>
{
    public void SendUserBasicInfoReq(string user_id)
    {
        Debug.Log("开始连接游戏服务器...");
        string path = GlobalDef.server + "api/v1/user?user_id=" + user_id;
        StartCoroutine(Get(path, "", (result, json) =>
        {

            var res = JsonMapper.ToObject<UserBasicInfoRes>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserBasicInfoReq error " + res.status);
                return;
            }

            Debug.Log("连接游戏服务器成功！");
            Debug.Log(json);
            EventDispatcher.Instance.userInfoDataReceived?.Invoke(res.data);
        }));

    }

    public void SendUserScoreReq(UserScoreUpdateReq req)
    {
        Debug.Log("发送游戏得分...");
        string path = GlobalDef.server + "api/v1/user/score";
        var data = JsonMapper.ToJson(req);
        StartCoroutine(Post(path, data, (result, json) =>
        {
            var res = JsonMapper.ToObject<UserScoreUpdateRes>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }

            Debug.Log("收到游戏得分...");
            Debug.Log(json);
            EventDispatcher.Instance.userScoreReceived?.Invoke(res.data);
        }));

    }

    public void UpdateMintStatusReq(UpdateMintStatusReq req)
    {
        Debug.Log("向服务器发送mint请求...");
        string path = GlobalDef.server + "api/v1/nft/mint_status";
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {

            var res = JsonMapper.ToObject<UpdateMintStatusRes>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }

            Debug.Log("服务器mint返回mint结果...");
            Debug.Log(json);
            EventDispatcher.Instance.updateMintReceived?.Invoke(res.data);
        }));

    }

    public void UpdateAirdropSolReq(string user_id)
    {
        Debug.Log("向服务器发送空投成功请求...");
        string path = GlobalDef.server + "api/v1/user/airdrop_status";
        UpdateAirdropSolReq req = new UpdateAirdropSolReq();
        req.user_id = user_id;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {

            var res = JsonMapper.ToObject<UpdateAirdropSolRes>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }

            Debug.Log("更新空投返回结果...");
            Debug.Log(json);
            EventDispatcher.Instance.updateAirdopReceived?.Invoke(res.data);
        }));

    }

    private IEnumerator Get(string url, string messageBody, Action<Result, string> callBack)
    {
        UnityWebRequest request = UnityWebRequest.Get(url);
        if (!string.IsNullOrEmpty(messageBody))
        {
            byte[] rawRequestBodyToSend = new System.Text.UTF8Encoding().GetBytes(messageBody);
            request.uploadHandler = new UploadHandlerRaw(rawRequestBodyToSend);
            request.downloadHandler = new DownloadHandlerBuffer();
        }
        request.timeout = 5000;

        bool isFailed = false;
        do
        {
            yield return request.SendWebRequest();

            if (request.result != Result.Success)
            {
                //isFailed = true;
                LoadingPanel.Instance.SetRetryPanelEnable();
                Debug.Log("Network error " + request.result);
            }
        } while (isFailed);

        string rawResponseBody = request.downloadHandler.text;
        callBack(request.result, rawResponseBody);
        request.Dispose();

    }

    private IEnumerator Post(string url, string messageBody, Action<Result, string> callBack)
    {
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        request.SetRequestHeader("Content-Type", "application/json");

        MirrorUtils.SetContentTypeHeader(request);
        MirrorUtils.SetAcceptHeader(request);

        if (!string.IsNullOrEmpty(messageBody))
        {
            byte[] rawRequestBodyToSend = new System.Text.UTF8Encoding().GetBytes(messageBody);
            request.uploadHandler = new UploadHandlerRaw(rawRequestBodyToSend);
            request.downloadHandler = new DownloadHandlerBuffer();
        }
        request.timeout = 5000;

        bool isFailed = false;
        do
        {
            yield return request.SendWebRequest();

            if (request.result != Result.Success)
            {
                //isFailed = true;
                Debug.Log("Network error " + request.result);
                yield break;
            }
        } while (isFailed);

        string rawResponseBody = request.downloadHandler.text;
        callBack(request.result, rawResponseBody);
        request.Dispose();
    }
}

// Get User Basic Info 返回数据
public class UserBasicInfoRes
{
    public string status;
    public UserInfoData data;
    public int code;
    public string message;
}

public class UserInfoData
{
    public string name;
    public List<UserInfoPackageData> packages;
    public List<UserInfoSceneData> scenes;
    public int highest_score;
    public bool airdrop_sol;
}

public class UserInfoPackageData
{
    public int token_id;
    public string rarity;
    public string type;
    public string token_url;
    public string image;
    public bool is_default;
}

public class UserInfoSceneData
{
    public string scene_name;
    public int scene_id;
}

// User score update 请求数据
public class UserScoreUpdateReq
{
    public string user_id;
    public long score;
    public int scene;
}
// User score update 返回数据
public class UserScoreUpdateRes
{
    public string status;
    public UserScoreUpdateData data;
    public int code;
    public string message;
}

public class UserScoreUpdateData
{
    public List<UserInfoSceneData> new_scenes;
    public int highest_score;
}

public class UpdateMintStatusReq
{
    public string user_id;
    public int token_id;
}

public class UpdateMintStatusRes
{
    public string status;
    public UpdateMintStateData data;
    public int code;
    public string message;
}

public class UpdateMintStateData
{
    public string user_id;
    public bool mint_statue;
}

public class UpdateAirdropSolReq
{
    public string user_id;
}

public class UpdateAirdropSolRes
{
    public string status;
    public UpdateAirdropSolData data;
    public int code;
    public string message;
}

public class UpdateAirdropSolData
{
    public string user_id;
    public bool airdrop_sol;
}