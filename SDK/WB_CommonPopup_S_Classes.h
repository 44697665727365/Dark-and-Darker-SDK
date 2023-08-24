#pragma once 
#include <WB_CommonPopup_S_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_CommonPopup_S.WB_CommonPopup_S_C
// Size: 0x4B0(Inherited: 0x478)
struct UWB_CommonPopup_S_C : UCommonPopupSWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x478 (0x478)
	struct UWidgetAnimation* SlideIn;  // 0x480 (0x480)
	struct UInvalidationBox* InvalidationBox_152;  // 0x488 (0x488)
	struct UWidgetSwitcher* Switcher_Btn2or1;  // 0x490 (0x490)
	struct UTextBlock* Txt_Desc;  // 0x498 (0x498)
	struct UVerticalBox* VBox_Btns;  // 0x4A0 (0x4A0)
	struct UPopupDataSWidget* PopupDataSWidget_1;  // 0x4A8 (0x4A8)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_GetDesiredFocusTarget
	void OnRemovePopup(); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnRemovePopup
	void OnCreatePopup(struct FPopupSWidgetData& PopupSWidgetData); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.OnCreatePopup
	void BP_OnDeactivated(); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_OnDeactivated
	void BP_OnActivated(); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.BP_OnActivated
	void ExecuteUbergraph_WB_CommonPopup_S(int32_t EntryPoint); // Function WB_CommonPopup_S.WB_CommonPopup_S_C.ExecuteUbergraph_WB_CommonPopup_S
}; 
 
 


