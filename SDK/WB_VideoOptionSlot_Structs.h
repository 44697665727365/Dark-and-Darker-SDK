#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnSelectedSlotIdx
// Size: 0x8(Inherited: 0x8)
struct FOnSelectedSlotIdx : FOnSelectedSlotIdx
{
	int32_t NewValue;  // 0x0 (0x0)
	int32_t OldValue;  // 0x4 (0x4)


}; 
 
 // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnVideoSettingChanged
struct FOnVideoSettingChanged
{
	int32_t QualitySetting;  // 0x0 (0x0)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x4)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x10 (0x10)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x14 (0x14)
	struct UWB_OptionCheckButton01_C* CallFunc_Array_Get_Item;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x20 (0x20)


}; 
 
 // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.ExecuteUbergraph_WB_VideoOptionSlot
struct FExecuteUbergraph_WB_VideoOptionSlot
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	int32_t Temp_int_Array_Index_Variable;  // 0x14 (0x14)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x18 (0x18)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x1C (0x1C)
	int32_t CallFunc_Array_Add_ReturnValue;  // 0x20 (0x20)
	int32_t CallFunc_Array_Add_ReturnValue_2;  // 0x24 (0x24)
	int32_t CallFunc_Array_Add_ReturnValue_3;  // 0x28 (0x28)
	int32_t CallFunc_Array_Add_ReturnValue_4;  // 0x2C (0x2C)
	struct UWB_OptionCheckButton01_C* CallFunc_Array_Get_Item;  // 0x30 (0x30)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)
	int32_t K2Node_Event_NewValue;  // 0x40 (0x40)
	int32_t K2Node_Event_OldValue;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x48 (0x48)


}; 
 
 // Function WB_VideoOptionSlot.WB_VideoOptionSlot_C.OnFocusReceived
// Size: 0x1C0(Inherited: 0x100)
struct FOnFocusReceived : FOnFocusReceived
{
	struct FGeometry MyGeometry;  // 0x0 (0x0)
	struct FFocusEvent InFocusEvent;  // 0x40 (0x40)
	struct FEventReply ReturnValue;  // 0x48 (0x48)
	char pad_512_1 : 7;  // 0x200 (0x200)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x100 (0x100)
	char pad_513_1 : 7;  // 0x201 (0x201)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_2 : 1;  // 0x101 (0x101)
	char pad_514_1 : 7;  // 0x202 (0x202)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_3 : 1;  // 0x102 (0x102)
	char pad_515_1 : 7;  // 0x203 (0x203)
	bool CallFunc_EqualEqual_IntInt_ReturnValue_4 : 1;  // 0x103 (0x103)
	struct FEventReply CallFunc_Unhandled_ReturnValue;  // 0x108 (0x108)


}; 
 
 