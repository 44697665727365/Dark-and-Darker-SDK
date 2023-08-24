#include "pch.h"
#include "SDK.h"

void UGA_GiantWorm_AttackPhase_C::EventReceived_4F55133E4381624B6289419D27021B79(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.EventReceived_4F55133E4381624B6289419D27021B79");

	FEventReceived_4F55133E4381624B6289419D27021B79 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantWorm_AttackPhase_C::ExecuteUbergraph_GA_GiantWorm_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantWorm_AttackPhase.GA_GiantWorm_AttackPhase_C.ExecuteUbergraph_GA_GiantWorm_AttackPhase");

	FExecuteUbergraph_GA_GiantWorm_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

