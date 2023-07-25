using System.Collections;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class ReviewCheck : MonoBehaviour
{
    private void Start()
    {
        if (GlobalDef.IsIOSEnv)
        {
            CheckReviewVersion();
        }
        else
        {
            GlobalDef.IsShowPackage = true;
        }
    }

    private void CheckReviewVersion()
    {
        string url = "https://games.mirrorworld.fun/game/mirror_jump/IOSReview/ReviewVersion.json";
        StartCoroutine(Get(url));
    }

    private IEnumerator Get(string path)
    {
#if UNITY_IPHONE || UNITY_STANDALONE_OSX
           yield return new WaitForSeconds(0.8f);
#endif
        using (UnityWebRequest request = UnityWebRequest.Get(path))
        {
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.Success)
            {
                ReviewData data = JsonConvert.DeserializeObject<ReviewData>(request.downloadHandler.text);
                Debug.Log("ReviewResult:" + request.downloadHandler.text);
                if (data.IsReview)
                {
                    // 审核期
                    if (GlobalDef.ReviewVersionCode < data.ReviewVersionCode)
                    {
                        // 已经通过审核的版本    
                        GlobalDef.IsShowPackage = true && !GlobalDef.ForceIOSReview;
                    }
                    else
                    {
                        // 限制版本
                        GlobalDef.IsShowPackage = false;
                    }
                }
                else
                {
                    // 非审核期无限制
                    GlobalDef.IsShowPackage = true && !GlobalDef.ForceIOSReview;
                }
            }
            else
            {
                LogUtils.LogWarn("Download version file failed:" + path);
                GlobalDef.IsShowPackage = false;
            }
        }
    }

    public struct ReviewData
    {
        public bool IsReview;
        public int ReviewVersionCode;

    }


}


