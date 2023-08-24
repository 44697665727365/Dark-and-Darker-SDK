#pragma once 
#include <WB_MenuOptionPopup_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionPopup.WB_MenuOptionPopup_C
// Size: 0x498(Inherited: 0x460)
struct UWB_MenuOptionPopup_C : UGameMenuOptionPopupWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x460 (0x460)
	struct UInvalidationBox* InvalidationBox_152;  // 0x468 (0x468)
	struct UTextBlock* Txt_Desc;  // 0x470 (0x470)
	struct UVerticalBox* VBox_Btns;  // 0x478 (0x478)
	struct FText DefaultDetailText;  // 0x480 (0x480)


	struct UWidget* BP_GetDesiredFocusTarget(); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.BP_GetDesiredFocusTarget
	void RefreshDetailText(int32_t InValue); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText
	void UpdateDetailText(struct FText& InDetailText); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText
	void UpdateButtonText(struct FText& InLeftText, struct FText& InRightText); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText
	void Construct(); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.Construct
	void OnVisibilityChanged_Event(uint8_t Invisibility); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.OnVisibilityChanged_Event
	void ExecuteUbergraph_WB_MenuOptionPopup(int32_t EntryPoint); // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup
}; 
 
 


