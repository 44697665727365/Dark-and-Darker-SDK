#include "pch.h"
#include "SDK.h"

void UGA_ZombieEating_C::EventReceived_D94F53204DADF94B17AE4B948B7EC3A8(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieEating.GA_ZombieEating_C.EventReceived_D94F53204DADF94B17AE4B948B7EC3A8");

	FEventReceived_D94F53204DADF94B17AE4B948B7EC3A8 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ZombieEating_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieEating.GA_ZombieEating_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ZombieEating_C::ExecuteUbergraph_GA_ZombieEating(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieEating.GA_ZombieEating_C.ExecuteUbergraph_GA_ZombieEating");

	FExecuteUbergraph_GA_ZombieEating parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

