using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using MirrorworldSDK;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.SceneManagement;

public class TokenGuidance : MonoBehaviour
{


    public GameObject FirstStep;

    public GameObject SecondStep;

    public GameObject ThirdStep;

    public GameObject FinishGuidence;

    public GameObject Back;


    public Guidence Guidence;

    public TextMeshProUGUI airDropWaitText;

    public bool isAirDropping;

    private long time;
    private long timeLomp = 500;
    private string str = "Airdropping Now";
    private string[] strs = { ".", "..", "..." };
    private int i = 0;

    private void Start()
    {
        
        if (PlayerPrefs.GetString("IsTestEnvironment","true") == "false")
        {
        
            if ("false" == PlayerPrefs.GetString("HasGuidence", "false"))
            {
                Guidence.OnFirstStep();
            }
            return;
            
        }
        
       isAirDropping = false;
        
       
        if ("false" == PlayerPrefs.GetString("HasReceiveToken", "false"))
        {
           OnFirstStep();
        }
        else
        {
            if ("false" == PlayerPrefs.GetString("HasGuidence", "false"))
            {
                Guidence.OnFirstStep();
            }
        }
        
        
    }

    private void Update()
    {
        if (isAirDropping)
        {
            long now = GetTime();
            if (time < now)
            {
                string text_ = str + strs[i % 3];
                airDropWaitText.text = text_;
                time = now + timeLomp;
                ++i;
            }

        }
    }

    private long GetTime()
    {
        //精确到毫秒
        return new DateTimeOffset(DateTime.UtcNow).ToUnixTimeMilliseconds();
    }

    public void OnFirstStep()
    {
        Back.SetActive(true);
        FirstStep.SetActive(true);
    }



    public void OnSecondStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        FirstStep.SetActive(false);
        SecondStep.SetActive(true);
    }

    public void OnThirdStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        SecondStep.SetActive(false);
        ThirdStep.SetActive(true);
        AirDropNew();
        //OnFourthStep();
    }

    //IEnumerator AirDrop()
    //{
    //    isAirDropping = true;
    //    //yield return new WaitForSeconds(3);

    //    //OnFourthStep();
    //    //isAirDropping = false;
    //    //yield break;

    //    Debug.Log("Start air drop sol to:" + LoginState.WalletAddress);


    //    string url = "https://api.devnet.solana.com/";
    //    AirDropPostData data = new AirDropPostData();
    //    data.jsonrpc = "2.0";
    //    data.id = System.Guid.NewGuid().ToString();
    //    data.method = "requestAirdrop";
    //    data.param = new List<string>();
    //    data.param.Add(LoginState.WalletAddress);     // 地址
    //    data.param.Add("1000000000");

    //    string postData = JsonUtility.ToJson(data);
    //    //postData = postData.Replace("param", "params");
    //    postData = postData.Replace("\"1000000000\"", "1000000000");
    //    using (UnityWebRequest request = UnityWebRequest.Post(url, UnityWebRequest.kHttpVerbPOST))
    //    {
    //        request.SetRequestHeader("Content-Type", "application/json");
    //        request.SetRequestHeader("authority", "api.devnet.solana.com");
    //        byte[] postBytes = Encoding.UTF8.GetBytes(postData);
    //        request.uploadHandler = new UploadHandlerRaw(postBytes);
    //        request.downloadHandler = new DownloadHandlerBuffer();
    //        yield return request.SendWebRequest();

    //        request.Dispose();
    //        isAirDropping = false;
    //        if (request.result != UnityWebRequest.Result.ConnectionError)
    //        {
    //            //Debug.Log(response);
    //            // 空投成功
    //            //OnFourthStep();
    //            Debug.Log("air drop sol success");
    //            StartCoroutine(AirDropTestToken());
    //        }
    //        else
    //        {
    //            Debug.LogError($"发起网络请求失败： 确认过闸接口 -{request.error}");
    //        }
    //    }
    //}

    private void AirDropNew()
    {
        isAirDropping = true;
        
        Debug.Log("Start air drop sol to:" + LoginState.WalletAddress);


        string url = "https://api.devnet.solana.com/";
        AirDropPostData data = new AirDropPostData();
        data.jsonrpc = "2.0";
        data.id = Guid.NewGuid().ToString();
        data.method = "requestAirdrop";
        data.param = new List<string>();
        data.param.Add(LoginState.WalletAddress);     // 地址
        data.param.Add("1000000000");

        var rawRequestBody = JsonConvert.SerializeObject(data);
        rawRequestBody = rawRequestBody.Replace("param", "params");
        rawRequestBody = rawRequestBody.Replace("\"1000000000\"", "1000000000");
        StartCoroutine(Post(url, rawRequestBody, (rawResponse) => {
            Debug.Log("air drop result:"+ rawResponse.ToString());
            AriDropResult result = JsonUtility.FromJson<AriDropResult>(rawResponse);
            if(result.id != "" && result.id != null)
            {
                isAirDropping = false;
                NetworkManager.Instance.UpdateAirdropSolReq(LoginState.WalletAddress);
                PlayerPrefs.SetString("HasReceiveToken", "true");
                OnFourthStep();
                TAManager.Instance.RecieveToken(true);
            }
            else
            {
                Debug.LogError("发起网络请求失败");
                TAManager.Instance.RecieveToken(false);
            }
        }));
    }

    class AriDropResult
    {
        public string jsonrpc;
        public string result;
        public string id;
    }
    private IEnumerator Post(string url, string messageBody, Action<string> callBack)
    {
        UnityWebRequest request = new UnityWebRequest(url, "POST");

        request.SetRequestHeader("Content-Type", "application/json");
        request.SetRequestHeader("authority", "api.devnet.solana.com");

        MirrorUtils.SetContentTypeHeader(request);
        MirrorUtils.SetAcceptHeader(request);


        byte[] rawRequestBodyToSend = new System.Text.UTF8Encoding().GetBytes(messageBody);
        request.uploadHandler = new UploadHandlerRaw(rawRequestBodyToSend);
        request.downloadHandler = new DownloadHandlerBuffer();

        yield return request.SendWebRequest();

        string rawResponseBody = request.downloadHandler.text;

        request.Dispose();

        callBack(rawResponseBody);
    }

    public void OnFourthStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        ThirdStep.SetActive(false);
        FinishGuidence.SetActive(true);
    }


    public void OnFinishedGuidence()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        FinishGuidence.SetActive(false);
        Back.SetActive(false);

        if ("false" == PlayerPrefs.GetString("HasGuidence", "false"))
        {
            Guidence.OnFirstStep();
        }


    }


    public void OnLogin()
    {
        //before login

        //login success
        SceneManager.LoadScene("Menu");
    }


}
