#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_SetFloatValue.BTD_SetFloatValue_C.Add
struct FAdd
{
	double FloatValue Before Change;  // 0x0 (0x0)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Divide
struct FDivide
{
	double FloatValue Before Change;  // 0x0 (0x0)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Multiply
struct FMultiply
{
	double FloatValue Before Change;  // 0x0 (0x0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BTD_SetFloatValue.BTD_SetFloatValue_C.Subtract
struct FSubtract
{
	double FloatValue Before Change;  // 0x0 (0x0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BTD_SetFloatValue.BTD_SetFloatValue_C.PerformConditionCheckAI
// Size: 0x60(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x20 (0x20)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x24 (0x24)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x28 (0x28)
	char pad_62_1 : 7;  // 0x3E (0x3E)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x30 (0x30)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast;  // 0x34 (0x34)
	float CallFunc_SetValueAsFloat_FloatValue_ImplicitCast_2;  // 0x38 (0x38)
	double CallFunc_Add_FloatValue_Before_Change_ImplicitCast;  // 0x40 (0x40)
	double CallFunc_Subtract_FloatValue_Before_Change_ImplicitCast;  // 0x48 (0x48)
	double CallFunc_Multiply_FloatValue_Before_Change_ImplicitCast;  // 0x50 (0x50)
	double CallFunc_Divide_FloatValue_Before_Change_ImplicitCast;  // 0x58 (0x58)


}; 
 
 