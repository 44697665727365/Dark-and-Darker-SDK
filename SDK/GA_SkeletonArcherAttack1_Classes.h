#pragma once 
#include <GA_SkeletonArcherAttack1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C
// Size: 0x780(Inherited: 0x6C0)
struct UGA_SkeletonArcherAttack1_C : UGA_MonsterChargedRangedAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6C0 (0x6C0)
	double Activate Combo Ratio;  // 0x6C8 (0x6C8)
	struct FGameplayEventData Trigger Event Data;  // 0x6D0 (0x6D0)


	void EventReceived_E33B9B8A42178D92C49CB99DCCDDC66D(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.EventReceived_E33B9B8A42178D92C49CB99DCCDDC66D
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_SkeletonArcherAttack1(int32_t EntryPoint); // Function GA_SkeletonArcherAttack1.GA_SkeletonArcherAttack1_C.ExecuteUbergraph_GA_SkeletonArcherAttack1
}; 
 
 


