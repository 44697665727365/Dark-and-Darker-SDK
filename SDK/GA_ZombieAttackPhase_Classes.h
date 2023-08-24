#pragma once 
#include <GA_ZombieAttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ZombieAttackPhase.GA_ZombieAttackPhase_C
// Size: 0x640(Inherited: 0x580)
struct UGA_ZombieAttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)
	struct FGameplayEventData Trigger Event Data;  // 0x590 (0x590)


	void EventReceived_5F8B5C6D458A326FAED185915655BF55(struct FGameplayEventData Payload); // Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.EventReceived_5F8B5C6D458A326FAED185915655BF55
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_ZombieAttackPhase(int32_t EntryPoint); // Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.ExecuteUbergraph_GA_ZombieAttackPhase
}; 
 
 


