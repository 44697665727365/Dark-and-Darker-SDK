#pragma once 
#include <GA_GoblinWarrior_InteractionPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinWarrior_InteractionPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_4679351142DCCF208D3681994BB1BDC1(struct FGameplayEventData Payload); // Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.EventReceived_4679351142DCCF208D3681994BB1BDC1
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinWarrior_InteractionPhase(int32_t EntryPoint); // Function GA_GoblinWarrior_InteractionPhase.GA_GoblinWarrior_InteractionPhase_C.ExecuteUbergraph_GA_GoblinWarrior_InteractionPhase
}; 
 
 


