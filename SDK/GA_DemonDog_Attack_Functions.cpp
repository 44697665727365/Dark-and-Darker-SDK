#include "pch.h"
#include "SDK.h"

void UGA_DemonDog_Attack_C::EventReceived_DBA5641548D44CA6EB284BB42FBBF497(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.EventReceived_DBA5641548D44CA6EB284BB42FBBF497");

	FEventReceived_DBA5641548D44CA6EB284BB42FBBF497 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_Attack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_Attack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_Attack_C::ExecuteUbergraph_GA_DemonDog_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_Attack.GA_DemonDog_Attack_C.ExecuteUbergraph_GA_DemonDog_Attack");

	FExecuteUbergraph_GA_DemonDog_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

