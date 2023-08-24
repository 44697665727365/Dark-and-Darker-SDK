#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_Attack1_C::EventReceived_DCC6FDA4431C03D9495F53A7E8952928(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_DCC6FDA4431C03D9495F53A7E8952928");

	FEventReceived_DCC6FDA4431C03D9495F53A7E8952928 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack1_C::EventReceived_292A21FB45B2F5B4590504B9C379EC8F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.EventReceived_292A21FB45B2F5B4590504B9C379EC8F");

	FEventReceived_292A21FB45B2F5B4590504B9C379EC8F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack1_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack1_C::Check Target To Rotate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.Check Target To Rotate");

	FCheck Target To Rotate parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_Attack1_C::ExecuteUbergraph_GA_CentaurDemon_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_Attack1.GA_CentaurDemon_Attack1_C.ExecuteUbergraph_GA_CentaurDemon_Attack1");

	FExecuteUbergraph_GA_CentaurDemon_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

