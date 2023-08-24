#include "pch.h"
#include "SDK.h"

void UGA_MoraleBoost_C::EventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MoraleBoost.GA_MoraleBoost_C.EventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700");

	FEventReceived_DD9B0D124BA472F9DBB2D6B6EE31F700 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MoraleBoost_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MoraleBoost.GA_MoraleBoost_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MoraleBoost_C::ExecuteUbergraph_GA_MoraleBoost(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MoraleBoost.GA_MoraleBoost_C.ExecuteUbergraph_GA_MoraleBoost");

	FExecuteUbergraph_GA_MoraleBoost parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

