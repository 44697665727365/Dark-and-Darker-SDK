#pragma once 
#include <GA_GoblinBolasinger_Interaction1_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinBolasinger_Interaction1_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_D02F265B4536722E9A69F8B474E0FEE9(struct FGameplayEventData Payload); // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.EventReceived_D02F265B4536722E9A69F8B474E0FEE9
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinBolasinger_Interaction1(int32_t EntryPoint); // Function GA_GoblinBolasinger_Interaction1.GA_GoblinBolasinger_Interaction1_C.ExecuteUbergraph_GA_GoblinBolasinger_Interaction1
}; 
 
 


