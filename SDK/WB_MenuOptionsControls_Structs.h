#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.UpdateCultureButton
struct FUpdateCultureButton
{
	struct FString culture;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnSliderHovered
struct FOnSliderHovered
{
	struct UWB_MenuOptionSlot_Slider_C* Slider;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.DoCustomNavigation_Language
struct FDoCustomNavigation_Language
{
	uint8_t Navigation;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UWidget* ReturnValue;  // 0x8 (0x8)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x10 (0x10)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x28 (0x28)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_2 : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	struct FSlateColor K2Node_MakeStruct_SlateColor_3;  // 0x40 (0x40)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_3 : 1;  // 0x54 (0x54)
	char pad_85[3];  // 0x55 (0x55)
	struct FSlateColor K2Node_MakeStruct_SlateColor_4;  // 0x58 (0x58)
	struct FSlateColor K2Node_MakeStruct_SlateColor_5;  // 0x6C (0x6C)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_4 : 1;  // 0x80 (0x80)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue_5 : 1;  // 0x81 (0x81)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnOptionWidgetHovered
struct FOnOptionWidgetHovered
{
	struct UWidgetSwitcher* Btn Switcher;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.OnGameUserSettingControls
// Size: 0x50(Inherited: 0x50)
struct FOnGameUserSettingControls : FOnGameUserSettingControls
{
	struct FGameUserSettingControls NewValue;  // 0x0 (0x0)
	struct FGameUserSettingControls OldValue;  // 0x28 (0x28)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.InitOptionWidgetBinding
struct FInitOptionWidgetBinding
{
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x8 (0x8)
	char pad_9[3];  // 0x9 (0x9)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC (0xC)
	char pad_28[4];  // 0x1C (0x1C)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_2;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x2C (0x2C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_3;  // 0x3C (0x3C)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_4;  // 0x4C (0x4C)
	char pad_92[4];  // 0x5C (0x5C)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_3;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct UWB_MenuOptionToggleSwitchSlot_C* K2Node_DynamicCast_AsWB_Menu_Option_Toggle_Switch_Slot_4;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_5;  // 0x7C (0x7C)
	char pad_140[4];  // 0x8C (0x8C)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_DynamicCast_AsWB_Menu_Option_Slot_Slider;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_DynamicCast_bSuccess_5 : 1;  // 0x98 (0x98)


}; 
 
 // Function WB_MenuOptionsControls.WB_MenuOptionsControls_C.ExecuteUbergraph_WB_MenuOptionsControls
struct FExecuteUbergraph_WB_MenuOptionsControls
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FSlateColor K2Node_MakeStruct_SlateColor;  // 0x4 (0x4)
	struct FSlateColor K2Node_MakeStruct_SlateColor_2;  // 0x18 (0x18)
	struct FSlateColor K2Node_MakeStruct_SlateColor_3;  // 0x2C (0x2C)
	struct FSlateColor K2Node_MakeStruct_SlateColor_4;  // 0x40 (0x40)
	struct FSlateColor K2Node_MakeStruct_SlateColor_5;  // 0x54 (0x54)
	struct FString K2Node_CustomEvent_Culture;  // 0x68 (0x68)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_EqualEqual_StriStri_ReturnValue : 1;  // 0x78 (0x78)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_EqualEqual_StriStri_ReturnValue_2 : 1;  // 0x79 (0x79)
	char pad_122_1 : 7;  // 0x7A (0x7A)
	bool CallFunc_EqualEqual_StriStri_ReturnValue_3 : 1;  // 0x7A (0x7A)
	char pad_123_1 : 7;  // 0x7B (0x7B)
	bool CallFunc_EqualEqual_StriStri_ReturnValue_4 : 1;  // 0x7B (0x7B)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool CallFunc_EqualEqual_StriStri_ReturnValue_5 : 1;  // 0x7C (0x7C)
	char pad_125[3];  // 0x7D (0x7D)
	struct FSlateColor K2Node_MakeStruct_SlateColor_6;  // 0x80 (0x80)
	struct FSlateColor K2Node_MakeStruct_SlateColor_7;  // 0x94 (0x94)
	struct FSlateColor K2Node_MakeStruct_SlateColor_8;  // 0xA8 (0xA8)
	struct FSlateColor K2Node_MakeStruct_SlateColor_9;  // 0xBC (0xBC)
	struct FGameUserSettingControls K2Node_Event_NewValue;  // 0xD0 (0xD0)
	struct FGameUserSettingControls K2Node_Event_OldValue;  // 0xF8 (0xF8)
	struct FSlateColor K2Node_MakeStruct_SlateColor_10;  // 0x120 (0x120)
	struct FSlateColor K2Node_MakeStruct_SlateColor_11;  // 0x134 (0x134)
	struct FSlateColor K2Node_MakeStruct_SlateColor_12;  // 0x148 (0x148)
	struct FSlateColor K2Node_MakeStruct_SlateColor_13;  // 0x15C (0x15C)
	struct FSlateColor K2Node_MakeStruct_SlateColor_14;  // 0x170 (0x170)
	struct FSlateColor K2Node_MakeStruct_SlateColor_15;  // 0x184 (0x184)
	struct FSlateColor K2Node_MakeStruct_SlateColor_16;  // 0x198 (0x198)
	char pad_428[4];  // 0x1AC (0x1AC)
	struct UWB_MenuOptionSlot_Slider_C* K2Node_CustomEvent_Slider;  // 0x1B0 (0x1B0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x1B8 (0x1B8)
	char pad_441[3];  // 0x1B9 (0x1B9)
	struct FSlateColor K2Node_MakeStruct_SlateColor_17;  // 0x1BC (0x1BC)
	struct FSlateColor K2Node_MakeStruct_SlateColor_18;  // 0x1D0 (0x1D0)
	struct FSlateColor K2Node_MakeStruct_SlateColor_19;  // 0x1E4 (0x1E4)
	struct FSlateColor K2Node_MakeStruct_SlateColor_20;  // 0x1F8 (0x1F8)
	struct FSlateColor K2Node_MakeStruct_SlateColor_21;  // 0x20C (0x20C)
	struct FSlateColor K2Node_MakeStruct_SlateColor_22;  // 0x220 (0x220)
	struct FSlateColor K2Node_MakeStruct_SlateColor_23;  // 0x234 (0x234)
	struct FSlateColor K2Node_MakeStruct_SlateColor_24;  // 0x248 (0x248)
	struct FSlateColor K2Node_MakeStruct_SlateColor_25;  // 0x25C (0x25C)
	struct FSlateColor K2Node_MakeStruct_SlateColor_26;  // 0x270 (0x270)
	struct FSlateColor K2Node_MakeStruct_SlateColor_27;  // 0x284 (0x284)
	struct FSlateColor K2Node_MakeStruct_SlateColor_28;  // 0x298 (0x298)
	struct FSlateColor K2Node_MakeStruct_SlateColor_29;  // 0x2AC (0x2AC)
	struct FSlateColor K2Node_MakeStruct_SlateColor_30;  // 0x2C0 (0x2C0)
	struct FSlateColor K2Node_MakeStruct_SlateColor_31;  // 0x2D4 (0x2D4)
	struct FSlateColor K2Node_MakeStruct_SlateColor_32;  // 0x2E8 (0x2E8)
	struct FSlateColor K2Node_MakeStruct_SlateColor_33;  // 0x2FC (0x2FC)
	struct FSlateColor K2Node_MakeStruct_SlateColor_34;  // 0x310 (0x310)
	struct FSlateColor K2Node_MakeStruct_SlateColor_35;  // 0x324 (0x324)


}; 
 
 