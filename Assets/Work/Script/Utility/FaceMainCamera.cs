using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceMainCaemra : MonoBehaviour
{
    public Camera targetCamera; // The camera to face; if null, it defaults to the main camera.

    void Start()
    {
        if (targetCamera == null)
        {
            targetCamera = Camera.main; // Assign the main camera if no camera is set.
        }
    }

    void LateUpdate()
    {
        if (targetCamera == null)
            return;

        // Make the Canvas face the camera
        transform.LookAt(transform.position + targetCamera.transform.rotation * Vector3.forward,
            targetCamera.transform.rotation * Vector3.up);
    }
}
