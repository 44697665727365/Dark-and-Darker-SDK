#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptions.WB_MenuOptions_C.
struct F
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptions.WB_MenuOptions_C.Get_ControlsCheckBox_CheckedState_1
struct FGet_ControlsCheckBox_CheckedState_1
{
	uint8_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptions.WB_MenuOptions_C.ExecuteUbergraph_WB_MenuOptions
struct FExecuteUbergraph_WB_MenuOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	uint8_t K2Node_CustomEvent_InVisibility;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x5 (0x5)
	char pad_6_1 : 7;  // 0x6 (0x6)
	bool CallFunc_SelectTabByID_ReturnValue : 1;  // 0x6 (0x6)
	char pad_7_1 : 7;  // 0x7 (0x7)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x7 (0x7)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Array_IsNotEmpty_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x9 (0x9)
	char pad_10[2];  // 0xA (0xA)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xC (0xC)


}; 
 
 // Function WB_MenuOptions.WB_MenuOptions_C.BP_GetDesiredFocusTarget
// Size: 0x10(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)
	struct UWidget* CallFunc_GetActiveWidget_ReturnValue;  // 0x8 (0x8)


}; 
 
 