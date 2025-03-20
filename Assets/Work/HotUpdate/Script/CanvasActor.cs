using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasActor : MonoBehaviour
{
    public Camera targetCamera; // The camera to face; if null, it defaults to the main camera.
    public Actor actor;
    [SerializeField] private Slider sld_health;
    [SerializeField] private Slider sld_skill;

    public void UpdateCanvas()
    {
        sld_skill.value = actor.Status.skillCharging.ToPercentage() / 1.0f;
        sld_health.value = actor.Status.Health / (float)actor.Status.HealthMaximumCalculated;
    }
    
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

    public void Initialize(Actor self)
    {
        actor = self;
        UpdateCanvas();
    }
}
