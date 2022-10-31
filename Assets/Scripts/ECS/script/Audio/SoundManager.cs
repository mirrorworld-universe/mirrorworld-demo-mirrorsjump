
using UnityEngine;

public class SoundManager : MonoSingleton<SoundManager>
{
    [SerializeField] private AudioSource audioSource;
    public SoundDetailList detailList;
    public enum SoundType { Pickup }
    private static bool IsMute = false;
    
    // Back music 
    public AudioClip[] Clips = new AudioClip[6];

    private void Start()
    {
        DontDestroyOnLoad(gameObject);

        IsMute = PlayerPrefs.GetInt(GlobalDef.isMute) == 0 ? false : true;

        transform.GetComponent<AudioSource>().clip = null;
      
    }


    public AudioSource GetAudioSource()
    {
        return transform.GetComponent<AudioSource>();
    }
    
    public void SetSoundState(bool isMute)
    {
        IsMute = isMute;
        PlayerPrefs.SetInt(GlobalDef.isMute, IsMute ? 1 : 0);
    }

    public bool GetSoundState()
    {
        return IsMute;
    }

    public void PlaySound(SoundName soundName)
    {
        if (!IsMute)
        {
            var detail = detailList.GetSoundDetails(soundName);
            audioSource.PlayOneShot(detail.soundClip);
        }
    }
}
