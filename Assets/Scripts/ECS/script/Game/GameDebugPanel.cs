using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameDebugPanel : MonoBehaviour
{
    private bool IsRoleRush = false;


    public GameMenu GameMenu;
    
    

    public void RoleRush()
    {
        if (IsRoleRush)
        {
            IsRoleRush = false;
        }
        else
        {
            IsRoleRush = true;
        }
    }


    public void RoleRespawn()
    {
        GameMenu.GameRespawn();
    }


    public bool GetRushState()
    {
        return IsRoleRush;
    }

    
}
