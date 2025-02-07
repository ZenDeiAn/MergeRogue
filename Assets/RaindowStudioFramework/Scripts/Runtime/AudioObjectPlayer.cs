using RaindowStudio.AudioManager;
using UnityEngine;

public class AudioObjectPlayer : MonoBehaviour
{
    public AudioClipKey clipKey;
    public float bgmFadeTime;

    public void PlaySFX()
    {
        AudioManager.PlaySFX(clipKey);
    }
    
    public void PlayBGM()
    {
        AudioManager.PlayBGM(clipKey, bgmFadeTime);
    }

    public void StopBGM()
    {
        AudioManager.StopBGM(clipKey, bgmFadeTime);
    }

    public void PauseBGM()
    {
        AudioManager.PauseBGM(clipKey, bgmFadeTime);
    }

    public void ResumeBGM()
    {
        AudioManager.PauseBGM(clipKey, bgmFadeTime);
    }

    public void PlaySFX(AudioClipKey clip)
    {
        AudioManager.PlaySFX(clip);
    }
}