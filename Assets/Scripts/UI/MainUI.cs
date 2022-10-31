using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainUI : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnButtonClicked()
    {
        var btnName = UnityEngine.EventSystems.EventSystem.current.currentSelectedGameObject.name;
        if(btnName == "BtnEnterGame")
        {
            GameWorld.Instance.GetGameFlow().gameFlowEnum = GameFlowEnum.IDLE;
            SceneManager.LoadScene("InGame");
        }
    }
}
