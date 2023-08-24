#pragma once 
#include <GA_Cockatrice_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_Cockatrice_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_3E8A8A9D4693B83B5F23F6BD4C5A0570(struct FGameplayEventData Payload); // Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.EventReceived_3E8A8A9D4693B83B5F23F6BD4C5A0570
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_Cockatrice_AttackPhase(int32_t EntryPoint); // Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.ExecuteUbergraph_GA_Cockatrice_AttackPhase
}; 
 
 


