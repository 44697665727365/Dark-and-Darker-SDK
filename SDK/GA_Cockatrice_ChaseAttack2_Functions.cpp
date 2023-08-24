#include "pch.h"
#include "SDK.h"

void UGA_Cockatrice_ChaseAttack2_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttack2.GA_Cockatrice_ChaseAttack2_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_ChaseAttack2_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttack2.GA_Cockatrice_ChaseAttack2_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_ChaseAttack2_C::ExecuteUbergraph_GA_Cockatrice_ChaseAttack2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttack2.GA_Cockatrice_ChaseAttack2_C.ExecuteUbergraph_GA_Cockatrice_ChaseAttack2");

	FExecuteUbergraph_GA_Cockatrice_ChaseAttack2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

