#pragma once 
#include <WB_CommonBtn_Popup_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonBtn_Popup.WB_CommonBtn_Popup_C
// Size: 0x15A8(Inherited: 0x1580)
struct UWB_CommonBtn_Popup_C : UCommonButtonPopupWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x1580 (0x1580)
	struct UImage* Img_Press;  // 0x1588 (0x1588)
	struct UWidgetSwitcher* Switcher_OnOff;  // 0x1590 (0x1590)
	struct UCommonTextBlock* Txt_BtnNormal;  // 0x1598 (0x1598)
	struct UCommonTextBlock* Txt_BtnOn;  // 0x15A0 (0x15A0)


	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.OnFocusReceived
	void BP_OnUnhovered(); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnUnhovered
	void BP_OnHovered(); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnHovered
	void BP_OnPressed(); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnPressed
	void BP_OnReleased(); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.BP_OnReleased
	void ExecuteUbergraph_WB_CommonBtn_Popup(int32_t EntryPoint); // Function WB_CommonBtn_Popup.WB_CommonBtn_Popup_C.ExecuteUbergraph_WB_CommonBtn_Popup
}; 
 
 


