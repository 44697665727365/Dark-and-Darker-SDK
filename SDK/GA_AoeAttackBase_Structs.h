#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_AoeAttackBase.GA_AoeAttackBase_C.ExecuteUbergraph_GA_AoeAttackBase
struct FExecuteUbergraph_GA_AoeAttackBase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	int32_t Temp_int_Array_Index_Variable;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_K2_CommitAbility_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17[3];  // 0x11 (0x11)
	int32_t Temp_int_Loop_Counter_Variable_2;  // 0x14 (0x14)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x18 (0x18)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool CallFunc_GetTargetArray_ReturnValue : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	int32_t CallFunc_Array_Find_ReturnValue;  // 0x24 (0x24)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue_2 : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t CallFunc_Array_Length_ReturnValue_3;  // 0x3C (0x3C)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool CallFunc_NotEqual_IntInt_ReturnValue_2 : 1;  // 0x40 (0x40)
	char pad_65_1 : 7;  // 0x41 (0x41)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x41 (0x41)
	char pad_66_1 : 7;  // 0x42 (0x42)
	bool CallFunc_AddGameplayTag_ReturnValue : 1;  // 0x42 (0x42)
	char pad_67[5];  // 0x43 (0x43)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x48 (0x48)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue;  // 0xF8 (0xF8)
	int32_t Temp_int_Array_Index_Variable_2;  // 0x108 (0x108)
	char pad_268[4];  // 0x10C (0x10C)
	struct ADCCharacterBase* CallFunc_Array_Get_Item_2;  // 0x110 (0x110)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_AddGameplayTag_ReturnValue_2 : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyPremadeSpecArray_ReturnValue_2;  // 0x120 (0x120)


}; 
 
 // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Target Type
struct FFilter Target Type
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter Tags
struct FFilter Tags
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x18 (0x18)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x28 (0x28)
	char pad_41[3];  // 0x29 (0x29)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x2C (0x2C)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)


}; 
 
 // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Filter UnTags
struct FFilter UnTags
{
	int32_t Temp_int_Array_Index_Variable;  // 0x0 (0x0)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x4 (0x4)
	int32_t CallFunc_Add_IntInt_ReturnValue;  // 0x8 (0x8)
	char pad_12_1 : 7;  // 0xC (0xC)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0xC (0xC)
	char pad_13_1 : 7;  // 0xD (0xD)
	bool CallFunc_NotEqual_IntInt_ReturnValue : 1;  // 0xD (0xD)
	char pad_14_1 : 7;  // 0xE (0xE)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0xE (0xE)
	char pad_15[1];  // 0xF (0xF)
	int32_t CallFunc_Add_IntInt_ReturnValue_2;  // 0x10 (0x10)
	struct FGameplayTag CallFunc_Array_Get_Item;  // 0x14 (0x14)
	char pad_28[4];  // 0x1C (0x1C)
	struct TScriptInterface<IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput;  // 0x20 (0x20)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_Less_IntInt_ReturnValue : 1;  // 0x38 (0x38)


}; 
 
 // Function GA_AoeAttackBase.GA_AoeAttackBase_C.Set Variables
struct FSet Variables
{
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x0 (0x0)
	int32_t CallFunc_Array_Length_ReturnValue_2;  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct ABP_DCAoeDefineBase_AutoActive_C* K2Node_DynamicCast_AsBP_DCAoe_Define_Base_Auto_Active;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x18 (0x18)


}; 
 
 