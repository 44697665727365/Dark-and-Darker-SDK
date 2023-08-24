#pragma once 
#include <GA_DireWolf_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C
// Size: 0x588(Inherited: 0x580)
struct UGA_DireWolf_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_C02C1D3A4BD8CCC6936B0BA2AF3A53AA(struct FGameplayEventData Payload); // Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.EventReceived_C02C1D3A4BD8CCC6936B0BA2AF3A53AA
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_DireWolf_AttackPhase(int32_t EntryPoint); // Function GA_DireWolf_AttackPhase.GA_DireWolf_AttackPhase_C.ExecuteUbergraph_GA_DireWolf_AttackPhase
}; 
 
 


