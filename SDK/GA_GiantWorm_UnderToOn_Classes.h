#pragma once 
#include <GA_GiantWorm_UnderToOn_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C
// Size: 0x588(Inherited: 0x580)
struct UGA_GiantWorm_UnderToOn_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)


	void EventReceived_9E4376F04A212FECF0631BBF0ADFF69C(struct FGameplayEventData Payload); // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.EventReceived_9E4376F04A212FECF0631BBF0ADFF69C
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.AbilityActivated
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GiantWorm_UnderToOn(int32_t EntryPoint); // Function GA_GiantWorm_UnderToOn.GA_GiantWorm_UnderToOn_C.ExecuteUbergraph_GA_GiantWorm_UnderToOn
}; 
 
 


