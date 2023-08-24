#include "pch.h"
#include "SDK.h"

void UGA_DemonBat_Attack_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_Attack.GA_DemonBat_Attack_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_Attack_C::ExecuteUbergraph_GA_DemonBat_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_Attack.GA_DemonBat_Attack_C.ExecuteUbergraph_GA_DemonBat_Attack");

	FExecuteUbergraph_GA_DemonBat_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

