#include "pch.h"
#include "SDK.h"

void UGA_CaveTroll_Attack_PunchDown_C::EventReceived_8D07916F4ACECE94208255B751735166(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.EventReceived_8D07916F4ACECE94208255B751735166");

	FEventReceived_8D07916F4ACECE94208255B751735166 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_PunchDown_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_PunchDown_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_PunchDown_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CaveTroll_Attack_PunchDown_C::ExecuteUbergraph_GA_CaveTroll_Attack_PunchDown(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CaveTroll_Attack_PunchDown.GA_CaveTroll_Attack_PunchDown_C.ExecuteUbergraph_GA_CaveTroll_Attack_PunchDown");

	FExecuteUbergraph_GA_CaveTroll_Attack_PunchDown parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

