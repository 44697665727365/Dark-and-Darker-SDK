#include "pch.h"
#include "SDK.h"

void UGA_ItemAdditionalActivate_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemAdditionalActivate.GA_ItemAdditionalActivate_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemAdditionalActivate_C::ExecuteUbergraph_GA_ItemAdditionalActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemAdditionalActivate.GA_ItemAdditionalActivate_C.ExecuteUbergraph_GA_ItemAdditionalActivate");

	FExecuteUbergraph_GA_ItemAdditionalActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

