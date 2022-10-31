
using UnityEngine;

public class Guidence : MonoBehaviour
{
    public GameObject FirstStep;

    public GameObject SecondStep;

    public GameObject ThirdStep;
    
    public GameObject FourthStep;

    public GameObject FinishGuidence;






    public void OnFirstStep()
    {

        FirstStep.SetActive(true);
    }



    public void OnSecondStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        FirstStep.SetActive(false);
        SecondStep.SetActive(true);
    }

    public void OnThirdStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        SecondStep.SetActive(false);
        ThirdStep.SetActive(true);
    }


    public void OnFourthStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        ThirdStep.SetActive(false);
        FourthStep.SetActive(true);
    }


    public void OnFifthStep()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        FourthStep.SetActive(false);
        FinishGuidence.SetActive(true);
    }


    public void OnFinishedGuidence()
    {
        SoundManager.Instance.PlaySound(SoundName.Button);
        FinishGuidence.SetActive(false);
        PlayerPrefs.SetString("HasGuidence", "true");

    }




}
