using RaindowStudio.DesignPattern;
//using QFSW.QC;
using UnityEngine;

namespace RaindowStudio.Language
{
    [DefaultExecutionOrder(-1)]
    public class LanguageManagerExtension : SingletonUnity<LanguageManagerExtension>
    {
        //[Command("Language", "Change Language. PS: Need reboot game."), Savable]
        public LanguageType savableLanguage;

        //[Command("LanguageModifyApply")]
        public void ApplyLanguageModify()
        {
            LanguageManager.ChangeLanguage(savableLanguage);
        }

        private void Awake()
        {
            LanguageManager.language = savableLanguage;
        }
    }
}