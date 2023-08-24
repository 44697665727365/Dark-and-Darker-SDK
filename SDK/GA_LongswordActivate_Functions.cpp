#include "pch.h"
#include "SDK.h"

void UGA_LongswordActivate_C::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordActivate.GA_LongswordActivate_C.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LongswordActivate_C::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordActivate.GA_LongswordActivate_C.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LongswordActivate_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordActivate.GA_LongswordActivate_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LongswordActivate_C::ExecuteUbergraph_GA_LongswordActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LongswordActivate.GA_LongswordActivate_C.ExecuteUbergraph_GA_LongswordActivate");

	FExecuteUbergraph_GA_LongswordActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

