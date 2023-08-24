#include "pch.h"
#include "SDK.h"

void UGA_Carnage_C::EventReceived_660BEE954716E695D29F27AB6125BFEA(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Carnage.GA_Carnage_C.EventReceived_660BEE954716E695D29F27AB6125BFEA");

	FEventReceived_660BEE954716E695D29F27AB6125BFEA parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Carnage_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Carnage.GA_Carnage_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Carnage_C::ExecuteUbergraph_GA_Carnage(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Carnage.GA_Carnage_C.ExecuteUbergraph_GA_Carnage");

	FExecuteUbergraph_GA_Carnage parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

