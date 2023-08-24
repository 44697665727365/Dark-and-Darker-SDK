#pragma once 
#include <WB_Credit_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_Credit.WB_Credit_C
// Size: 0x458(Inherited: 0x440)
struct UWB_Credit_C : UDCCommonActivatableWidgetBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x440 (0x440)
	struct UOverlay* Overlay_Btn_Lobby;  // 0x448 (0x448)
	struct UWB_CommonBtn_L_C* WB_Btn_Back;  // 0x450 (0x450)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_Credit.WB_Credit_C.BP_GetDesiredFocusTarget
	void Construct(); // Function WB_Credit.WB_Credit_C.Construct
	void CreditButtonClicked(struct UCommonButtonBase* Button); // Function WB_Credit.WB_Credit_C.CreditButtonClicked
	void (uint8_t Invisibility); // Function WB_Credit.WB_Credit_C.
	void ExecuteUbergraph_WB_Credit(int32_t EntryPoint); // Function WB_Credit.WB_Credit_C.ExecuteUbergraph_WB_Credit
}; 
 
 


