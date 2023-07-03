

using System.Collections.Generic;

public class Group
{
   /// <summary>
   /// 
   /// </summary>
   public string Name { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public List <float> Height { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public StairTypePercent StairTypePercent { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public PropPercent PropPercent { get; set; }
   
   /// <summary>
   /// 
   /// </summary>
   public SpaceIntervalY SpaceIntervalY { get; set; }
  
  
   
}

public class StairTypePercent
{
   /// <summary>
   /// 
   /// </summary>
   public int General { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int Disposable { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int Breakage { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int MoveVerticle { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int MoveHorizontal { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int BlackRole { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int Balance { get; set; }
}
 
public class PropPercent
{
   /// <summary>
   /// 
   /// </summary>
   public int SpringBoard { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int HeighRocket { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int LowRocket { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int Spring { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public int empty { get; set; }
   
   
}

public class SpaceIntervalY
{
   /// <summary>
   /// 
   /// </summary>
   public float FloorValue { get; set; }
   /// <summary>
   /// 
   /// </summary>
   public float UpperValue { get; set; }
}
 




