#pragma once 
#include <GA_CaveTroll_Attack_PunchDown_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_CaveTroll_Attack_PunchDown_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_8D07916F4ACECE94208255B751735166(struct FGameplayEventData Payload); // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.EventReceived_8D07916F4ACECE94208255B751735166
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.AbilityActivated
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ServerTargetDataReceived
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CaveTroll_Attack_PunchDown(int32_t EntryPoint); // Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ExecuteUbergraph_GA_CaveTroll_Attack_PunchDown
}; 
 
 


