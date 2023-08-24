#pragma once 
#include <GA_GoblinWarrior_AttackPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C
// Size: 0x590(Inherited: 0x580)
struct UGA_GoblinWarrior_AttackPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FGameplayTag Event Tag;  // 0x588 (0x588)


	void EventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121(struct FGameplayEventData Payload); // Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.EventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinWarrior_AttackPhase(int32_t EntryPoint); // Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.ExecuteUbergraph_GA_GoblinWarrior_AttackPhase
}; 
 
 


