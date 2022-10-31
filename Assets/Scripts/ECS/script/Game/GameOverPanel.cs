using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class GameOverPanel : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI titleText;
    [SerializeField] private TextMeshProUGUI scoreText;
    [SerializeField] private TextMeshProUGUI maxScoreText;
    [SerializeField] private Color victoryColor;
    [SerializeField] private Color failedColor;
    // [SerializeField] private GameObject shareTip;
    // [SerializeField] private GameObject shareDot;
    [SerializeField] private GameObject newScoreEffect;
    [SerializeField] private GameObject unlockSceneBg;
    [SerializeField] private GameObject unlockSceneContent;
    [SerializeField] private Sprite[] sceneImgList;
    [SerializeField] private Image unlockSceneSr;
    private bool isNewRecord;

    public void RefreshData()
    {
        var height = FindObjectOfType<GameController>().GetMaxHeight();

        scoreText.text = Mathf.Floor(height).ToString();

        string max = PlayerPrefs.GetString(GlobalDef.maxScore, "0");
        long maxScore = (long)float.Parse(max);

        if (Mathf.Floor(height) >= maxScore)
        {
            SetNewScore(true);
            SoundManager.Instance.PlaySound(SoundName.Victory);
            scoreText.color = victoryColor;
            maxScore = (long)height;
            isNewRecord = true;
        }
        else
        {
            SetNewScore(false);
            scoreText.color = failedColor;
            SoundManager.Instance.PlaySound(SoundName.Failed);
            isNewRecord = false;
        }

        maxScoreText.text = maxScore.ToString();
    }

    public void SetNewScore(bool newScore)
    {
        if (newScore)
        {
            titleText.text = "CONGRATULATION";
            titleText.fontSize = 82;
           // shareTip.SetActive(true);
            //shareDot.SetActive(true);
            newScoreEffect.SetActive(true);
        }
        else
        {
            titleText.text = "GAME OVER";
            titleText.fontSize = 110;
            // shareTip.SetActive(false);
            // shareDot.SetActive(false);
            newScoreEffect.SetActive(false);
        }
    }

    public void Share()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        if (isNewRecord)
        {
           // shareDot.SetActive(false);
            // 保存状态，记录下次初始时从非零开始
            PlayerPrefs.SetInt(GlobalDef.hasInitPosY, 1);
        }
    }

    // lockIndex为0时未解锁
    public void UnlockNewScene(int lockIndex)
    {
        if(lockIndex == 0)
        {
            unlockSceneBg.SetActive(false);
            unlockSceneContent.SetActive(false);
            return;
        }

        unlockSceneBg.SetActive(true);
        unlockSceneContent.SetActive(true);
        // 设置主题图片
        unlockSceneSr.sprite = sceneImgList[lockIndex];

        // 设置解锁状态
        PlayerPrefs.SetInt(Constant.Theme_Pre + lockIndex, 1);
    }
}
