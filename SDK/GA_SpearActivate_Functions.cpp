#include "pch.h"
#include "SDK.h"

void UGA_SpearActivate_C::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearActivate.GA_SpearActivate_C.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpearActivate_C::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearActivate.GA_SpearActivate_C.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpearActivate_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearActivate.GA_SpearActivate_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SpearActivate_C::ExecuteUbergraph_GA_SpearActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearActivate.GA_SpearActivate_C.ExecuteUbergraph_GA_SpearActivate");

	FExecuteUbergraph_GA_SpearActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

