#include "pch.h"
#include "SDK.h"

void UGA_MusicalInstrumentDissonance_C::OnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096(struct TArray<struct AActor*>& RadiusInActors){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.OnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096");

	FOnTargetActorOverlap_56331A2B438701138DFEA3A1849CC096 parms{};	
	parms.RadiusInActors = RadiusInActors;

	ProcessEvent(fn, &parms);
}

void UGA_MusicalInstrumentDissonance_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicalInstrumentDissonance_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MusicalInstrumentDissonance_C::ExecuteUbergraph_GA_MusicalInstrumentDissonance(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MusicalInstrumentDissonance.GA_MusicalInstrumentDissonance_C.ExecuteUbergraph_GA_MusicalInstrumentDissonance");

	FExecuteUbergraph_GA_MusicalInstrumentDissonance parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

