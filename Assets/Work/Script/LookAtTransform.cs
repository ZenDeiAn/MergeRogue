using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtTransform : MonoBehaviour
{
    [SerializeField] private Transform target;
    [SerializeField] private bool lookAtMainCamera;

    // Start is called before the first frame update
    void Start()
    {
        if (target != null) return;

        if (!lookAtMainCamera) return;
        
        if (Camera.main != null)
            target = Camera.main.transform;
    }

    // Update is called once per frame
    void Update()
    {
        if (target == null)
            return;
        
        transform.rotation = Quaternion.LookRotation(transform.position - target.position);
    }
}
