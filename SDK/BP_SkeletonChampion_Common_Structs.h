#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.ExecuteUbergraph_BP_SkeletonChampion_Common
struct FExecuteUbergraph_BP_SkeletonChampion_Common
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x4 (0x4)
	int32_t K2Node_Event_InCount;  // 0xC (0xC)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x10 (0x10)
	char pad_17_1 : 7;  // 0x11 (0x11)
	bool CallFunc_Greater_IntInt_ReturnValue : 1;  // 0x11 (0x11)
	char pad_18_1 : 7;  // 0x12 (0x12)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x12 (0x12)
	char pad_19_1 : 7;  // 0x13 (0x13)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess_2 : 1;  // 0x13 (0x13)
	char pad_20[4];  // 0x14 (0x14)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue;  // 0x18 (0x18)
	struct UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2;  // 0x20 (0x20)
	struct UABP_SkeletonChampion_C* K2Node_DynamicCast_AsABP_Skeleton_Champion;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct UABP_SkeletonChampion_C* K2Node_DynamicCast_AsABP_Skeleton_Champion_2;  // 0x38 (0x38)
	char pad_64_1 : 7;  // 0x40 (0x40)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x40 (0x40)
	char pad_65[7];  // 0x41 (0x41)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x48 (0x48)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0x58 (0x58)
	int32_t CallFunc_RemoveActiveEffectsWithGrantedTags_ReturnValue;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x70 (0x70)
	struct AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;  // 0xD0 (0xD0)
	struct ABP_SkeletonChampionShield_C* CallFunc_FinishSpawningActor_ReturnValue;  // 0xD8 (0xD8)


}; 
 
 // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 // Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C._1
struct F_1
{
	struct FGameplayTag NewParam1;  // 0x0 (0x0)
	struct FRigUnit_SwitchParent NewParam;  // 0x8 (0x8)
	char pad_104_1 : 7;  // 0x68 (0x68)
	bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess : 1;  // 0x68 (0x68)


}; 
 
 