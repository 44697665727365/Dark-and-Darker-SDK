#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_Attack_OnGround_C::EventReceived_9C69B6A941B21289EA62809451A3D8FF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.EventReceived_9C69B6A941B21289EA62809451A3D8FF");

	FEventReceived_9C69B6A941B21289EA62809451A3D8FF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_Attack_OnGround_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_Attack_OnGround_C::ServerTargetDataReceived(struct FGameplayTag EventTag, struct FGameplayTag InChannelTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ServerTargetDataReceived");

	FServerTargetDataReceived parms{};	
	parms.EventTag = EventTag;
	parms.InChannelTag = InChannelTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_Attack_OnGround_C::ExecuteUbergraph_GA_GiantWorm_Attack_OnGround(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_Attack_OnGround.GA_GiantWorm_Attack_OnGround_C.ExecuteUbergraph_GA_GiantWorm_Attack_OnGround");

	FExecuteUbergraph_GA_GiantWorm_Attack_OnGround parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

