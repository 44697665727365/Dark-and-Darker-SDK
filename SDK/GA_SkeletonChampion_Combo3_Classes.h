#pragma once 
#include <GA_SkeletonChampion_Combo3_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonChampion_Combo3_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.K2_OnEndAbility
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_SkeletonChampion_Combo3(int32_t EntryPoint); // Function GA_SkeletonChampion_Combo3.GA_SkeletonChampion_Combo3_C.ExecuteUbergraph_GA_SkeletonChampion_Combo3
}; 
 
 


