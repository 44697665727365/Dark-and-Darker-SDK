#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.ExecuteUbergraph_GA_SkeletonChampion_Combo3
struct FExecuteUbergraph_GA_SkeletonChampion_Combo3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FGameplayTag K2Node_Event_EventTag;  // 0x4 (0x4)
	struct FGameplayTag K2Node_Event_InChannelTag;  // 0xC (0xC)
	char pad_20[4];  // 0x14 (0x14)
	struct FGameplayEventData K2Node_Event_EventData;  // 0x18 (0x18)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_Event_bWasCancelled : 1;  // 0xC8 (0xC8)


}; 
 
 // Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.ServerTargetDataReceived
// Size: 0xC0(Inherited: 0xC0)
struct FServerTargetDataReceived : FServerTargetDataReceived
{
	struct FGameplayTag EventTag;  // 0x0 (0x0)
	struct FGameplayTag InChannelTag;  // 0x8 (0x8)
	struct FGameplayEventData EventData;  // 0x10 (0x10)


}; 
 
 // Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 