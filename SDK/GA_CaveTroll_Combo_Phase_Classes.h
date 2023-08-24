#pragma once 
#include <GA_CaveTroll_Combo_Phase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C
// Size: 0x598(Inherited: 0x580)
struct UGA_CaveTroll_Combo_Phase_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_CaveTroll_C* As BP Cave Troll;  // 0x588 (0x588)
	double Temp Combo Trigger Ratio;  // 0x590 (0x590)


	void EventReceived_EDCAA6E748675F038F1CECA004BA8FD1(struct FGameplayEventData Payload); // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.EventReceived_EDCAA6E748675F038F1CECA004BA8FD1
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_CaveTroll_Combo_Phase(int32_t EntryPoint); // Function GA_CaveTroll_Combo_Phase.GA_CaveTroll_Combo_Phase_C.ExecuteUbergraph_GA_CaveTroll_Combo_Phase
}; 
 
 


