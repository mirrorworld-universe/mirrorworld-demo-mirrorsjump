using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoleMoveSystem : UpdateSystem
{
    public override void OnSystemUpdate(List<Entity> entities)
    {
        InputComponent inputComponent = GameWorld.Instance.GetInputComponent();

        if(inputComponent.h != 0)
        {
            Debug.Log("move:h" + inputComponent.h + " v:" + inputComponent.v);
        }
    }
}
