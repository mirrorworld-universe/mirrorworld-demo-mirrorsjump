using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RankListUnit : MonoBehaviour
{


    public GameObject NormalItem;

    public GameObject FirstItem;

    public GameObject SecondItem;

    public GameObject ThirdItem;
    
    
    
    public void OnDataBind(RankListDataItem t,Sprite replace)
    {
         NormalItem.SetActive(false);
         FirstItem.SetActive(false);
         SecondItem.SetActive(false);
         ThirdItem.SetActive(false);

         if (t.Number == 1)
         {
             FirstItem.SetActive(true);
             FirstItem.GetComponent<RankListViewItem>().OnDataBind(t,replace);
             
         }else if (t.Number == 2)
         {
             SecondItem.SetActive(true);
             SecondItem.GetComponent<RankListViewItem>().OnDataBind(t,replace);
             
         }else if (t.Number == 3)
         {
             
             ThirdItem.SetActive(true);
             ThirdItem.GetComponent<RankListViewItem>().OnDataBind(t,replace);
         }
         else
         {
            NormalItem.SetActive(true);
            NormalItem.GetComponent<RankListViewItem>().OnDataBind(t,replace);
         }
         
    }
    
    
    
}
