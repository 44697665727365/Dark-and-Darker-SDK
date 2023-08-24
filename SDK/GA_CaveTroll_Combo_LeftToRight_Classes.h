#pragma once 
#include <GA_CaveTroll_Combo_LeftToRight_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C
// Size: 0x6F0(Inherited: 0x6C9)
struct UGA_CaveTroll_Combo_LeftToRight_C : UGA_MonsterMeleeAttackBaseWithOptions_C
{
	char pad_1737[7];  // 0x6C9 (0x6C9)
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x6D0 (0x6D0)
	char pad_1752_1 : 7;  // 0x6D8 (0x6D8)
	bool Combo Triggered : 1;  // 0x6D8 (0x6D8)
	char pad_1753[7];  // 0x6D9 (0x6D9)
	double Ratio To Choose Combo;  // 0x6E0 (0x6E0)
	struct ABP_CaveTroll_C* As BP Cave Troll;  // 0x6E8 (0x6E8)


	void EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71(struct FGameplayEventData Payload); // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.EventReceived_A925733446D6E2DB0FC4F1A7F5CD2C71
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.K2_OnEndAbility
	void ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData); // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ServerTargetDataReceived
	void ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight(int32_t EntryPoint); // Function GA_CaveTroll_Combo_LeftToRight.GA_CaveTroll_Combo_LeftToRight_C.ExecuteUbergraph_GA_CaveTroll_Combo_LeftToRight
}; 
 
 


