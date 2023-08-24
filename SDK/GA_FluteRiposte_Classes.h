#pragma once 
#include <GA_FluteRiposte_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FluteRiposte.GA_FluteRiposte_C
// Size: 0x5C0(Inherited: 0x5B8)
struct UGA_FluteRiposte_C : UGA_PlayerGuardBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5B8 (0x5B8)


	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_FluteRiposte.GA_FluteRiposte_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_FluteRiposte.GA_FluteRiposte_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_FluteRiposte(int32_t EntryPoint); // Function GA_FluteRiposte.GA_FluteRiposte_C.ExecuteUbergraph_GA_FluteRiposte
}; 
 
 


