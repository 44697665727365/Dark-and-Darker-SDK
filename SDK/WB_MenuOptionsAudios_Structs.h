#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.UpdateWindowFocusChanged
// Size: 0x8(Inherited: 0x8)
struct FUpdateWindowFocusChanged : FUpdateWindowFocusChanged
{
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool IsFocus : 1;  // 0x0 (0x0)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool IsBackgroundOption : 1;  // 0x1 (0x1)
	float TotalVolume;  // 0x4 (0x4)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.SetActivateSlotHoverDetailText
struct FSetActivateSlotHoverDetailText
{
	struct FText Title;  // 0x0 (0x0)
	struct FText Descript;  // 0x18 (0x18)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.Set Activate Slot Hover
struct FSet Activate Slot Hover
{
	struct UWidgetSwitcher* ActivateSwitcherSelected;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnSliderHovered
struct FOnSliderHovered
{
	struct UWB_MenuOptionSlot_Slider_C* Slider;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.OnGameUserSettingAudiosChanged
// Size: 0x51(Inherited: 0x58)
struct FOnGameUserSettingAudiosChanged : FOnGameUserSettingAudiosChanged
{
	struct FGameUserSettingAudios InGameUserSettingAudios;  // 0x0 (0x0)
	struct FGameUserSettingAudios InOldGameUserSettingAudios;  // 0x28 (0x28)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool bInForce : 1;  // 0x50 (0x50)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.InitOptionWidgetBinding
struct FInitOptionWidgetBinding
{
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x10 (0x10)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_2;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_3;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x4C (0x4C)
	char pad_92[4];  // 0x5C (0x5C)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_4;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x68 (0x68)
	char pad_105[3];  // 0x69 (0x69)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x6C (0x6C)
	char pad_124[4];  // 0x7C (0x7C)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider;  // 0x80 (0x80)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x88 (0x88)
	char pad_137[3];  // 0x89 (0x89)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x8C (0x8C)
	char pad_156[4];  // 0x9C (0x9C)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_2;  // 0xA0 (0xA0)
	char pad_168_1 : 7;  // 0xA8 (0xA8)
	bool K2Node_DynamicCast_bSuccess_6 : 1;  // 0xA8 (0xA8)
	char pad_169[7];  // 0xA9 (0xA9)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_3;  // 0xB0 (0xB0)
	char pad_184_1 : 7;  // 0xB8 (0xB8)
	bool K2Node_DynamicCast_bSuccess_7 : 1;  // 0xB8 (0xB8)
	char pad_185[3];  // 0xB9 (0xB9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_6;  // 0xBC (0xBC)
	char pad_204[4];  // 0xCC (0xCC)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_4;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool K2Node_DynamicCast_bSuccess_8 : 1;  // 0xD8 (0xD8)
	char pad_217[7];  // 0xD9 (0xD9)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider_5;  // 0xE0 (0xE0)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_DynamicCast_bSuccess_9 : 1;  // 0xE8 (0xE8)
	char pad_233[3];  // 0xE9 (0xE9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_7;  // 0xEC (0xEC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_8;  // 0xFC (0xFC)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_9;  // 0x10C (0x10C)


}; 
 
 // Function WB_MenuOptionsAudios.WB_MenuOptionsAudios_C.ExecuteUbergraph_WB_MenuOptionsAudios
struct FExecuteUbergraph_WB_MenuOptionsAudios
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool K2Node_Event_IsFocus : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool K2Node_Event_IsBackgroundOption : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	float K2Node_Event_TotalVolume;  // 0x8 (0x8)
	float CallFunc_GetRTPCValue_Value;  // 0xC (0xC)
	uint8_t CallFunc_GetRTPCValue_OutputValueType;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_CustomEvent_Slider;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2 : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3 : 1;  // 0x22 (0x22)
	char pad_35_1 : 7;  // 0x23 (0x23)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4 : 1;  // 0x23 (0x23)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5 : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FGameUserSettingAudios K2Node_Event_InGameUserSettingAudios;  // 0x28 (0x28)
	struct FGameUserSettingAudios K2Node_Event_InOldGameUserSettingAudios;  // 0x50 (0x50)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_Event_bInForce : 1;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_IsMute_ReturnValue : 1;  // 0x79 (0x79)
	char pad_122_1 : 7;  // 0x7A (0x7A)
	bool CallFunc_IsMute_ReturnValue_2 : 1;  // 0x7A (0x7A)
	char pad_123_1 : 7;  // 0x7B (0x7B)
	bool CallFunc_IsMute_ReturnValue_3 : 1;  // 0x7B (0x7B)


}; 
 
 