#include "pch.h"
#include "SDK.h"

void UGA_DoubleAxe_UniquePassive_C::EventReceived_92F67D9442C2B2CF04064E88E63E2A1D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.EventReceived_92F67D9442C2B2CF04064E88E63E2A1D");

	FEventReceived_92F67D9442C2B2CF04064E88E63E2A1D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleAxe_UniquePassive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleAxe_UniquePassive_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DoubleAxe_UniquePassive_C::ExecuteUbergraph_GA_DoubleAxe_UniquePassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DoubleAxe_UniquePassive.GA_DoubleAxe_UniquePassive_C.ExecuteUbergraph_GA_DoubleAxe_UniquePassive");

	FExecuteUbergraph_GA_DoubleAxe_UniquePassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

