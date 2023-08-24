#pragma once 
#include <GA_CentaurDemon_SprintAttack_Pierce_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_CentaurDemon_SprintAttack_Pierce_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.AbilityActivated
	void ExecuteUbergraph_GA_CentaurDemon_SprintAttack_Pierce(int32_t EntryPoint); // Function GA_CentaurDemon_SprintAttack_Pierce.GA_CentaurDemon_SprintAttack_Pierce_C.ExecuteUbergraph_GA_CentaurDemon_SprintAttack_Pierce
}; 
 
 


