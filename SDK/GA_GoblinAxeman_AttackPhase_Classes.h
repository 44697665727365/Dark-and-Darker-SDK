#pragma once 
#include <GA_GoblinAxeman_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinAxeman_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_815F7D164E1705CDEA05DEB70232D2EB(struct FGameplayEventData Payload); // Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.EventReceived_815F7D164E1705CDEA05DEB70232D2EB
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinAxeman_AttackPhase(int32_t EntryPoint); // Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.ExecuteUbergraph_GA_GoblinAxeman_AttackPhase
}; 
 
 


