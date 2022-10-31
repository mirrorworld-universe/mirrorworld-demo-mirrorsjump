using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputSystem : UpdateSystem
{
    private float baseSpeed = 2;
    private float maxSpeed = 5;
    private float minSpeed = -5;
    private float offset = 0.2f;
    public override void OnSystemUpdate(List<Entity> entities)
    {
        InputComponent inputComponent = GameWorld.Instance.GetInputComponent();

        if(inputComponent == null)
        {
            return;
        }


        float h = 0;// Input.GetAxis("Horizontal");

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            h = -1;
        }
        else if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            h = 1;
        }

        if (h == 0)
        {
            inputComponent.h = 0;
        }
        else if (h > 0)
        {
            if (inputComponent.h > 0 && inputComponent.h < maxSpeed)
            {
                inputComponent.h += offset;
            }
            else
            {
                inputComponent.h = baseSpeed;
            }
        }
        else if (h < 0)
        {
            if (inputComponent.h > minSpeed && inputComponent.h < 0)
            {
                inputComponent.h -= offset;
            }
            else
            {
                inputComponent.h = baseSpeed;
            }
        }
        else
        {

        }
    }
}
