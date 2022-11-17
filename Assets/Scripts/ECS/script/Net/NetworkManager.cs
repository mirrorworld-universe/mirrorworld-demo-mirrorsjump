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
    
    
    
    // RankList
    public void GetHistoryRank(string user_id,int limit)
    {
       
        string path = GlobalDef.server + "api/v1/user/ranking/alltime";
        RankListReq req = new RankListReq();
        req.user_id = user_id;
        req.limit = limit;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            var res = JsonMapper.ToObject<RankListResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnRankListResponse?.Invoke(res);
            
        }));

    }
    
    public void GetDailyRank(string user_id,int limit)
    {
       
        string path = GlobalDef.server + "api/v1/user/ranking/daily";
        RankListReq req = new RankListReq();
        req.user_id = user_id;
        req.limit = limit;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            
            var res = JsonMapper.ToObject<RankListResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnRankListResponse?.Invoke(res);
            
        }));

    }
    
    public void GetWeeklyRank(string user_id,int limit)
    {
       
        string path = GlobalDef.server + "api/v1/user/ranking/weekly";
        RankListReq req = new RankListReq();
        req.user_id = user_id;
        req.limit = limit;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            var res = JsonMapper.ToObject<RankListResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnRankListResponse?.Invoke(res);
            
        }));

    }
    
    public void UpdateUserName(string user_id,string userName)
    {
       
        string path = GlobalDef.server + "api/v1/user/username";
        UpdateUserNameReq req = new UpdateUserNameReq();
        req.user_id = user_id;
        req.username = userName;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            var res = JsonMapper.ToObject<UpdateUserNameResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnUpdateUserName?.Invoke(res);
            
        }));

    }


    public void GetPropInfo(string user_id)
    {
        //api/v1/user/prop?user_id=xxx
        string path = GlobalDef.server + "api/v1/user/prop?user_id=" + user_id;
        StartCoroutine(Get(path, "", (result, json) =>
        {

            var res = JsonMapper.ToObject<PropResponse>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserBasicInfoReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnPropResponse?.Invoke(res);
            
        }));

    }
    
    
    public void UpdateProp(string user_id,string propName ,int count)
    {
       
        string path = GlobalDef.server + "api/v1/user/prop/update_info";
        UpdatePropReq req = new UpdatePropReq();
        req.user_id = user_id;
        req.prop_name = propName;
        req.count = count;
        
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            var res = JsonMapper.ToObject<PropResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("SendUserScoreReq error " + res.status);
                return;
            }
            
            EventDispatcher.Instance.OnUpdatePropResponse?.Invoke(res);
            
        }));

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







public class Nft
{
    /// <summary>
    /// 
    /// </summary>
    public int token_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string rarity { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string type { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string image { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public bool is_default { get; set; }
}
 
public class User_info
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string userame { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int score { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string time { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public Nft nft { get; set; }
}
 

 
public class RankingItem
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string user_name { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int score { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string time { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public Nft nft { get; set; }
}
 
public class RankListData
{
    /// <summary>
    /// 
    /// </summary>
    public User_info user_info { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public List <RankingItem > ranking { get; set; }
}
 
public class RankListResponse
{
    /// <summary>
    /// 
    /// </summary>
    public string status { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public RankListData data { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int code { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string message { get; set; }
    
    public string trace { get; set; }
    
    
}

public class RankListReq
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int limit { get; set; }
}


public class UpdateUserNameReq
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string username { get; set; }
}


public class UpdateUserNameData
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string username { get; set; }
}
 
public class UpdateUserNameResponse
{
    /// <summary>
    /// 
    /// </summary>
    public string status { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public UpdateUserNameData data { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int code { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string message { get; set; }
}




// props

public class Props
{
    /// <summary>
    /// 
    /// </summary>
    public int high_rocket { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int low_rocket { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int spring { get; set; }
}
 
public class PropData
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public Props props { get; set; }
}
 
public class PropResponse
{
    /// <summary>
    /// 
    /// </summary>
    public string status { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public PropData data { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int code { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string message { get; set; }
}




public class UpdatePropReq
{
    /// <summary>
    /// 
    /// </summary>
    public string user_id { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string prop_name { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int count { get; set; }
}

