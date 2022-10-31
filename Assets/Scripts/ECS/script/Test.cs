using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Test : MonoBehaviour
{


    public GameObject MovingStairs;


    public GameObject Stairs;
    
  

    public void Testd()
    {
        Stairs.GetComponent<Animation>().Play();

        // var tran = (UnityEngine.Object.Instantiate(MovingStairs.gameObject)).GetComponent<Transform>();
        // tran.transform.position = new Vector3(0, 0, -7.2f);
        // tran.gameObject.GetComponent<MovingStairs>().SetGameController(null);
        // tran.gameObject.GetComponent<MovingStairs>().SetMovingParams(MovingDirection.Vertical,5f,3,3);
        //tran.transform.SetParent(StairsParent.transform);
    }

  
}
