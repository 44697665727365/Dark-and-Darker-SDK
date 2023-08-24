#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_Flee_C::EventReceived_4EAB00894CA8693E0498138A37127E70(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_4EAB00894CA8693E0498138A37127E70");

	FEventReceived_4EAB00894CA8693E0498138A37127E70 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7");

	FOnFail_B9430B6C4D3B8DFEF39B4E904FBE88A7 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7");

	FOnSuccess_B9430B6C4D3B8DFEF39B4E904FBE88A7 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::EventReceived_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.EventReceived_54518C474AEA635B2AFC95ADD2993635");

	FEventReceived_54518C474AEA635B2AFC95ADD2993635 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnCancelled_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCancelled_54518C474AEA635B2AFC95ADD2993635");

	FOnCancelled_54518C474AEA635B2AFC95ADD2993635 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnInterrupted_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnInterrupted_54518C474AEA635B2AFC95ADD2993635");

	FOnInterrupted_54518C474AEA635B2AFC95ADD2993635 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnBlendOut_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnBlendOut_54518C474AEA635B2AFC95ADD2993635");

	FOnBlendOut_54518C474AEA635B2AFC95ADD2993635 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::OnCompleted_54518C474AEA635B2AFC95ADD2993635(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.OnCompleted_54518C474AEA635B2AFC95ADD2993635");

	FOnCompleted_54518C474AEA635B2AFC95ADD2993635 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::MoveFlee(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.MoveFlee");

	FMoveFlee parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::MoveFailTimeOut(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.MoveFailTimeOut");

	FMoveFailTimeOut parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_Flee_C::ExecuteUbergraph_GA_GoblinAxeman_Flee(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_Flee.GA_GoblinAxeman_Flee_C.ExecuteUbergraph_GA_GoblinAxeman_Flee");

	FExecuteUbergraph_GA_GoblinAxeman_Flee parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

