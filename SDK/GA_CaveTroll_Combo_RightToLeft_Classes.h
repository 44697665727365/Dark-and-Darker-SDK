#pragma once 
#include <GA_CaveTroll_Combo_RightToLeft_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C
// Size: 0x6E8(Inherited: 0x6C9)
struct UGA_CaveTroll_Combo_RightToLeft_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Combo Triggered : 1;  // 0x6D8 (0x6D8)
	char pad_1753[7];  // 0x6D9 (0x6D9)
	struct ABP_CaveTroll_C* As BP Cave Troll;  // 0x6E0 (0x6E0)


	void EventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4(struct FGameplayEventData Payload); // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.EventReceived_2F8287DA4229EC89E44ECD96C0A1A3B4
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.AbilityActivated
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft(int32_t EntryPoint); // Function GA_CaveTroll_Combo_RightToLeft.GA_CaveTroll_Combo_RightToLeft_C.ExecuteUbergraph_GA_CaveTroll_Combo_RightToLeft
}; 
 
 


