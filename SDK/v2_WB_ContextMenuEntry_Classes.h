#pragma once 
#include <v2_WB_ContextMenuEntry_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C
// Size: 0x2A8(Inherited: 0x288)
struct Uv2_WB_ContextMenuEntry_C : UDCContextMenuEntryWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x288 (0x288)
	struct UButton* Button;  // 0x290 (0x290)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x298 (0x298)
	struct UTextBlock* Text_On;  // 0x2A0 (0x2A0)


	struct FText Get Text(); // Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.Get Text
	void BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	void BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Btn_Common_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	void BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.BndEvt__v2_WB_ContextMenuEntry_Button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	void ExecuteUbergraph_v2_WB_ContextMenuEntry(int32_t EntryPoint); // Function v2_WB_ContextMenuEntry.v2_WB_ContextMenuEntry_C.ExecuteUbergraph_v2_WB_ContextMenuEntry
}; 
 
 


