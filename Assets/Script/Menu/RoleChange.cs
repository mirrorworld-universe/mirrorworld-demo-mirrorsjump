
using System;
using UnityEngine;
using UnityEngine.UI;


public class RoleChange : MonoBehaviour
{

   

    public RolePersistence RolePersistence;


    private void Start()
    {
        LoadRoleAsset();

        EventDispatcher.Instance.roleChanged += OnRoleChanged;
    }

    private void LoadRoleAsset()
    {

        if (null == PlayerPrefs.GetString("CurrentRole") || null == PlayerPrefs.GetString("CurrentRarity"))
        {
            transform.gameObject.GetComponent<Image>().sprite = RolePersistence.GetDefaultRoleJump();
        }
        else
        {
            transform.gameObject.GetComponent<Image>().sprite =
                RolePersistence.GetRoleImageJump(PlayerPrefs.GetString("CurrentRole"),
                    PlayerPrefs.GetString("CurrentRarity"));
        }
    }

    private void OnDestroy()
    {
        EventDispatcher.Instance.roleChanged -= OnRoleChanged;
    }

    private void OnRoleChanged()
    {
        LoadRoleAsset();
    }

    public void OnRoleChange(string roleName,string roleRarity)
    {
        if (roleName == PlayerPrefs.GetString("CurrentRole") && roleRarity == PlayerPrefs.GetString("CurrentRarity"))
        {
            PlayerPrefs.SetString("CurrentRole","Rare");
            PlayerPrefs.SetString("CurrentRarity","Astronaut");
            transform.gameObject.GetComponent<Image>().sprite = RolePersistence.GetDefaultRoleJump();
        }
        
    }

   
   
}
