#include "pch.h"
#include "SDK.h"

void UGA_CrystalSwordActivate_C::Activated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CrystalSwordActivate.GA_CrystalSwordActivate_C.Activated");

	FActivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CrystalSwordActivate_C::Deactivated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CrystalSwordActivate.GA_CrystalSwordActivate_C.Deactivated");

	FDeactivated parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CrystalSwordActivate_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CrystalSwordActivate.GA_CrystalSwordActivate_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CrystalSwordActivate_C::ExecuteUbergraph_GA_CrystalSwordActivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CrystalSwordActivate.GA_CrystalSwordActivate_C.ExecuteUbergraph_GA_CrystalSwordActivate");

	FExecuteUbergraph_GA_CrystalSwordActivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

