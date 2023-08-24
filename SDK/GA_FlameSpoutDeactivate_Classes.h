#pragma once 
#include <GA_FlameSpoutDeactivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C
// Size: 0x560(Inherited: 0x558)
struct UGA_FlameSpoutDeactivate_C : UDCGameplayAbilityBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x558 (0x558)


	void OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2(); // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.OnFinish_8AD04CB04396038F0C5A4B832DCEC3A2
	void EventReceived_BAE8241E4992256FE025C3B5840FF2DD(struct FGameplayEventData Payload); // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.EventReceived_BAE8241E4992256FE025C3B5840FF2DD
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.K2_ActivateAbilityFromEvent
	void ExecuteUbergraph_GA_FlameSpoutDeactivate(int32_t EntryPoint); // Function GA_FlameSpoutDeactivate.GA_FlameSpoutDeactivate_C.ExecuteUbergraph_GA_FlameSpoutDeactivate
}; 
 
 


