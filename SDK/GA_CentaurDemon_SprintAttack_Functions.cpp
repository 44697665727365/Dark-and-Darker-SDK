#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_SprintAttack_C::EventReceived_0564A4534D1BD80A4E8FDE9503060BD8(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.EventReceived_0564A4534D1BD80A4E8FDE9503060BD8");

	FEventReceived_0564A4534D1BD80A4E8FDE9503060BD8 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_C::Rotate To Side Of Target(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.Rotate To Side Of Target");

	FRotate To Side Of Target parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_C::Rotation Timer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.Rotation Timer");

	FRotation Timer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintAttack_C::ExecuteUbergraph_GA_CentaurDemon_SprintAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintAttack.GA_CentaurDemon_SprintAttack_C.ExecuteUbergraph_GA_CentaurDemon_SprintAttack");

	FExecuteUbergraph_GA_CentaurDemon_SprintAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

