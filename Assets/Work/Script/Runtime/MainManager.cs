using System;
using RaindowStudio.DesignPattern;
using RaindowStudio.Utility;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class MainManager : SingletonUnity<MainManager>
{
    [SerializeField] private Slider sld_patch;
    [SerializeField] private TextMeshProUGUI txt_patch;

    public void UpdatePatchUI(string text, float value)
    {
        txt_patch.SetText(string.IsNullOrWhiteSpace(text) ? "Patch start" : 
            $"Downloading '{text}'...");
        sld_patch.value = value;
    }

    protected override void Initialization()
    {
        base.Initialization();
        
        UpdatePatchUI(string.Empty, 0);
        this.WaitUntilToDo(() => HotUpdateManager.Instance.Initialized, () =>
        {
            HotUpdateManager.Instance.PatchAllAddressableAssets(_ => sld_patch.value = 0,
                UpdatePatchUI,
                s =>
                {
                    txt_patch.SetText($"'{s} download complete.");
                    sld_patch.value = 1;
                },
                () => SceneLoader.Instance.LoadScene("Title", false));
        });
    }
    
    /*
    public void TestLoadScene()
    {
        SceneLoader.Instance.LoadScene("Title", false);
    }*/
}
