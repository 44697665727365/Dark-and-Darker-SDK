#include "pch.h"
#include "SDK.h"

void UGA_DCWalk_C::EventReceived_482BF8EA45A716B472BF488779217213(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCWalk.GA_DCWalk_C.EventReceived_482BF8EA45A716B472BF488779217213");

	FEventReceived_482BF8EA45A716B472BF488779217213 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCWalk_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCWalk.GA_DCWalk_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCWalk_C::ExecuteUbergraph_GA_DCWalk(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCWalk.GA_DCWalk_C.ExecuteUbergraph_GA_DCWalk");

	FExecuteUbergraph_GA_DCWalk parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

