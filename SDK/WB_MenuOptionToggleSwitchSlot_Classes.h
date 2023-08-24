#pragma once 
#include <WB_MenuOptionToggleSwitchSlot_Structs.h>
 
 
 
// WidgetBlueprintGeneratedClass WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C
// Size: 0x350(Inherited: 0x320)
struct UWB_MenuOptionToggleSwitchSlot_C : UGameMenuOptionToggleSwitchWidget
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x320 (0x320)
	struct UButton* Btn_Hovering;  // 0x328 (0x328)
	struct UWidgetSwitcher* Switcher_Selected;  // 0x330 (0x330)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton_Off;  // 0x338 (0x338)
	struct UWB_OptionCheckButton01_C* WB_OptionCheckButton_On;  // 0x340 (0x340)
	struct UWB_MenuOptionsControls_C* WB_MenuOptionsControls;  // 0x348 (0x348)


	struct UWidget* GetPrimaryGamepadFocusWidget(); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.GetPrimaryGamepadFocusWidget
	void SetButtomText(); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetButtomText
	void ChangeButtonActivated(struct UWB_OptionCheckButton01_C* ActivateButton, struct UWB_OptionCheckButton01_C* DeactivateButton); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ChangeButtonActivated
	void SetOptionButtonTile(struct UWB_OptionCheckButton01_C* OptionButton, struct FText InTitle); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetOptionButtonTile
	void OnInitialized(); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnInitialized
	void OnToggleSwitch(bool InSwitch); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnToggleSwitch
	void UpdateButtonText(struct FText& LeftText, struct FText& RightText); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.UpdateButtonText
	void ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot(int32_t EntryPoint); // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot
}; 
 
 


