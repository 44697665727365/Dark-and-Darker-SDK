#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Attack_SpinningHighFromRun_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningHighFromRun.GA_CaveTroll_Attack_SpinningHighFromRun_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningHighFromRun_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningHighFromRun.GA_CaveTroll_Attack_SpinningHighFromRun_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_SpinningHighFromRun_C::ExecuteUbergraph_GA_CaveTroll_Attack_SpinningHighFromRun(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_SpinningHighFromRun.GA_CaveTroll_Attack_SpinningHighFromRun_C.ExecuteUbergraph_GA_CaveTroll_Attack_SpinningHighFromRun");

	FExecuteUbergraph_GA_CaveTroll_Attack_SpinningHighFromRun parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

