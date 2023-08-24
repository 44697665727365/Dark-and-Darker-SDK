#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Secondary Attack Power
struct FCompare Secondary Attack Power
{
	double Secondary Attack Power;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bool : 1;  // 0x8 (0x8)


}; 
 
 // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Float Value
struct FCompare Float Value
{
	double CompareFloatValue;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bool : 1;  // 0x8 (0x8)
	char pad_9_1 : 7;  // 0x9 (0x9)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x9 (0x9)
	char pad_10_1 : 7;  // 0xA (0xA)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xA (0x7FF7D3388D00 (0x0))
	char pad_11_1 : 7;  // 0xB (0xB)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xB (0xB)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x0 (0x0) (0x0 (0x0))
	char pad_15_1 : 7;  // 0xF (0xF)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0xF (0xF)
	float CallFunc_GetBlackboardValueAsFloat_ReturnValue;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Less_DoubleDouble_ReturnValue_2 : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x16 (0x16)
	char pad_23_1 : 7;  // 0x17 (0x17)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0x17 (0x17)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x0 (0x0) (0x0 (0x0))
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_3 : 1;  // 0x1A (0x1A)
	char pad_27_1 : 7;  // 0x1B (0x1B)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x1B (0x1B)
	char pad_28[4];  // 0x1C (0x1C)
	double CallFunc_EqualEqual_DoubleDouble_B_ImplicitCast;  // 0x0  (0x0 (0x0))
	double CallFunc_NotEqual_DoubleDouble_B_ImplicitCast;  // 0x28 (0x28)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0x30 (0x30)
	double CallFunc_Greater_DoubleDouble_B_ImplicitCast;  // 0x38 (0x38)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;  // 0x40 (0x40)
	double CallFunc_Less_DoubleDouble_B_ImplicitCast;  // 0x48 (0x48)


}; 
 
 // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Move Speed
struct FCompare Move Speed
{
	double Move Speed;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bool : 1;  // 0x8 (0x8)


}; 
 
 // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Primary Attack Power
struct FCompare Primary Attack Power
{
	double Primary Attack Power;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool bool : 1;  // 0x8 (0x8)


}; 
 
 // Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.PerformConditionCheckAI
// Size: 0x98(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x0 (0x0)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute : 1;  // 0x21 (0x21)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;  // 0x24 (0x24)
	char pad_55_1 : 7;  // 0x37 (0x37)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_2 : 1;  // 0x28 (0x28)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_2;  // 0x2C (0x2C)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool CallFunc_Compare_Float_Value_Bool : 1;  // 0x30 (0x30)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool CallFunc_Compare_Float_Value_Bool_2 : 1;  // 0x31 (0x31)
	char pad_62_1 : 7;  // 0x3E (0x3E)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_3 : 1;  // 0x32 (0x32)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_3;  // 0x34 (0x34)
	char pad_67_1 : 7;  // 0x43 (0x43)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_4 : 1;  // 0x38 (0x38)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_4;  // 0x3C (0x3C)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Compare_Float_Value_Bool_3 : 1;  // 0x40 (0x40)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute_5 : 1;  // 0x41 (0x41)
	float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue_5;  // 0x44 (0x44)
	char pad_78_1 : 7;  // 0x4E (0x4E)
	bool CallFunc_Compare_Float_Value_Bool_4 : 1;  // 0x48 (0x48)
	char pad_79_1 : 7;  // 0x4F (0x4F)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x49 (0x49)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x50 (0x50)
	double CallFunc_Multiply_IntFloat_ReturnValue;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool CallFunc_Compare_Float_Value_Bool_5 : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)
	double CallFunc_Compare_Float_Value_CompareFloatValue_ImplicitCast;  // 0x68 (0x68)
	double CallFunc_Compare_Float_Value_CompareFloatValue_ImplicitCast_2;  // 0x70 (0x70)
	double CallFunc_Compare_Float_Value_CompareFloatValue_ImplicitCast_3;  // 0x78 (0x78)
	double CallFunc_Divide_DoubleDouble_B_ImplicitCast;  // 0x80 (0x80)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0x88 (0x88)
	double CallFunc_Compare_Float_Value_CompareFloatValue_ImplicitCast_4;  // 0x90 (0x90)


}; 
 
 