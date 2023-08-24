#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SceneRender.BP_SceneRender_C.SetRender
struct FSetRender
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0xC (0xC)
	struct FString CallFunc_Array_Get_Item;  // 0x10 (0x10)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x28 (0x28)


}; 
 
 // Function BP_SceneRender.BP_SceneRender_C.Revert
struct FRevert
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FString CallFunc_Array_Get_Item;  // 0x8 (0x8)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x1C (0x1C)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x2C (0x2C)


}; 
 
 // Function BP_SceneRender.BP_SceneRender_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_SceneRender.BP_SceneRender_C.ExecuteUbergraph_BP_SceneRender
struct FExecuteUbergraph_BP_SceneRender
{
	int32_t EntryPoint;  // 0x0 (0x0)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x4 (0x4)


}; 
 
 