#pragma once 
#include <WB_CharacterSelectGroupMain_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C
// Size: 0x330(Inherited: 0x320)
struct UWB_CharacterSelectGroupMain_C : UCharacterSelectGroupWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320 (0x320)
	struct UWB_CharacterSelectMain_C* WB_CharacterSelectMain;  // 0x328 (0x328)


	void Construct(); // Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.Construct
	void OnVisibilityChanged_Event(uint8_t Invisibility); // Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.OnVisibilityChanged_Event
	void ExecuteUbergraph_WB_CharacterSelectGroupMain(int32_t EntryPoint); // Function WB_CharacterSelectGroupMain.WB_CharacterSelectGroupMain_C.ExecuteUbergraph_WB_CharacterSelectGroupMain
}; 
 
 


