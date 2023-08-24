#pragma once 
#include <GA_SkeletonGuardmanCounterAttack_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_SkeletonGuardmanCounterAttack_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonGuardmanCounterAttack(int32_t EntryPoint); // Function GA_SkeletonGuardmanCounterAttack.GA_SkeletonGuardmanCounterAttack_C.ExecuteUbergraph_GA_SkeletonGuardmanCounterAttack
}; 
 
 


