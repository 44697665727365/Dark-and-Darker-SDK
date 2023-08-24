#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_SetBBValue.BTT_SetBBValue_C.FloatSet
struct FFloatSet
{
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x10 (0x10)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x18 (0x18)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x20 (0x20)
	float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast;  // 0x28 (0x28)
	float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_2;  // 0x2C (0x2C)
	float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_3;  // 0x30 (0x30)
	float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_4;  // 0x34 (0x34)
	float CallFunc_SetBlackboardValueAsFloat_Value_ImplicitCast_5;  // 0x38 (0x38)


}; 
 
 // Function BTT_SetBBValue.BTT_SetBBValue_C.ExecuteUbergraph_BTT_SetBBValue
struct FExecuteUbergraph_BTT_SetBBValue
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x18 (0x18)
	char pad_25[3];  // 0x19 (0x19)
	int32_t CallFunc_GetBlackboardValueAsInt_ReturnValue;  // 0x1C (0x1C)
	float CallFunc_GetBlackboardValueAsFloat_ReturnValue;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37[3];  // 0x25 (0x25)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x30 (0x30)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65[3];  // 0x41 (0x41)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x44 (0x44)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x48 (0x48)
	int32_t CallFunc_RandomIntegerInRange_ReturnValue;  // 0x4C (0x4C)
	double K2Node_VariableSet_BlackBoardFloatValue_ImplicitCast;  // 0x50 (0x50)


}; 
 
 // Function BTT_SetBBValue.BTT_SetBBValue_C.IntSet
struct FIntSet
{
	int32_t CallFunc_Divide_IntInt_ReturnValue;  // 0x0 (0x0)
	int32_t CallFunc_Multiply_IntInt_ReturnValue;  // 0x4 (0x4)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x10 (0x10)


}; 
 
 // Function BTT_SetBBValue.BTT_SetBBValue_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 