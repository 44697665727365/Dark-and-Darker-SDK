#pragma once 
#include <GA_CaveTroll_Attack_Ground_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C
// Size: 0x6E8(Inherited: 0x6C9)
struct UGA_CaveTroll_Attack_Ground_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	double Launch XY Value;  // 0x6D8 (0x6D8)
	double Launch Z Value;  // 0x6E0 (0x6E0)


	void EventReceived_7D8A119E4E75043F1B7FD8A78249FE61(struct FGameplayEventData Payload); // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.EventReceived_7D8A119E4E75043F1B7FD8A78249FE61
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CaveTroll_Attack_Ground(int32_t EntryPoint); // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.ExecuteUbergraph_GA_CaveTroll_Attack_Ground
}; 
 
 


