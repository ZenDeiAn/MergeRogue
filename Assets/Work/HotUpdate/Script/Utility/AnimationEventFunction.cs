using UnityEngine;

public class AnimationEventFunction : MonoBehaviour
{
    [SerializeField] private EventSystemSelectedObjectUpdater essou;
    [SerializeField] private Animator animator;
    
    public void TriggerEventSystemSelectedObjectUpdater()
    {
        essou.enabled = false;
        essou.enabled = true;
    }

    public void SetGameObjectActiveFalse()
    {
        gameObject.SetActive(false);
    }

    public void SetGameObjectActiveTrue()
    {
        gameObject.SetActive(true);
    }

    /*public void PlaySFX_CountDown_3() => AudioManager.PlaySFX(AudioClipKey.SFX_CountDown_3);
    public void PlaySFX_CountDown_2() => AudioManager.PlaySFX(AudioClipKey.SFX_CountDown_2);
    public void PlaySFX_CountDown_1() => AudioManager.PlaySFX(AudioClipKey.SFX_CountDown_1);
    public void PlaySFX_CountDown_Start() => AudioManager.PlaySFX(AudioClipKey.SFX_CountDown_Start);

    public void PlayBGM_Gaming() => AudioManager.PlayBGM(AudioClipKey.BGM_Gaming, 0.5f);*/

    public void PlayAnimatorTrigger(string triggerName) => animator.SetTrigger(triggerName);
}
