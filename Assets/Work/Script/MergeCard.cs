using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MergeCard : MonoBehaviour
{
    [SerializeField] private GameObject card;
    [SerializeField] private GameObject socket;

    public Vector3 position;
    
    private bool _interacting = false;
    
    public bool Interacting
    {
        get => _interacting;
        set
        {
            _interacting = value;
            card.SetActive(!_interacting);
            socket.SetActive(_interacting);
        }
    }

    void Update()
    {
        Vector3 targetPosition;
        if (_interacting)
        {
            targetPosition = Camera.main.ViewportToWorldPoint(Input.mousePosition);
            targetPosition.z = 0;
        }
        else
        {
            targetPosition = position;
        }
        
        transform.position = Vector3.Lerp(transform.position, targetPosition, Time.deltaTime * 10f);
    }
}
