#pragma once 
#include <GA_TriggerBase_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_TriggerBase.GA_TriggerBase_C
// Size: 0x570(Inherited: 0x560)
struct UGA_TriggerBase_C : UGA_ChangeIdle
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x560 (0x560)
	struct FGameplayTag RequestEventTag;  // 0x568 (0x568)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_TriggerBase.GA_TriggerBase_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_TriggerBase.GA_TriggerBase_C.AbilityActivated
	void ExecuteUbergraph_GA_TriggerBase(int32_t EntryPoint); // Function GA_TriggerBase.GA_TriggerBase_C.ExecuteUbergraph_GA_TriggerBase
}; 
 
 


