using System;
using System.Collections.Generic;
using System.ComponentModel.Design.Serialization;
using UnityEngine;

namespace RaindowStudio.AudioManager
{
    public class AudioManager : AudioManagerBase
    {
        public static AudioObject PlayBGM(AudioClipKey key, float fadeTime = 0) =>
            Instance.PlayBGM(Instance.audioClips[(int)key], fadeTime);

        public static AudioObject PlaySFX(AudioClipKey key) =>
            Instance.PlaySFX(Instance.audioClips[(int)key]);

        public static AudioObject StopBGM(AudioClipKey key, float fadeTime = 0) =>
            Instance.StopBGM(Instance.audioClips[(int)key], fadeTime);
        
        public static void StopAllBGM(float fadeTime = 0) => 
            Instance.StopAllBGM(fadeTime);

        public static AudioObject PauseBGM(AudioClipKey key, float fadeTime = 0) => 
            Instance.PauseBGM(Instance.audioClips[(int)key], fadeTime);
        
        public static AudioObject ResumeBGM(AudioClipKey key, float fadeTime = 0) => 
            Instance.ResumeBGM(Instance.audioClips[(int)key], fadeTime);

        public static List<AudioClip> AudioClips =>
            Instance.audioClips;
        
        public static float GetVolume(AudioVolumeType type) => 
            Instance.GetVolume(type);

        public static void SetVolume(AudioVolumeType type, float value) => 
            Instance.SetVolume(type, value);

        public static void SubscribeToOnVolumeChangedEvent(Action<AudioVolumeType> action) => 
            Instance.OnVolumeChangedEvent += action;
        
        public static void UnsubscribeFromOnVolumeChangedEvent(Action<AudioVolumeType> action) => 
            Instance.OnVolumeChangedEvent -= action;
    }
}