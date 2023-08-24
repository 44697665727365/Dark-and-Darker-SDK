#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_AttackPhase_C::EventReceived_087B9FCC4E4BA99C75BE66A78906D184(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.EventReceived_087B9FCC4E4BA99C75BE66A78906D184");

	FEventReceived_087B9FCC4E4BA99C75BE66A78906D184 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_AttackPhase_C::ExecuteUbergraph_GA_CentaurDemon_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_AttackPhase.GA_CentaurDemon_AttackPhase_C.ExecuteUbergraph_GA_CentaurDemon_AttackPhase");

	FExecuteUbergraph_GA_CentaurDemon_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

