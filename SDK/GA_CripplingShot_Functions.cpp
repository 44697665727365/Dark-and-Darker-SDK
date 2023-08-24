#include "pch.h"
#include "SDK.h"

void UGA_CripplingShot_C::EventReceived_403A7EA145A71A33FE20CCBE7CD5A052(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CripplingShot.GA_CripplingShot_C.EventReceived_403A7EA145A71A33FE20CCBE7CD5A052");

	FEventReceived_403A7EA145A71A33FE20CCBE7CD5A052 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CripplingShot_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CripplingShot.GA_CripplingShot_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CripplingShot_C::ExecuteUbergraph_GA_CripplingShot(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CripplingShot.GA_CripplingShot_C.ExecuteUbergraph_GA_CripplingShot");

	FExecuteUbergraph_GA_CripplingShot parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

