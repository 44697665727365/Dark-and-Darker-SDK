#pragma once 
#include <WB_CommonBtn_Text_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonBtn_Text.WB_CommonBtn_Text_C
// Size: 0x1590(Inherited: 0x1580)
struct UWB_CommonBtn_Text_C : UDCCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UCommonTextBlock* TextBlock_Button;  // 0x1588 (0x1588)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.OnFocusReceived
	void BP_OnUnhovered(); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonBtn_Text(int32_t EntryPoint); // Function WB_CommonBtn_Text.WB_CommonBtn_Text_C.ExecuteUbergraph_WB_CommonBtn_Text
}; 
 
 


