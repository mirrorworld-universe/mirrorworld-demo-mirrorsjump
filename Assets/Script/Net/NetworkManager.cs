﻿using LitJson;
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
    //private float retryTime = 6.0f;

    public void DoAfterTime(float time,Action action)
    {
        StartCoroutine(DelayMethod(time,action));
    }

    IEnumerator DelayMethod(float time, Action action)
    {
        yield return new WaitForSeconds(time);

        action();
    }


    private RetryObj reqBaseInfoObj;
    public void SendUserBasicInfoReq(string user_id)
    {
        Debug.Log("开始获取基础属性...");
        if (reqBaseInfoObj != null)
        {
            if (reqBaseInfoObj.dialog != null)
            {
                Destroy(reqBaseInfoObj.dialog);
            }
        }
        reqBaseInfoObj = new RetryObj();
        reqBaseInfoObj.reqTimes = 0;
        reqBaseInfoObj.success = false;
        AutoReqBasicInfo(user_id, reqBaseInfoObj);
    }

    private void AutoReqBasicInfo(string user_id,RetryObj retryObj)
    {
        DoReqBasicInfo(user_id,retryObj);
        DoAfterTime(6, () => {
            if (!retryObj.success)
            {
                if (retryObj.reqTimes < 3)
                {
                    if (retryObj.dialog != null)
                    {
                        retryObj.dialog.ShowWaiting(true, "Network retrying...(" + retryObj.reqTimes + " times)");
                    }
                    else
                    {
                        retryObj.dialog = NewDialog();
                        retryObj.dialog.Init(() =>
                        {
                            Destroy(retryObj.dialog.gameObject);
                            SendUserBasicInfoReq(user_id);
                        });
                        retryObj.dialog.ShowWaiting(true, "Network retrying...(" + retryObj.reqTimes + " times)");
                    }
                    DoReqBasicInfo(user_id, retryObj);
                }
                else
                {
                    retryObj.dialog.ShowWaiting(false, "");
                }
            }
            else
            {
                if (retryObj.dialog != null)
                {
                    Destroy(retryObj.dialog.gameObject);
                }
                else
                {
                    LogUtils.LogFlow("Get base info success, let logic continue.");
                }
            }
        });
    }

    private void DoReqBasicInfo(string user_id,RetryObj retryObj)
    {
        retryObj.reqTimes++;
        string path = GlobalDef.server + "api/v1/user?user_id=" + user_id;
        StartCoroutine(Get(path, "", (result, json) =>
        {
            var res = JsonMapper.ToObject<UserBasicInfoRes>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserBasicInfoReq error " + res.status);
                return;
            }

            retryObj.success = true;
            Debug.Log("连接游戏服务器成功！");
            Debug.Log(json);
            EventDispatcher.Instance.userInfoDataReceived?.Invoke(res.data);
        },
        ()=> {
            LogUtils.LogFlow("No network!");
        }));
    }

    public void SendUserScoreReq(UserScoreUpdateReq req)
    {
        Debug.Log("发送游戏得分...");
        string path = GlobalDef.server + "api/v1/user/score";
        var data = JsonMapper.ToJson(req);
        Debug.Log("req.tokenid"+req.token_id);
        
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

    private IEnumerator Get(string url, string messageBody, Action<Result, string> callBack, Action failedAction)
    {
        UnityWebRequest request = UnityWebRequest.Get(url);

        EncrypoUtils.DecorateWithMD5(request, PlayerPrefs.GetString("walletAddress"));

        if (!string.IsNullOrEmpty(messageBody))
        {
            byte[] rawRequestBodyToSend = new System.Text.UTF8Encoding().GetBytes(messageBody);
            request.uploadHandler = new UploadHandlerRaw(rawRequestBodyToSend);
            request.downloadHandler = new DownloadHandlerBuffer();
        }
        request.timeout = 5000;

        yield return request.SendWebRequest();

        if(request == null)
        {
            failedAction();
        }
        else
        {
            string rawResponseBody = request.downloadHandler.text;
            if (string.IsNullOrEmpty(rawResponseBody))
            {
                failedAction();
            }
            else
            {
                callBack(request.result, rawResponseBody);
            }

        }
        request.Dispose();
    }

    private IEnumerator Post(string url, string messageBody, Action<Result, string> callBack)
    {
        UnityWebRequest request = new UnityWebRequest(url, "POST");
        request.SetRequestHeader("Content-Type", "application/json");
        
      
        EncrypoUtils.DecorateWithMD5( request, PlayerPrefs.GetString("walletAddress"));

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


    private RetryObj reqPropInfoObj;
    public void GetPropInfo(string user_id)
    {
        Debug.Log("开始获取人物属性...");
        if (reqPropInfoObj != null)
        {
            if(reqPropInfoObj.dialog != null)
            {
                Destroy(reqPropInfoObj.dialog.gameObject);
            }
        }
        reqPropInfoObj = new RetryObj();
        reqPropInfoObj.reqTimes = 0;
        reqPropInfoObj.success = false;
        AutoGetPropInfo(user_id, reqPropInfoObj);
    }

    private void AutoGetPropInfo(string user_id, RetryObj retryObj)
    {
        Debug.Log("尝试获取人物属性...");
        DoGetPropInfo(user_id,()=> {
            if(retryObj.dialog != null)
            {
                GameObject.Destroy(retryObj.dialog.gameObject);
            }
        },
        ()=> {
            LogUtils.LogFlow("Get prop info failed, waiting for next retry.");
        }, retryObj);
        DoAfterTime(6, () => {
            if (!retryObj.success)
            {
                if(retryObj.reqTimes < 3)
                {
                    string waitingText = "Network retrying...(" + (retryObj.reqTimes) + " times)";
                    if (retryObj.dialog != null)
                    {
                        retryObj.dialog.ShowWaiting(true, waitingText);
                    }
                    else
                    {
                        retryObj.dialog = NewDialog();
                        retryObj.dialog.Init(() => {
                            GetPropInfo(user_id);
                            Destroy(retryObj.dialog.gameObject);
                        });
                        retryObj.dialog.ShowWaiting(true, waitingText);
                    }
                    AutoGetPropInfo(user_id, retryObj);
                }
                else
                {
                    retryObj.dialog.ShowWaiting(false, "");
                }
            }
            else
            {
                if (retryObj.dialog != null)
                {
                    GameObject.Destroy(retryObj.dialog.gameObject);
                }
                else
                {
                    //let the logic continue
                }
            }
        });
    }

    private void DoGetPropInfo(string user_id, Action successAction, Action failedAction, RetryObj retryObj)
    {
        retryObj.reqTimes++;
        //api/v1/user/prop?user_id=xxx
        Debug.Log("DoGetPropInfo user_id:" + user_id);
        string path = GlobalDef.server + "api/v1/user/prop?user_id=" + user_id;
        StartCoroutine(Get(path, "", (result, json) =>
        {
            Debug.Log("DoGetPropInfo result:"+json);
            PropResponse res = JsonMapper.ToObject<PropResponse>(json);

            if (res.status != "success")
            {
                Debug.Log("SendUserBasicInfoReq error " + res.status);
                return;
            }
            retryObj.success = true;
            EventDispatcher.Instance.OnPropResponse?.Invoke(res);
            successAction();
        }, failedAction));
    }
    
    
    public void UpdateProp(string user_id,int deltaHightRocket,int deltaLowRocket,int deltaSpring)
    {
        string path = GlobalDef.server + "api/v1/user/prop/update_info";
        UpdatePropReq req = new UpdatePropReq();
        req.props = new Props();
        req.user_id = user_id;
        req.props.high_rocket = deltaHightRocket;
        req.props.low_rocket = deltaLowRocket;
        req.props.spring = deltaSpring;
        StartCoroutine(Post(path, JsonMapper.ToJson(req), (result, json) =>
        {
            var res = JsonMapper.ToObject<PropResponse>(json);
            if (res.status != "success")
            {
                Debug.Log("UpdatePropResponseStatus " + res.status);
                Debug.Log("UpdatePropResponseMessage " + res.message);
                return;
            }
            
            EventDispatcher.Instance.OnUpdatePropResponse?.Invoke(res);
        }));
    }

    private LoadingDialog NewDialog()
    {
        GameObject canvas = GameObject.Find("Canvas");
        GameObject prefab = Resources.Load<GameObject>("Prefab/LoadingDialog");
        GameObject dialogGO = GameObject.Instantiate(prefab, canvas.transform);
        return dialogGO.GetComponent<LoadingDialog>();
    }
}

public class RetryObj
{
    public bool success = false;
    public int reqTimes = 0;
    public LoadingDialog dialog = null;
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
    public int token_id;
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
    public string username { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public int score { get; set; }
    /// <summary>
    /// 
    /// </summary>
    public string time { get; set; }
    
    public string rank { get; set; }
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
    public string username { get; set; }
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
    public CountDown count_down { get; set; }
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
    
    public Props props { get; set; }
}




public class CountDown
{
    public int day { get; set; }
    
    public int hour{ get; set; }
    
    public int minute { get; set; }
    
}


