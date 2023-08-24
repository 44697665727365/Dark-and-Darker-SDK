#pragma once 
#include <GA_GiantWorm_OnToUnder_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GiantWorm_OnToUnder_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_86C180884578AEE1E4F568AF696F6482(struct FGameplayEventData Payload); // Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.EventReceived_86C180884578AEE1E4F568AF696F6482
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.AbilityActivated
	void ExecuteUbergraph_GA_GiantWorm_OnToUnder(int32_t EntryPoint); // Function GA_GiantWorm_OnToUnder.GA_GiantWorm_OnToUnder_C.ExecuteUbergraph_GA_GiantWorm_OnToUnder
}; 
 
 


