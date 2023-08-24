#pragma once 
#include <GA_MusicalInstrumentDissonance_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C
// Size: 0x5AC(Inherited: 0x5A0)
struct UGA_MusicalInstrumentDissonance_C : UGA_ActivateItem_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x5A0 (0x5A0)
	float Radius;  // 0x5A8 (0x5A8)


	void OnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096(struct TArray<struct AActor*>& RadiusInActors); // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.OnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.AbilityActivated
	void ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ReceivedEvent
	void ExecuteUbergraph_GA_MusicalInstrumentDissonance(int32_t EntryPoint); // Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ExecuteUbergraph_GA_MusicalInstrumentDissonance
}; 
 
 


