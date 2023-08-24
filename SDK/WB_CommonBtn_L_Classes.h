#pragma once 
#include <WB_CommonBtn_L_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonBtn_L.WB_CommonBtn_L_C
// Size: 0x15B8(Inherited: 0x1580)
struct UWB_CommonBtn_L_C : UCommonButtonLWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_BtnPress;  // 0x1588 (0x1588)
	struct UImage* Img_BtnSelectedFrame;  // 0x1590 (0x1590)
	struct UImage* Img_Hover;  // 0x1598 (0x1598)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x15A0 (0x15A0)
	struct UTextBlock* Text_Title_Able;  // 0x15A8 (0x15A8)
	struct UTextBlock* Text_Title_Disable;  // 0x15B0 (0x15B0)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.OnFocusReceived
	void BP_OnUnhovered(); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonBtn_L(int32_t EntryPoint); // Function WB_CommonBtn_L.WB_CommonBtn_L_C.ExecuteUbergraph_WB_CommonBtn_L
}; 
 
 


