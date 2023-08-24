#include "pch.h"
#include "SDK.h"

void UGA_Melt_C::EventReceived_572966854591EB9993AC94996BE81F87(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Melt.GA_Melt_C.EventReceived_572966854591EB9993AC94996BE81F87");

	FEventReceived_572966854591EB9993AC94996BE81F87 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Melt_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Melt.GA_Melt_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Melt_C::ExecuteUbergraph_GA_Melt(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Melt.GA_Melt_C.ExecuteUbergraph_GA_Melt");

	FExecuteUbergraph_GA_Melt parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

