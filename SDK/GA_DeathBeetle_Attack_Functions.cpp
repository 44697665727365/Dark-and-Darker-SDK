#include "pch.h"
#include "SDK.h"

void UGA_DeathBeetle_Attack_C::EventReceived_200D1D174F8ECECE70651CBC26926225(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.EventReceived_200D1D174F8ECECE70651CBC26926225");

	FEventReceived_200D1D174F8ECECE70651CBC26926225 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_Attack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_Attack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_Attack_C::ExecuteUbergraph_GA_DeathBeetle_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_Attack.GA_DeathBeetle_Attack_C.ExecuteUbergraph_GA_DeathBeetle_Attack");

	FExecuteUbergraph_GA_DeathBeetle_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

