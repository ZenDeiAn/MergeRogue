using System;
using System.Collections;
using System.Collections.Generic;
using RaindowStudio.DesignPattern;
using UnityEngine;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class LoadingSceneManager : MonoBehaviour
{
    [SerializeField] private List<Sprite> randomIcon;
    [SerializeField] private Image img_icon;

    private void Start()
    {
        img_icon.sprite = randomIcon[Random.Range(0, randomIcon.Count)];
    }
}
