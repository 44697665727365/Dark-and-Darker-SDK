#include "pch.h"
#include "SDK.h"

void UGA_PaviseInstallPassive_C::BroadcastSystemMessage(struct FText SystemMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.BroadcastSystemMessage");

	FBroadcastSystemMessage parms{};	
	parms.SystemMessage = SystemMessage;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstallPassive_C::CheckGround(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.CheckGround");

	FCheckGround parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstallPassive_C::EventReceived_78022699479DE1103E04748305A25585(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.EventReceived_78022699479DE1103E04748305A25585");

	FEventReceived_78022699479DE1103E04748305A25585 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstallPassive_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PaviseInstallPassive_C::ExecuteUbergraph_GA_PaviseInstallPassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PaviseInstallPassive.GA_PaviseInstallPassive_C.ExecuteUbergraph_GA_PaviseInstallPassive");

	FExecuteUbergraph_GA_PaviseInstallPassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

