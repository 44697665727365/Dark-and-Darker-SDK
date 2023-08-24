#include "pch.h"
#include "SDK.h"

void UGA_GiantCentipede_RunPhase_C::OnFail_83E8B56F4909F3B83D11AAB504F6F509(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.OnFail_83E8B56F4909F3B83D11AAB504F6F509");

	FOnFail_83E8B56F4909F3B83D11AAB504F6F509 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::OnSuccess_83E8B56F4909F3B83D11AAB504F6F509(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.OnSuccess_83E8B56F4909F3B83D11AAB504F6F509");

	FOnSuccess_83E8B56F4909F3B83D11AAB504F6F509 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::MoveFailUnable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.MoveFailUnable");

	FMoveFailUnable parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::SpawnAoeTimer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.SpawnAoeTimer");

	FSpawnAoeTimer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantCentipede_RunPhase_C::ExecuteUbergraph_GA_GiantCentipede_RunPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantCentipede_RunPhase.GA_GiantCentipede_RunPhase_C.ExecuteUbergraph_GA_GiantCentipede_RunPhase");

	FExecuteUbergraph_GA_GiantCentipede_RunPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

