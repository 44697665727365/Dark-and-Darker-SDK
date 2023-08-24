#pragma once 
#include <WB_CommonBtn_S_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonBtn_S.WB_CommonBtn_S_C
// Size: 0x1770(Inherited: 0x1580)
struct UWB_CommonBtn_S_C : UCommonButtonSWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UOverlay* Able;  // 0x1588 (0x1588)
	struct UOverlay* Disable;  // 0x1590 (0x1590)
	struct UImage* Img_BtnIcon_Off;  // 0x1598 (0x1598)
	struct UImage* Img_BtnIcon_On;  // 0x15A0 (0x15A0)
	struct UImage* Img_BtnPress;  // 0x15A8 (0x15A8)
	struct UImage* Img_BtnSelectedFrame;  // 0x15B0 (0x15B0)
	struct UImage* Img_Hover;  // 0x15B8 (0x15B8)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x15C0 (0x15C0)
	char pad_5576[8];  // 0x15C8 (0x15C8)
	struct FSlateBrush IconOff;  // 0x15D0 (0x15D0)
	struct FSlateBrush IconOn;  // 0x16A0 (0x16A0)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.OnFocusReceived
	void BP_OnUnhovered(); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonBtn_S(int32_t EntryPoint); // Function WB_CommonBtn_S.WB_CommonBtn_S_C.ExecuteUbergraph_WB_CommonBtn_S
}; 
 
 


