#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_Attack2_1_C::EventReceived_B922E44B4298725F30DE1A86F0D55343(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.EventReceived_B922E44B4298725F30DE1A86F0D55343");

	FEventReceived_B922E44B4298725F30DE1A86F0D55343 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Attack2_1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Attack2_1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Attack2_1_C::ExecuteUbergraph_GA_GoblinAxeman_Attack2_2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Attack2_2.GA_GoblinAxeman_Attack2_1_C.ExecuteUbergraph_GA_GoblinAxeman_Attack2_2");

	FExecuteUbergraph_GA_GoblinAxeman_Attack2_2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

