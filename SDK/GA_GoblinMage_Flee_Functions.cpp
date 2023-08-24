#include "pch.h"
#include "SDK.h"

void UGA_GoblinMage_Flee_C::EventReceived_56E887C34B2A2F34647DE099B3850EBF(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.EventReceived_56E887C34B2A2F34647DE099B3850EBF");

	FEventReceived_56E887C34B2A2F34647DE099B3850EBF parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::OnFail_BD9F7BBF4436D443ABCA108234B34067(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnFail_BD9F7BBF4436D443ABCA108234B34067");

	FOnFail_BD9F7BBF4436D443ABCA108234B34067 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::OnSuccess_BD9F7BBF4436D443ABCA108234B34067(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.OnSuccess_BD9F7BBF4436D443ABCA108234B34067");

	FOnSuccess_BD9F7BBF4436D443ABCA108234B34067 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::MoveFailUnable(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.MoveFailUnable");

	FMoveFailUnable parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_Flee_C::ExecuteUbergraph_GA_GoblinMage_Flee(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_Flee.GA_GoblinMage_Flee_C.ExecuteUbergraph_GA_GoblinMage_Flee");

	FExecuteUbergraph_GA_GoblinMage_Flee parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

