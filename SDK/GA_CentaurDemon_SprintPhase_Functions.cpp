#include "pch.h"
#include "SDK.h"

void UGA_CentaurDemon_SprintPhase_C::Set Variables(struct FGameplayEventData Event Data, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.Set Variables");

	FSet Variables parms{};	
	parms.Event Data = Event Data;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::EventReceived_235F91F447562B0F4256E28837D68907(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.EventReceived_235F91F447562B0F4256E28837D68907");

	FEventReceived_235F91F447562B0F4256E28837D68907 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::MoveTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.MoveTimer");

	FMoveTimer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::Add Input Movement(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.Add Input Movement");

	FAdd Input Movement parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_CentaurDemon_SprintPhase_C::ExecuteUbergraph_GA_CentaurDemon_SprintPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_CentaurDemon_SprintPhase.GA_CentaurDemon_SprintPhase_C.ExecuteUbergraph_GA_CentaurDemon_SprintPhase");

	FExecuteUbergraph_GA_CentaurDemon_SprintPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

