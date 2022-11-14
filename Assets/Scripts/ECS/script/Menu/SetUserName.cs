
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class SetUserName : MonoBehaviour
{
     public Button Confirm;

     public GameObject BorderNormal;

     public GameObject BorderRed;

     public GameObject Tips;

     public TMP_InputField UserName;
     
     
     
     

     private void Start()
     {
          Tips.SetActive(false);
          BorderRed.SetActive(false);
          BorderNormal.SetActive(true);
          Confirm.interactable = false;
          UserName.text = "";
          
     }


     private void Update()
     {
          if (UserName.text.Length > 10)
          {
               string str1=UserName.text.Substring(0,10);
               UserName.text = str1;
               
          }else if (UserName.text.Length == 10)
          {
               BorderNormal.SetActive(false);
               BorderRed.SetActive(true);
               Tips.SetActive(true);
          }
          else
          {
               BorderNormal.SetActive(true);
               BorderRed.SetActive(false);
               Tips.SetActive(false);
          }
     }


     public void CloseConfirmDialog()
     {
          gameObject.SetActive(false);
     }
     
     public void OnCancelSetName()
     {
          CloseConfirmDialog();
     }


     public void OnConfirmSetName()
     {
          GlobalDef.UserName = UserName.text;
          CloseConfirmDialog();
     }
     
     
     
}
