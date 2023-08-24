#pragma once 
#include <WB_CharacterSelectGroupMenu_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C
// Size: 0x330(Inherited: 0x320)
struct UWB_CharacterSelectGroupMenu_C : UCharacterSelectGroupWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320 (0x320)
	struct UWB_Menu_C* WB_Menu;  // 0x328 (0x328)


	void Construct(); // Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.Construct
	void OnVisibilityChanged_Event(uint8_t Invisibility); // Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.OnVisibilityChanged_Event
	void ExecuteUbergraph_WB_CharacterSelectGroupMenu(int32_t EntryPoint); // Function WB_CharacterSelectGroupMenu.WB_CharacterSelectGroupMenu_C.ExecuteUbergraph_WB_CharacterSelectGroupMenu
}; 
 
 


