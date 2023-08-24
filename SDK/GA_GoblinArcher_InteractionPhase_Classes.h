#pragma once 
#include <GA_GoblinArcher_InteractionPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C
// Size: 0x590(Inherited: 0x580)
struct UGA_GoblinArcher_InteractionPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)


	void EventReceived_CC01263B4FD69AF23B615D9494EBCC97(struct FGameplayEventData Payload); // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.EventReceived_CC01263B4FD69AF23B615D9494EBCC97
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GoblinArcher_InteractionPhase(int32_t EntryPoint); // Function GA_GoblinArcher_InteractionPhase.GA_GoblinArcher_InteractionPhase_C.ExecuteUbergraph_GA_GoblinArcher_InteractionPhase
}; 
 
 


