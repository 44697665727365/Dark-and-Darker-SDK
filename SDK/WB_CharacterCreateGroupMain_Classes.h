#pragma once 
#include <WB_CharacterCreateGroupMain_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C
// Size: 0x330(Inherited: 0x320)
struct UWB_CharacterCreateGroupMain_C : UCharacterSelectGroupWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320 (0x320)
	struct UWB_CharacterCreateMain_C* WB_CharacterCreateMain;  // 0x328 (0x328)


	void Construct(); // Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.Construct
	void OnVisibilityChanged_Event(uint8_t Invisibility); // Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.OnVisibilityChanged_Event
	void ExecuteUbergraph_WB_CharacterCreateGroupMain(int32_t EntryPoint); // Function WB_CharacterCreateGroupMain.WB_CharacterCreateGroupMain_C.ExecuteUbergraph_WB_CharacterCreateGroupMain
}; 
 
 


