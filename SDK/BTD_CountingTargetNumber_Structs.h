#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterRange
struct FFilterRange
{
	char pad_0_1 : 7;  // 0x0 (0x0) 8690 (0x16FAD03EBC0) (0x0 (0x0))
	bool bool : 1;  // 0x0 (0x0)
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool CallFunc_Get_Max_Distance_From_Perception_Result : 1;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	double CallFunc_Get_Max_Distance_From_Perception_Return_Value;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_Get_Max_Distance_From_Perception_Result_2 : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	double CallFunc_Get_Max_Distance_From_Perception_Return_Value_2;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33[3];  // 0x21 (0x21)
	float CallFunc_GetVisionAngle_ReturnValue;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool CallFunc_FilterTargetsWithinXYRange_ReturnValue : 1;  // 0x29 (0x29)
	char pad_42_1 : 7;  // 0x2A (0x2A)
	bool CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_ReturnValue_2 : 1;  // 0x2A (0x2A)
	char pad_43_1 : 7;  // 0x2B (0x2B)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x2B (0x2B)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_FilterTargetsWithinDistance_ReturnValue : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	float CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_AllowedAngle_ImplicitCast;  // 0x30 (0x30)
	float CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_DirectionalAngle_ImplicitCast;  // 0x34 (0x34)
	float CallFunc_FilterTargetsWithinDirectionAngleAndAllowedAngle_DirectionalAngle_ImplicitCast_2;  // 0x38 (0x38)
	float CallFunc_FilterTargetsWithinXYRange_XYRange_ImplicitCast;  // 0x3C (0x3C)
	float CallFunc_FilterTargetsWithinDistance_Distance_ImplicitCast;  // 0x40 (0x40)


}; 
 
 // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterTags
struct FFilterTags
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x7F (0x7FF7D35967D0 (0x17)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x0 (0x0) (0x0 (0x0))
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x24 (0x24)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_FilterUnTagedTargets_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	struct FGameplayTag CallFunc_Array_Get_Item_2;  // 0x34 (0x34)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_FilterTagedTargets_ReturnValue : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_Less_IntInt_ReturnValue_3 : 1;  // 0x7FF7CE0B0110 (0x7FF7CE0B0110)
	char pad_66[2];  // 0x42 (0x42)
	int32_t CallFunc_Array_Length_ReturnValue_4;  // 0x44 (0x44)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool CallFunc_Less_IntInt_ReturnValue_4 : 1;  // 0x7FF7CCAA9AC0 (0x7FF7CCAA9AC0)


}; 
 
 // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.GetTargetArray
struct FGetTargetArray
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	int32_t Temp_int_Array_Index_Variable;  // 0x4 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x8 (0x8)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0xC (0xC)
	struct TArray<struct AActor*> K2Node_MakeArray_Array;  // 0x10 (0x0)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_2;  // 0x20 (0x20)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x48 (0x48)
	char pad_88_1 : 7;  // 0x58 (0x58)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x58 (0x58)
	char pad_89[3];  // 0x59 (0x59)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x5C (0x5C)
	struct AActor* CallFunc_Array_Get_Item;  // 0x60 (0x60)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x68 (0x68)
	char pad_105[7];  // 0x69 (0x69)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x70 (0x70)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x78 (0x78)
	char pad_121[3];  // 0x79 (0x79)
	int32_t CallFunc_Array_AddUnique_ReturnValue;  // 0x7C (0x7C)


}; 
 
 // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.PerformConditionCheckAI
// Size: 0xB8(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	int32_t Temp_int_Array_Index_Variable;  // 0x14 (0x14)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_53_1 : 7;  // 0x35 (0x35)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	struct UAIPerceptionComponent* CallFunc_GetAIPerceptionComponent_ReturnValue;  // 0x28 (0x28)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x34 (0x34)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x38 (0x38)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x3C (0x3C)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x40 (0x40)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x44 (0x44)
	struct FPrimaryAssetId CallFunc_Array_Get_Item;  // 0x48 (0x48)
	char pad_102_1 : 7;  // 0x66 (0x66)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x58 (0x58)
	char pad_103_1 : 7;  // 0x67 (0x67)
	bool CallFunc_FilterMonsterTargetsByID_ReturnValue : 1;  // 0x59 (0x59)
	int32_t CallFunc_Array_Length_ReturnValue_4;  // 0x5C (0x5C)
	char pad_108_1 : 7;  // 0x6C (0x6C)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x60 (0x60)
	float CallFunc_GetBlackboardValueAsFloat_ReturnValue;  // 0x64 (0x64)
	char pad_113_1 : 7;  // 0x71 (0x71)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x68 (0x68)
	float CallFunc_Conv_IntToFloat_ReturnValue;  // 0x6C (0x6C)
	char pad_118_1 : 7;  // 0x76 (0x76)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0x70 (0x70)
	char pad_119_1 : 7;  // 0x77 (0x77)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x71 (0x71)
	char pad_120_1 : 7;  // 0x78 (0x78)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x72 (0x72)
	char pad_121_1 : 7;  // 0x79 (0x79)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x73 (0x73)
	char pad_122_1 : 7;  // 0x7A (0x7A)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x74 (0x74)
	char pad_123_1 : 7;  // 0x7B (0x7B)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0x75 (0x75)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x76 (0x76)
	char pad_125_1 : 7;  // 0x7D (0x7D)
	bool CallFunc_FilterRange_Bool : 1;  // 0x77 (0x77)
	char pad_126_1 : 7;  // 0x7E (0x7E)
	bool CallFunc_FilterTags_Bool : 1;  // 0x78 (0x78)
	char pad_127_1 : 7;  // 0x7F (0x7F)
	bool CallFunc_TargetingType_Bool : 1;  // 0x79 (0x79)
	char pad_128_1 : 7;  // 0x80 (0x80)
	bool CallFunc_GetTargetArray_Bool : 1;  // 0x7A (0x7A)
	char pad_129_1 : 7;  // 0x81 (0x81)
	bool CallFunc_EqualEqual_ObjectObject_ReturnValue : 1;  // 0x7B (0x7B)
	double K2Node_VariableSet_Player_Count_ImplicitCast;  // 0x80 (0x80)
	double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;  // 0x88 (0x88)
	double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;  // 0x90 (0x90)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x98 (0x98)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0xA0 (0xA0)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0xA8 (0xA8)
	double CallFunc_Less_DoubleDouble_A_ImplicitCast;  // 0xB0 (0xB0)


}; 
 
 // Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.TargetingType
struct FTargetingType
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bool : 1;  // 0x0 (0x0)


}; 
 
 