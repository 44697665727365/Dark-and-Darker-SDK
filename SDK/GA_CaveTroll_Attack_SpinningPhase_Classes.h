#pragma once 
#include <GA_CaveTroll_Attack_SpinningPhase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C
// Size: 0x590(Inherited: 0x580)
struct UGA_CaveTroll_Attack_SpinningPhase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	double Choosing Ratio;  // 0x588 (0x588)


	void EventReceived_5E2CE7824445841FB45C2FA20500B434(struct FGameplayEventData Payload); // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.EventReceived_5E2CE7824445841FB45C2FA20500B434
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.AbilityActivated
	void ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase(int32_t EntryPoint); // Function GA_CaveTroll_Attack_SpinningPhase.GA_CaveTroll_Attack_SpinningPhase_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningPhase
}; 
 
 


