#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.ExecuteUbergraph_BP_SkeletonRoyalGuard
struct FExecuteUbergraph_BP_SkeletonRoyalGuard
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_RemoveGameplayTag_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x21 (0x21)
	char pad_34_1 : 7;  // 0x22 (0x22)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x22 (0x22)
	char pad_35[5];  // 0x23 (0x23)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x28 (0x28)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasMatchingGameplayTag_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x39 (0x39)
	char pad_58_1 : 7;  // 0x3A (0x3A)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2 : 1;  // 0x3A (0x3A)
	char pad_59_1 : 7;  // 0x3B (0x3B)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue_3 : 1;  // 0x3B (0x3B)
	int32_t Temp_int_Variable;  // 0x3C (0x3C)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x40 (0x40)
	char pad_68_1 : 7;  // 0x44 (0x44)
	bool CallFunc_Array_RemoveItem_ReturnValue : 1;  // 0x44 (0x44)
	char pad_69[3];  // 0x45 (0x45)
	struct UAbilityAsync_WaitGameplayTagRemoved* CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x51 (0x51)
	char pad_82[6];  // 0x52 (0x52)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x58 (0x58)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x108 (0x108)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x1B8 (0x1B8)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_RemoveGameplayTag_ReturnValue_2 : 1;  // 0x1C8 (0x1C8)
	char CallFunc_MakeLiteralByte_ReturnValue;  // 0x1C9 (0x1C9)
	char pad_458[2];  // 0x1CA (0x1CA)
	float CallFunc_Delay_Duration_ImplicitCast;  // 0x1CC (0x1CC)


}; 
 
 // Function BP_SkeletonRoyalGuard.BP_SkeletonRoyalGuard_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 