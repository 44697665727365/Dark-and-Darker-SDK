#pragma once 
#include <GA_SkeletonSpearman_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonSpearman_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_FEFD9C5A49C735D59CBA058127C754E3(struct FGameplayEventData Payload); // Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.EventReceived_FEFD9C5A49C735D59CBA058127C754E3
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonSpearman_AttackPhase(int32_t EntryPoint); // Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.ExecuteUbergraph_GA_SkeletonSpearman_AttackPhase
}; 
 
 


