using RaindowStudio.Attribute;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class EventSystemSelectedObjectUpdater : MonoBehaviour
{
    public static GameObject initialSelected;
    [UneditableField] public GameObject previousSelected;
    
    [SerializeField] private GameObject firstSelected;

    public static bool NavigateSelectedGameObject(MoveDirection direction)
    {
        if (EventSystem.current.currentSelectedGameObject == null)
        {
            EventSystem.current.SetSelectedGameObject(initialSelected);
        }
        else
        {
            Selectable currentSelectable = EventSystem.current.currentSelectedGameObject.GetComponent<Selectable>();
            Navigation currentNavigation = currentSelectable.navigation;
            Selectable nextSelected = direction switch
            {
                MoveDirection.Left => currentNavigation.selectOnLeft,
                MoveDirection.Right => currentNavigation.selectOnRight,
                MoveDirection.Up => currentNavigation.selectOnUp,
                MoveDirection.Down => currentNavigation.selectOnDown,
                _ => null
            };
            if (nextSelected == null)
            {
                nextSelected = direction switch
                {
                    MoveDirection.Left => currentSelectable.FindSelectableOnLeft(),
                    MoveDirection.Right => currentSelectable.FindSelectableOnRight(),
                    MoveDirection.Up => currentSelectable.FindSelectableOnUp(),
                    MoveDirection.Down => currentSelectable.FindSelectableOnDown(),
                    _ => null
                };
            }

            if (nextSelected != null && nextSelected.gameObject != null)
            {
                EventSystem.current.SetSelectedGameObject(nextSelected.gameObject);
                return true;
            }
        }
        
        return false;
    }

    public void SetSelected()
    {
        initialSelected = firstSelected;
        EventSystem.current.SetSelectedGameObject(firstSelected);
    }

    public void SetPreviousSelected()
    {
        EventSystem.current.SetSelectedGameObject(previousSelected);
    }

    void OnEnable()
    {
        previousSelected = EventSystem.current.currentSelectedGameObject;
        SetSelected();
    }
}