#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.ExecuteUbergraph_BP_SkeletonGuardman_Nightmare
struct FExecuteUbergraph_BP_SkeletonGuardman_Nightmare
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FGameplayTag> K2Node_MakeArray_Array;  // 0x8 (0x8)
	struct FGameplayTagContainer CallFunc_MakeGameplayTagContainerFromArray_ReturnValue;  // 0x18 (0x18)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x39 (0x39)
	char pad_58[6];  // 0x3A (0x3A)
	struct ADCCharacterBase* K2Node_Event_InInstigator;  // 0x40 (0x40)
	struct AActor* K2Node_Event_InEffectCauser;  // 0x48 (0x48)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array_2;  // 0x50 (0x50)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x60 (0x60)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x70 (0x70)
	int32_t K2Node_Event_InCount;  // 0x78 (0x78)
	char pad_124_1 : 7;  // 0x7C (0x7C)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x7C (0x7C)
	char pad_125_1 : 7;  // 0x7D (0x7D)
	bool CallFunc_EqualEqual_GameplayTag_ReturnValue : 1;  // 0x7D (0x7D)
	char pad_126[2];  // 0x7E (0x7E)
	struct FDelegate Temp_delegate_Variable;  // 0x80 (0x80)
	int32_t CallFunc_PostEvent_ReturnValue;  // 0x90 (0x90)
	char pad_148_1 : 7;  // 0x94 (0x94)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x94 (0x94)


}; 
 
 // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_SkeletonGuardman_Nightmare.BP_SkeletonGuardman_Nightmare_C.OnStuckByShield
// Size: 0x10(Inherited: 0x10)
struct FOnStuckByShield : FOnStuckByShield
{
	struct ADCCharacterBase* InInstigator;  // 0x0 (0x0)
	struct AActor* InEffectCauser;  // 0x8 (0x8)


}; 
 
 