using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class OnceSystem : BaseSystem
{
    public new SystemEnum systemEnum = SystemEnum.OnceSystem;

    public abstract void RunSystem(List<Entity> entities);
}
