using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameWorld : Singleton<GameWorld>
{
    private List<Entity> entities;
    private List<BaseSystem> systems;

    private long entityId;

    public GameWorld()
    {
        InitWorld();
    }

    public void InitWorld()
    {
        entities = new List<Entity>();
        systems = new List<BaseSystem>();
        entityId = 0;

        InitSystems();
    }

    public void OnFixUpdate()
    {
        foreach(BaseSystem sys in systems)
        {
            if(sys.systemEnum == SystemEnum.UpdateSystem)
            {
                UpdateSystem updateSys = (UpdateSystem)sys;

                updateSys.OnSystemUpdate(entities);
            }
            else if (sys.systemEnum == SystemEnum.OnceSystem)
            {
                OnceSystem onceSys = (OnceSystem)sys;

                onceSys.RunSystem(entities);

                systems.Remove(sys);
            }
            else
            {
                Debug.Log("Unregisted system:" + sys.GetType());
            }
        }
    }

    public void AddEntity(Entity entity)
    {
        entities.Add(entity);
    }

    public Entity AddNewEntity()
    {
        Entity entity = new Entity();
        entity.ID = ++entityId;
        AddEntity(entity);
        return entity;
    }

    public void RemoveEntity(Entity entity)
    {
        entities.Remove(entity);
    }

    public void AddSystem(BaseSystem system)
    {
        systems.Add(system);
    }

    public void RemoveSystem(BaseSystem system)
    {
        systems.Remove(system);
    }

    private void InitSystems()
    {
        systems.Add(new MapSystem());
        systems.Add(new GateDecoradeSystem());
        systems.Add(new GameFlowSystem());
        systems.Add(new GenerateRoleSys());
        systems.Add(new InputSystem());
        systems.Add(new RoleMoveSystem());
    }

    private GameFlowComponent gameFlowComponent;
    public GameFlowComponent GetGameFlow()
    {
        if(gameFlowComponent == null)
        {
            Entity entity = AddNewEntity();
            gameFlowComponent = new GameFlowComponent();
            entity.AddComponent(gameFlowComponent);
        }

        return gameFlowComponent;
    }

    private InputComponent inputComponent;
    public InputComponent GetInputComponent()
    {
        if (inputComponent == null)
        {
            Entity entity = AddNewEntity();
            inputComponent = new InputComponent();
            entity.AddComponent(inputComponent);
        }

        return inputComponent;
    }
}
