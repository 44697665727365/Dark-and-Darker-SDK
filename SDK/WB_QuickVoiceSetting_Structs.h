#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.OnbVoipGlobal
// Size: 0x2(Inherited: 0x2)
struct FOnbVoipGlobal : FOnbVoipGlobal
{
	char pad_2_1 : 7;  // 0x2 (0x2)
	bool NewValue : 1;  // 0x0 (0x0)
	char pad_3_1 : 7;  // 0x3 (0x3)
	bool OldValue : 1;  // 0x1 (0x1)


}; 
 
 // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.PreConstruct
// Size: 0x1(Inherited: 0x1)
struct FPreConstruct : FPreConstruct
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool IsDesignTime : 1;  // 0x0 (0x0)


}; 
 
 // Function WB_QuickVoiceSetting.WB_QuickVoiceSetting_C.ExecuteUbergraph_WB_QuickVoiceSetting
struct FExecuteUbergraph_WB_QuickVoiceSetting
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FText Temp_text_Variable;  // 0x8 (0x8)
	struct FText Temp_text_Variable_2;  // 0x20 (0x20)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_Event_IsDesignTime : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool K2Node_Event_NewValue : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool K2Node_Event_OldValue : 1;  // 0x3A (0x3A)


}; 
 
 