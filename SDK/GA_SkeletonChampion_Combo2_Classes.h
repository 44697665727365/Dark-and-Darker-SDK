#pragma once 
#include <GA_SkeletonChampion_Combo2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C
// Size: 0x6F1(Inherited: 0x6C9)
struct UGA_SkeletonChampion_Combo2_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	struct TArray<struct ADCCharacterBase*> Target Array;  // 0x6D8 (0x6D8)
	struct ADCMonsterBase* DCMonster Base;  // 0x6E8 (0x6E8)
	char pad_1776_1 : 7;  // 0x6F0 (0x6F0)
	bool Combo Triggered : 1;  // 0x6F0 (0x6F0)


	void EventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9(struct FGameplayEventData Payload); // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.EventReceived_87337B3B49E6ACB1C1CF2B816F8AAAB9
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonChampion_Combo2(int32_t EntryPoint); // Function GA_SkeletonChampion_Combo2.GA_SkeletonChampion_Combo2_C.ExecuteUbergraph_GA_SkeletonChampion_Combo2
}; 
 
 


