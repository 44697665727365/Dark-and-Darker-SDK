#include "pch.h"
#include "SDK.h"

void UGA_DemonDog_DashAttack_C::EventReceived_6A2D151A41895208B55271BC106A0EF7(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.EventReceived_6A2D151A41895208B55271BC106A0EF7");

	FEventReceived_6A2D151A41895208B55271BC106A0EF7 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_DashAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_DashAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonDog_DashAttack_C::ExecuteUbergraph_GA_DemonDog_DashAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonDog_DashAttack.GA_DemonDog_DashAttack_C.ExecuteUbergraph_GA_DemonDog_DashAttack");

	FExecuteUbergraph_GA_DemonDog_DashAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

