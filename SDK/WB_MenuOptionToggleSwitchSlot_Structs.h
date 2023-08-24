#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.GetPrimaryGamepadFocusWidget
// Size: 0xA(Inherited: 0x8)
struct FGetPrimaryGamepadFocusWidget : FGetPrimaryGamepadFocusWidget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x8 (0x8)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x9 (0x9)


}; 
 
 // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.OnToggleSwitch
// Size: 0x1(Inherited: 0x1)
struct FOnToggleSwitch : FOnToggleSwitch
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool InSwitch : 1;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.UpdateButtonText
// Size: 0x30(Inherited: 0x30)
struct FUpdateButtonText : FUpdateButtonText
{
	struct FText LeftText;  // 0x0 (0x0)
	struct FText RightText;  // 0x18 (0x18)


}; 
 
 // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.SetOptionButtonTile
struct FSetOptionButtonTile
{
	struct UWB_OptionCheckButton01_C* OptionButton;  // 0x0 (0x0)
	struct FText InTitle;  // 0x8 (0x8)


}; 
 
 // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ExecuteUbergraph_WB_MenuOptionToggleSwitchSlot
struct FExecuteUbergraph_WB_MenuOptionToggleSwitchSlot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool K2Node_Event_InSwitch : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FText K2Node_Event_LeftText;  // 0x28 (0x28)
	struct FText K2Node_Event_RightText;  // 0x40 (0x40)


}; 
 
 // Function WB_MenuOptionToggleSwitchSlot.WB_MenuOptionToggleSwitchSlot_C.ChangeButtonActivated
struct FChangeButtonActivated
{
	struct UWB_OptionCheckButton01_C* ActivateButton;  // 0x0 (0x0)
	struct UWB_OptionCheckButton01_C* DeactivateButton;  // 0x8 (0x8)


}; 
 
 