#pragma once 
#include <GA_ArcaneFeedback_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_ArcaneFeedback.GA_ArcaneFeedback_C
// Size: 0x560(Inherited: 0x558)
struct UGA_ArcaneFeedback_C : UGA_ActivateOnAbilityHandleData_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void EventReceived_FEC06BF8418516612E978591E8FA44BB(struct FGameplayEventData Payload); // Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.EventReceived_FEC06BF8418516612E978591E8FA44BB
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_ArcaneFeedback(int32_t EntryPoint); // Function GA_ArcaneFeedback.GA_ArcaneFeedback_C.ExecuteUbergraph_GA_ArcaneFeedback
}; 
 
 


