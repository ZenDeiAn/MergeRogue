using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.ParticleSystem;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace AirpassUnity.Utility
{ 
    public class ParticleSizeFitter : MonoBehaviour
    {
        #region Defination
        public enum FitterFunction
        {
            none,
            fitInChildren,
            fitByList
        }
        [Flags]
        public enum FitterType
        {
            nothing = 0,
            startSize = 1 << 0,
            startLifeTime = 1 << 1,
            sizeOverLifeTime = 1 << 2,
            limitVelocityOverLifetime = 1 << 3,
            inheritVelocity = 1 << 4,
            transformScale = 1 << 5,
        }
        #endregion

        public float fitPercentage = 1;
        public FitterFunction fitterFunction = FitterFunction.none;
        public FitterType fitterType = FitterType.startSize;
        public Transform root;
        public List<ParticleSystem> particleList = new List<ParticleSystem>();

        private int currentIID;
        private Dictionary<int, Dictionary<FitterType, object>> originalSizes = new Dictionary<int, Dictionary<FitterType, object>>();

        #region Fit logic
        private bool Check_BackUpOriginalSize(FitterType _type, object _value)
        {
            if (fitterType.HasFlag(_type))
            {
                if (!originalSizes[currentIID].ContainsKey(_type))
                {
                    originalSizes[currentIID].Add(_type, _value);
                }
                return true;
            }
            return false;
        }

        void FitParticleSize(ParticleSystem _ps)
        {
            currentIID = _ps.gameObject.GetInstanceID();
            if (!originalSizes.ContainsKey(currentIID))
            {
                originalSizes.Add(currentIID, new Dictionary<FitterType, object>());
            }
            if (Check_BackUpOriginalSize(FitterType.startSize, _ps.startSize))
            {
                _ps.startSize = (float)originalSizes[currentIID][FitterType.startSize] * fitPercentage;
            }
            if (Check_BackUpOriginalSize(FitterType.startLifeTime, _ps.startLifetime))
            {
                _ps.startLifetime = (float)originalSizes[currentIID][FitterType.startLifeTime] * fitPercentage;
            }
            if (_ps.sizeOverLifetime.enabled)
            {
                var pssol = _ps.sizeOverLifetime;
                if (Check_BackUpOriginalSize(FitterType.sizeOverLifeTime, pssol.sizeMultiplier))
                {
                    pssol.sizeMultiplier = (float)originalSizes[currentIID][FitterType.sizeOverLifeTime] * fitPercentage;
                }
            }
            if (_ps.velocityOverLifetime.enabled)
            {
                var psvol = _ps.velocityOverLifetime;
                if (Check_BackUpOriginalSize(FitterType.limitVelocityOverLifetime, psvol.speedModifierMultiplier))
                {
                    psvol.speedModifierMultiplier = (float)originalSizes[currentIID][FitterType.limitVelocityOverLifetime] * fitPercentage;
                }
            }
            if (_ps.inheritVelocity.enabled)
            {
                var psiv = _ps.inheritVelocity;
                if (Check_BackUpOriginalSize(FitterType.inheritVelocity, psiv.curveMultiplier))
                {
                    psiv.curveMultiplier = (float)originalSizes[currentIID][FitterType.inheritVelocity] * fitPercentage;
                }
            }
            if (Check_BackUpOriginalSize(FitterType.transformScale, _ps.transform.localScale))
            {
                _ps.transform.localScale = (Vector3)originalSizes[currentIID][FitterType.transformScale] * fitPercentage;
            }
        }
        #endregion

        private void FitChildrenLoop(Transform _parent)
        {
            foreach (Transform child in _parent)
            {
                if (child.childCount > 0)
                {
                    FitChildrenLoop(child);
                }
                if (child.TryGetComponent(out ParticleSystem ps))
                {
                    FitParticleSize(ps);
                }
            }
        }

        void FitInChildren()
        {
            Transform rootTemp = (root == null ? transform : root);
            if (rootTemp.TryGetComponent(out ParticleSystem ps))
            {
                FitParticleSize(ps);
            }
            FitChildrenLoop(rootTemp);
        }

        void FitByList()
        {
            foreach (ParticleSystem ps in particleList)
            {
                FitParticleSize(ps);
                FitChildrenLoop(ps.transform);
            }
        }

        [ContextMenu("Fit ParticleSystems' size")]
        public void FitSize()
        {
            switch (fitterFunction)
            {
                case FitterFunction.none:
                    Debug.LogWarning("Please select fitter function at Inspecter parameter 'FitterFunction'.");
                    break;
                case FitterFunction.fitInChildren:
                    FitInChildren();
                    break;
                case FitterFunction.fitByList:
                    FitByList();
                    break;
            }
        }

        public void ClearList()
        {
            particleList.Clear();
        }
    }

    #region Editor
#if UNITY_EDITOR
    [CustomEditor(typeof(ParticleSizeFitter))]
    public class EditorParticleSizeFitter : Editor
    {
        static void Initialization(ParticleSizeFitter _target, SerializedObject _serializedObject)
        {
            _target.fitPercentage = EditorGUILayout.FloatField("Fit scale", _target.fitPercentage);
            _target.fitterType = (ParticleSizeFitter.FitterType)EditorGUILayout.EnumFlagsField("Fitter Type", _target.fitterType);
            _serializedObject.ApplyModifiedProperties();
            _target.fitterFunction = (ParticleSizeFitter.FitterFunction)EditorGUILayout.EnumPopup("Fitter Function", _target.fitterFunction);
            EditorGUILayout.Separator();
            EditorGUILayout.BeginVertical("Box");
            switch (_target.fitterFunction)
            {
                case ParticleSizeFitter.FitterFunction.none:
                    EditorGUILayout.LabelField("Please select fitter function.");
                    break;
                case ParticleSizeFitter.FitterFunction.fitInChildren:
                    EditorGUILayout.PropertyField(_serializedObject.FindProperty("root"), true);
                    _serializedObject.ApplyModifiedProperties();
                    break;
                case ParticleSizeFitter.FitterFunction.fitByList:
                    if (GUILayout.Button("Clear List()"))
                    {
                        _target.ClearList();
                    }
                    EditorGUILayout.EndHorizontal();
                    EditorGUILayout.PropertyField(_serializedObject.FindProperty("particleList"), true);
                    _serializedObject.ApplyModifiedProperties();
                    EditorGUILayout.BeginHorizontal();
                    break;
            }
            EditorGUILayout.EndVertical();
            EditorGUILayout.Separator();
            EditorGUILayout.BeginHorizontal();
            if (GUILayout.Button("Fit Size()"))
            {
                _target.FitSize();
            }
            EditorGUILayout.EndHorizontal();
        }

        public override void OnInspectorGUI()
        {
            //base.OnInspectorGUI();
            Initialization((ParticleSizeFitter)target, serializedObject);
        }
    }
#endif
    #endregion
}


