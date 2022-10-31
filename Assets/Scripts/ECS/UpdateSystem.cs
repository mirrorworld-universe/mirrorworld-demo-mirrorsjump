using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class UpdateSystem : BaseSystem
{
    public new SystemEnum systemEnum = SystemEnum.UpdateSystem;

    public abstract void OnSystemUpdate(List<Entity> entities);
}
