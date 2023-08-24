#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.BP_GetDesiredFocusTarget
// Size: 0x8(Inherited: 0x8)
struct FBP_GetDesiredFocusTarget : FBP_GetDesiredFocusTarget
{
	struct UWidget* ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateButtonText
// Size: 0x30(Inherited: 0x30)
struct FUpdateButtonText : FUpdateButtonText
{
	struct FText InLeftText;  // 0x0 (0x0)
	struct FText InRightText;  // 0x18 (0x18)


}; 
 
 // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.UpdateDetailText
// Size: 0x18(Inherited: 0x18)
struct FUpdateDetailText : FUpdateDetailText
{
	struct FText InDetailText;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.RefreshDetailText
struct FRefreshDetailText
{
	int32_t InValue;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	int64_t CallFunc_Conv_IntToInt64_ReturnValue;  // 0x8 (0x8)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x10 (0x10)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0x60 (0x60)
	struct FText CallFunc_Format_ReturnValue;  // 0x70 (0x70)


}; 
 
 // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.OnVisibilityChanged_Event
struct FOnVisibilityChanged_Event
{
	uint8_t Invisibility;  // 0x0 (0x0)


}; 
 
 // Function WB_MenuOptionPopup.WB_MenuOptionPopup_C.ExecuteUbergraph_WB_MenuOptionPopup
struct FExecuteUbergraph_WB_MenuOptionPopup
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FText K2Node_Event_InDetailText;  // 0x8 (0x8)
	struct FText K2Node_Event_InLeftText;  // 0x20 (0x20)
	struct FText K2Node_Event_InRightText;  // 0x38 (0x38)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x50 (0x50)
	uint8_t K2Node_CustomEvent_InVisibility;  // 0x60 (0x60)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x61 (0x61)
	char pad_98_1 : 7;  // 0x62 (0x62)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x62 (0x62)
	char pad_99_1 : 7;  // 0x63 (0x63)
	bool CallFunc_BooleanOR_ReturnValue : 1;  // 0x63 (0x63)


}; 
 
 