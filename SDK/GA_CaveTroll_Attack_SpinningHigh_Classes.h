#pragma once 
#include <GA_CaveTroll_Attack_SpinningHigh_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Attack_SpinningHigh.GA_CaveTroll_Attack_SpinningHigh_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_CaveTroll_Attack_SpinningHigh_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Attack_SpinningHigh.GA_CaveTroll_Attack_SpinningHigh_C.K2_OnEndAbility
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_CaveTroll_Attack_SpinningHigh.GA_CaveTroll_Attack_SpinningHigh_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_CaveTroll_Attack_SpinningHigh(int32_t EntryPoint); // Function GA_CaveTroll_Attack_SpinningHigh.GA_CaveTroll_Attack_SpinningHigh_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningHigh
}; 
 
 


