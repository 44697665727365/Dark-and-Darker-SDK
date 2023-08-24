#include "pch.h"
#include "SDK.h"

void UGA_BardicheActivate_C::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BardicheActivate.GA_BardicheActivate_C.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_BardicheActivate_C::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BardicheActivate.GA_BardicheActivate_C.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_BardicheActivate_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BardicheActivate.GA_BardicheActivate_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_BardicheActivate_C::ExecuteUbergraph_GA_BardicheActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_BardicheActivate.GA_BardicheActivate_C.ExecuteUbergraph_GA_BardicheActivate");

	FExecuteUbergraph_GA_BardicheActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

