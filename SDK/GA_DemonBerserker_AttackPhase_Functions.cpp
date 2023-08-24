#include "pch.h"
#include "SDK.h"

void UGA_DemonBerserker_AttackPhase_C::EventReceived_C04B84C441549667BDACC89A3F87529D(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.EventReceived_C04B84C441549667BDACC89A3F87529D");

	FEventReceived_C04B84C441549667BDACC89A3F87529D parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBerserker_AttackPhase_C::ExecuteUbergraph_GA_DemonBerserker_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.ExecuteUbergraph_GA_DemonBerserker_AttackPhase");

	FExecuteUbergraph_GA_DemonBerserker_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

