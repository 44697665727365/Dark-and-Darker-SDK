#include "pch.h"
#include "SDK.h"

void UGA_Kindness_C::EventReceived_89CB85084463471F9396E38CC9E180E6(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Kindness.GA_Kindness_C.EventReceived_89CB85084463471F9396E38CC9E180E6");

	FEventReceived_89CB85084463471F9396E38CC9E180E6 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Kindness_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Kindness.GA_Kindness_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Kindness_C::ExecuteUbergraph_GA_Kindness(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Kindness.GA_Kindness_C.ExecuteUbergraph_GA_Kindness");

	FExecuteUbergraph_GA_Kindness parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

