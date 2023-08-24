#pragma once 
#include <NavigationBarAction_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass NavigationBarAction.NavigationBarAction_C
// Size: 0x1520(Inherited: 0x1510)
struct UNavigationBarAction_C : UCommonBoundActionButton
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1510 (0x1510)
	struct UImage* Img_Press;  // 0x1518 (0x1518)


	void UpdateSyleOnInputMethod(uint8_t InputType); // Function NavigationBarAction.NavigationBarAction_C.UpdateSyleOnInputMethod
	void Construct(); // Function NavigationBarAction.NavigationBarAction_C.Construct
	void EventInputMethodChanged(uint8_t bNewInputType); // Function NavigationBarAction.NavigationBarAction_C.EventInputMethodChanged
	void BP_OnUnhovered(); // Function NavigationBarAction.NavigationBarAction_C.BP_OnUnhovered
	void BP_OnHovered(); // Function NavigationBarAction.NavigationBarAction_C.BP_OnHovered
	void BP_OnPressed(); // Function NavigationBarAction.NavigationBarAction_C.BP_OnPressed
	void BP_OnReleased(); // Function NavigationBarAction.NavigationBarAction_C.BP_OnReleased
	void ExecuteUbergraph_NavigationBarAction(int32_t EntryPoint); // Function NavigationBarAction.NavigationBarAction_C.ExecuteUbergraph_NavigationBarAction
}; 
 
 


