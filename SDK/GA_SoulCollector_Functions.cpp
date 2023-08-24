#include "pch.h"
#include "SDK.h"

void UGA_SoulCollector_C::EventReceived_8AF98B894782B08BACFA3A8E23DB16CE(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SoulCollector.GA_SoulCollector_C.EventReceived_8AF98B894782B08BACFA3A8E23DB16CE");

	FEventReceived_8AF98B894782B08BACFA3A8E23DB16CE parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SoulCollector_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SoulCollector.GA_SoulCollector_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SoulCollector_C::ExecuteUbergraph_GA_SoulCollector(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SoulCollector.GA_SoulCollector_C.ExecuteUbergraph_GA_SoulCollector");

	FExecuteUbergraph_GA_SoulCollector parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

