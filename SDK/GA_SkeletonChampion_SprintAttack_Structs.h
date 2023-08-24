#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonChampion_SprintAttack.GA_SkeletonChampion_SprintAttack_C.ExecuteUbergraph_GA_SkeletonChampion_SprintAttack
struct FExecuteUbergraph_GA_SkeletonChampion_SprintAttack
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	char pad_16_1 : 7;  // 0x10 (0x10)
	bool K2Node_Event_bWasCancelled : 1;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x18 (0x18)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array;  // 0x20 (0x20)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x30 (0x30)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0x38 (0x38)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x40 (0x40)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue;  // 0xF0 (0xF0)
	struct TArray<struct FPrimaryAssetId> K2Node_MakeArray_Array_2;  // 0x100 (0x100)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyGameplayEffectByIds_ReturnValue_2;  // 0x110 (0x110)


}; 
 
 // Function GA_SkeletonChampion_SprintAttack.GA_SkeletonChampion_SprintAttack_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_SkeletonChampion_SprintAttack.GA_SkeletonChampion_SprintAttack_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 