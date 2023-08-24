#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_NickName.WB_NickName_C.ExecuteUbergraph_WB_NickName
struct FExecuteUbergraph_WB_NickName
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString K2Node_Event_NewValue;  // 0x8 (0x8)
	struct FString K2Node_Event_OldValue;  // 0x18 (0x18)
	struct FText CallFunc_Conv_StringToText_ReturnValue;  // 0x28 (0x28)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData;  // 0x40 (0x40)
	struct FText K2Node_CustomEvent_FormatText;  // 0x90 (0x90)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array;  // 0xA8 (0xA8)
	struct FText CallFunc_Format_ReturnValue;  // 0xB8 (0xB8)
	struct FText CallFunc_Conv_StringToText_ReturnValue_2;  // 0xD0 (0xD0)
	struct FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_2;  // 0xE8 (0xE8)
	struct TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2;  // 0x138 (0x138)
	struct FText CallFunc_Format_ReturnValue_2;  // 0x148 (0x148)


}; 
 
 // Function WB_NickName.WB_NickName_C.OnNickNameStr
// Size: 0x20(Inherited: 0x20)
struct FOnNickNameStr : FOnNickNameStr
{
	struct FString NewValue;  // 0x0 (0x0)
	struct FString OldValue;  // 0x10 (0x10)


}; 
 
 // Function WB_NickName.WB_NickName_C.SetNickNameFormat
struct FSetNickNameFormat
{
	struct FText FormatText;  // 0x0 (0x0)


}; 
 
 