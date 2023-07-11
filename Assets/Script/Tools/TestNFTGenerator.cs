using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestNFTGenerator
{
    public static string GenerateRandomNFTImage()
    {
        string[] pres = {
            "Common",
            "Elite",
            "Legendary",
            "Mythical",
            "Rare"
        };
        string[] names = {
            "Astronaut.png",
            //"Cat Maid.png",
            //"Pirate Captain.png",
            "Samurai.png",
            "Zombie.png"
        };


        System.Random random = new System.Random();
        string rdmPre = pres[random.Next(pres.Length)];
        string rdmName = names[random.Next(names.Length)];
        return rdmPre + "_" + rdmName;
    }
}
