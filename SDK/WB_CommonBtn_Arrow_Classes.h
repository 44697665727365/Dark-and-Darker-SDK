#pragma once 
#include <WB_CommonBtn_Arrow_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C
// Size: 0x15A0(Inherited: 0x1580)
struct UWB_CommonBtn_Arrow_C : UDCCommonButtonBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_ArrowHover;  // 0x1588 (0x1588)
	struct UImage* Img_ArrowNormal;  // 0x1590 (0x1590)
	struct UImage* Img_ArrowPress;  // 0x1598 (0x1598)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.OnFocusReceived
	void GetBtnCommon(struct UDCCommonButtonBase*& Result); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.GetBtnCommon
	void BP_OnUnhovered(); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonBtn_Arrow(int32_t EntryPoint); // Function WB_CommonBtn_Arrow.WB_CommonBtn_Arrow_C.ExecuteUbergraph_WB_CommonBtn_Arrow
}; 
 
 


