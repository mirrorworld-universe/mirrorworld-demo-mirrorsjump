using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class RankListViewItem : MonoBehaviour
{


    public TextMeshProUGUI Rank;
    public Image Header;
    public TextMeshProUGUI Name;
    public TextMeshProUGUI Address;
    public TextMeshProUGUI Score;
    public TextMeshProUGUI DateTime;

    public CanvasGroup CanvasGroup;


    public GameObject UserBg;

    public GameObject YouIcon;
    
    
    public void OnDataBind(RankListDataItem t,Sprite replace)
    {
        Rank.text = t.Rank;
        Name.text = t.Name;
        Address.text = t.Address;
        Score.text = t.Score;
        DateTime.text = t.DateTime;
        Header.sprite = replace;
        CanvasGroup.alpha = 0.6f;
        
        SetImage(t.ImageUrl);
        
        // according to wallet address
        IsPlayerRank(false);
      
    }


    private void IsPlayerRank(bool isYou)
    {
        if (isYou)
        {
            UserBg.SetActive(true);
            YouIcon.SetActive(true);
        }
        else
        {
            UserBg.SetActive(false);
            YouIcon.SetActive(false);
        }
    }
    
    
    
 
    
   
    
    private async void SetImage(string url)
    {  
        
        Sprite sprite = await ImageLoader.LoadSprite(url);
        if (null != sprite)
        {
            if (null != Header && transform.gameObject.activeSelf)
            {
               Header.sprite = sprite;
                CanvasGroup.alpha = 1;
            }
        }else
        {
            Header.sprite = null;
        }
        
    }

}
