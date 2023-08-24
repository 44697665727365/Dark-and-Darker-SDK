#pragma once 
#include <GA_CaveTroll_Combo_Slap_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C
// Size: 0x6D8(Inherited: 0x6C9)
struct UGA_CaveTroll_Combo_Slap_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)


	void EventReceived_9B98491D4F6285BB63D3F2B5127EFF0E(struct FGameplayEventData Payload); // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.EventReceived_9B98491D4F6285BB63D3F2B5127EFF0E
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.K2_OnEndAbility
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ServerTargetDataReceived
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.AbilityActivated
	void ExecuteUbergraph_GA_CaveTroll_Combo_Slap(int32_t EntryPoint); // Function GA_CaveTroll_Combo_Slap.GA_CaveTroll_Combo_Slap_C.ExecuteUbergraph_GA_CaveTroll_Combo_Slap
}; 
 
 


