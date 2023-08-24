#pragma once 
#include <GA_FlameSpoutActivate_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_FlameSpoutActivate.GA_FlameSpoutActivate_C
// Size: 0x5C8(Inherited: 0x5C0)
struct UGA_FlameSpoutActivate_C : UGA_AuraBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5C0 (0x5C0)


	void OnFinish_92AC14EB40A137DBD4635DB2EE8F6A04(); // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.OnFinish_92AC14EB40A137DBD4635DB2EE8F6A04
	void EventReceived_F6A1B4B944BDF21421359F943320AAF7(struct FGameplayEventData Payload); // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.EventReceived_F6A1B4B944BDF21421359F943320AAF7
	void OnAuraOverlapBeginEvent(struct AActor* TargetActor); // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.OnAuraOverlapBeginEvent
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.AbilityActivated
	void ExecuteUbergraph_GA_FlameSpoutActivate(int32_t EntryPoint); // Function GA_FlameSpoutActivate.GA_FlameSpoutActivate_C.ExecuteUbergraph_GA_FlameSpoutActivate
}; 
 
 


