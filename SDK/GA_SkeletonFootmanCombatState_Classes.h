#pragma once 
#include <GA_SkeletonFootmanCombatState_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C
// Size: 0x588(Inherited: 0x580)
struct UGA_SkeletonFootmanCombatState_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_9E4607554C20A2BC634F6781302662F9(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.EventReceived_9E4607554C20A2BC634F6781302662F9
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.AbilityActivated
	void ExecuteUbergraph_GA_SkeletonFootmanCombatState(int32_t EntryPoint); // Function GA_SkeletonFootmanCombatState.GA_SkeletonFootmanCombatState_C.ExecuteUbergraph_GA_SkeletonFootmanCombatState
}; 
 
 


