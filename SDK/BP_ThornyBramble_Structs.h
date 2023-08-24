#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_ThornyBramble.BP_ThornyBramble_C.GetRecoveryTime
struct FGetRecoveryTime
{
	double Result;  // 0x0 (0x0)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.CreateThornyBrambleMaterial
struct FCreateThornyBrambleMaterial
{
	double MaxFrame;  // 0x0 (0x0)
	double EndFrame;  // 0x8 (0x8)
	double StartFrame;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x18 (0x18)
	char pad_25_1 : 7;  // 0x19 (0x19)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x19 (0x19)
	char pad_26_1 : 7;  // 0x1A (0x1A)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x1A (0x1A)
	char pad_27[5];  // 0x1B (0x1B)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x20 (0x20)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x28 (0x28)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;  // 0x30 (0x30)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.ExecuteUbergraph_BP_ThornyBramble
struct FExecuteUbergraph_BP_ThornyBramble
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x16 (0x16)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.SetMIDParameterValue
struct FSetMIDParameterValue
{
	struct UMaterialInstanceDynamic* Material Instance;  // 0x0 (0x0)
	double StartFrame;  // 0x8 (0x8)
	double EndFrame;  // 0x10 (0x10)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x18 (0x18)
	double CallFunc_RandomFloat_ReturnValue;  // 0x20 (0x20)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x30 (0x30)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x38 (0x38)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x3C (0x3C)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_3;  // 0x40 (0x40)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_4;  // 0x44 (0x44)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.GetDestroyHitCount
struct FGetDestroyHitCount
{
	int32_t Result;  // 0x0 (0x0)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.IsImmuneToDamage
struct FIsImmuneToDamage
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.IsRecovery
struct FIsRecovery
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Result : 1;  // 0x0 (0x0)


}; 
 
 // Function BP_ThornyBramble.BP_ThornyBramble_C.UpdateThornyBrambleMaterial
struct FUpdateThornyBrambleMaterial
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool IsActivate : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	double MaxFrame;  // 0x8 (0x8)
	double EndFrame;  // 0x10 (0x10)
	double StartFrame;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x22 (0x22)


}; 
 
 