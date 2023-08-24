#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Calculate Liquid Amount
struct FCalculate Liquid Amount
{
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x0 (0x0)
	double CallFunc_Lerp_ReturnValue;  // 0x8 (0x8)


}; 
 
 // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ExecuteUbergraph_BP_DrinkPotionActor
struct FExecuteUbergraph_BP_DrinkPotionActor
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	float K2Node_Event_DeltaSeconds;  // 0x8 (0x8)
	char pad_12[4];  // 0xC (0xC)
	double K2Node_CustomEvent_Duration;  // 0x10 (0x10)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x18 (0x18)
	int32_t K2Node_Event_InCount;  // 0x20 (0x20)
	char pad_36_1 : 7;  // 0x24 (0x24)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x24 (0x24)
	char pad_37_1 : 7;  // 0x25 (0x25)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x25 (0x25)
	char pad_38[2];  // 0x26 (0x26)
	float CallFunc_K2_GetScalarParameterValue_ReturnValue;  // 0x28 (0x28)
	char pad_44_1 : 7;  // 0x2C (0x2C)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x2C (0x2C)
	char pad_45[3];  // 0x2D (0x2D)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x40 (0x40)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x48 (0x48)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x50 (0x50)
	struct UMaterialInterface* CallFunc_GetMaterial_ReturnValue;  // 0x58 (0x58)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x60 (0x60)
	double K2Node_VariableSet_InitialAmount_ImplicitCast;  // 0x68 (0x68)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x70 (0x70)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x74 (0x74)


}; 
 
 // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.SetDrinkingDuration
struct FSetDrinkingDuration
{
	double Duration;  // 0x0 (0x0)


}; 
 
 // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.Set Height Parameter
struct FSet Height Parameter
{
	double New Height;  // 0x0 (0x0)
	struct UMaterialInstanceDynamic* Material Instance;  // 0x8 (0x8)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x10 (0x10)


}; 
 
 // Function BP_DrinkPotionActor.BP_DrinkPotionActor_C.ReceiveTick
// Size: 0x4(Inherited: 0x4)
struct FReceiveTick : FReceiveTick
{
	float DeltaSeconds;  // 0x0 (0x0)


}; 
 
 