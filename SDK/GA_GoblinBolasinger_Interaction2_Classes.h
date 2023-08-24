#pragma once 
#include <GA_GoblinBolasinger_Interaction2_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GoblinBolasinger_Interaction2_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_23899DCC4322BC3EB4D525A66DC0F535(struct FGameplayEventData Payload); // Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.EventReceived_23899DCC4322BC3EB4D525A66DC0F535
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.AbilityActivated
	void ExecuteUbergraph_GA_GoblinBolasinger_Interaction2(int32_t EntryPoint); // Function GA_GoblinBolasinger_Interaction2.GA_GoblinBolasinger_Interaction2_C.ExecuteUbergraph_GA_GoblinBolasinger_Interaction2
}; 
 
 


