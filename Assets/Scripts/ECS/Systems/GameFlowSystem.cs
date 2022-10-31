using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameFlowSystem : UpdateSystem
{
    public override void OnSystemUpdate(List<Entity> entities)
    {
        GameFlowComponent gameFlowComponent = GameWorld.Instance.GetGameFlow();

        if (gameFlowComponent == null)
        {
            return;
        }

        if(gameFlowComponent.gameFlowEnum == GameFlowEnum.NONE)
        {
            return;
        }

        if (gameFlowComponent.gameFlowEnum == GameFlowEnum.FINISHED)
        {
            Debug.Log("Game is finished");

            gameFlowComponent.gameFlowEnum = GameFlowEnum.NONE;

            return;
        }

        if (gameFlowComponent.gameFlowEnum == GameFlowEnum.IDLE)
        {
            Debug.Log("Game started");

            Entity newEntity = GameWorld.Instance.AddNewEntity();
            GenerateRoleCom generateRoleCom = new GenerateRoleCom();
            generateRoleCom.skinEnum = SkinEnum.DEFAULT;
            generateRoleCom.bornVec2 = new Vector2(0, 0);
            newEntity.AddComponent(generateRoleCom);

            gameFlowComponent.gameFlowEnum = GameFlowEnum.STARTED;
        }
    }

}
