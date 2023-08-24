#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareFloatValue
struct FCompareFloatValue
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float CallFunc_GetBlackboardValueAsFloat_ReturnValue;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;  // 0x10 (0x10)
	double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;  // 0x18 (0x18)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x20 (0x20)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x28 (0x28)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x30 (0x30)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0x38 (0x38)


}; 
 
 // Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareIntValue
struct FCompareIntValue
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t CallFunc_GetBlackboardValueAsInt_ReturnValue;  // 0x4 (0x4)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0xA (0xA)
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xE (0xE)


}; 
 
 // Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareVectorValue
struct FCompareVectorValue
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct FVector CallFunc_GetBlackboardValueAsVector_ReturnValue;  // 0x8 (0x8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x20 (0x20)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x38 (0x38)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_GetValueAsVector_ReturnValue;  // 0x58 (0x58)
	char pad_112_1 : 7;  // 0x70 (0x70)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x70 (0x70)
	char pad_113[7];  // 0x71 (0x71)
	struct FVector CallFunc_GetBlackboardValueAsVector_ReturnValue_2;  // 0x78 (0x78)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x90 (0x90)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;  // 0xA0 (0xA0)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_2;  // 0xA8 (0xA8)


}; 
 
 // Function BTD_CheckBBValue.BTD_CheckBBValue_C.PerformConditionCheckAI
// Size: 0x17(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool CallFunc_CompareVectorValue_Bool : 1;  // 0x11 (0x11)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool CallFunc_CompareIntValue_Bool : 1;  // 0x12 (0x12)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool CallFunc_CompareFloatValue_Bool : 1;  // 0x13 (0x13)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_GetBlackboardValueAsBool_ReturnValue : 1;  // 0x14 (0x14)
	char pad_45_1 : 7;  // 0x2D (0x2D)
	bool CallFunc_EqualEqual_BoolBool_ReturnValue : 1;  // 0x15 (0x15)
	char pad_46_1 : 7;  // 0x2E (0x2E)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x16 (0x16)


}; 
 
 