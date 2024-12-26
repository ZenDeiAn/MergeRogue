using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

public class VirtualCameraRotateController : MonoBehaviour
{
       public CinemachineVirtualCamera virtualCamera;
       public float rotationSpeed = 0.2f;            
       public float minVerticalAngle = -30f;         
       public float maxVerticalAngle = 60f;          
       public bool invertY = false;                  
   
       private Vector2 currentRotation;              
       private bool isDragging = false;              
       private Vector2 lastInputPosition;            
   
       void Start()
       {
           if (virtualCamera == null)
           {
               Debug.LogError("Virtual Camera is not assigned!");
               return;
           }
   
           var pov = virtualCamera.GetCinemachineComponent<CinemachinePOV>();
           if (pov != null)
           {
               currentRotation.x = pov.m_HorizontalAxis.Value;
               currentRotation.y = pov.m_VerticalAxis.Value;
           }
       }
   
       void Update()
       {
           if (virtualCamera == null)
               return;
   
           if (Input.touchCount == 1)
           {
               HandleTouchInput(Input.GetTouch(0));
           }
           else if (Input.GetMouseButton(0))
           {
               HandleMouseInput();
           }
           else
           {
               isDragging = false;
           }
       }
   
       private void HandleTouchInput(Touch touch)
       {
           if (touch.phase == TouchPhase.Began)
           {
               isDragging = true;
               lastInputPosition = touch.position;
           }
           else if (touch.phase == TouchPhase.Moved && isDragging)
           {
               Vector2 delta = touch.position - lastInputPosition;
   
               UpdateCameraRotation(delta);
   
               lastInputPosition = touch.position;
           }
           else if (touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled)
           {
               isDragging = false;
           }
       }
   
       private void HandleMouseInput()
       {
           if (!isDragging)
           {
               isDragging = true;
               lastInputPosition = Input.mousePosition;
           }
   
           Vector2 delta = (Vector2)Input.mousePosition - lastInputPosition;
   
           UpdateCameraRotation(delta);
   
           lastInputPosition = Input.mousePosition;
       }
   
       private void UpdateCameraRotation(Vector2 delta)
       {
           currentRotation.x += delta.x * rotationSpeed * Time.deltaTime * 100f;
           currentRotation.y += (invertY ? delta.y : -delta.y) * rotationSpeed * Time.deltaTime * 100f;
   
           currentRotation.y = Mathf.Clamp(currentRotation.y, minVerticalAngle, maxVerticalAngle);
   
           var pov = virtualCamera.GetCinemachineComponent<CinemachinePOV>();
           if (pov != null)
           {
               pov.m_HorizontalAxis.Value = currentRotation.x;
               pov.m_VerticalAxis.Value = currentRotation.y;
           }
       }
}
