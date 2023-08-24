#pragma once 
#include <GA_SkeletonGuardmanCombatState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonGuardmanCombatState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_0C67B7144907F5E3377B539ECF507E10(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.EventReceived_0C67B7144907F5E3377B539ECF507E10
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonGuardmanCombatState(int32_t EntryPoint); // Function GA_SkeletonGuardmanCombatState.GA_SkeletonGuardmanCombatState_C.ExecuteUbergraph_GA_SkeletonGuardmanCombatState
}; 
 
 


