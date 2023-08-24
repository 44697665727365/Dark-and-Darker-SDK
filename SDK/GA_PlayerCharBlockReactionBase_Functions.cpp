#include "pch.h"
#include "SDK.h"

void UGA_PlayerCharBlockReactionBase_C::RemoveItemActivateTag(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.RemoveItemActivateTag");

	FRemoveItemActivateTag parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::EventReceived_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.EventReceived_9082A8194C120F827B853A826395D816");

	FEventReceived_9082A8194C120F827B853A826395D816 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnCancelled_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnCancelled_9082A8194C120F827B853A826395D816");

	FOnCancelled_9082A8194C120F827B853A826395D816 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnInterrupted_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnInterrupted_9082A8194C120F827B853A826395D816");

	FOnInterrupted_9082A8194C120F827B853A826395D816 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnBlendOut_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnBlendOut_9082A8194C120F827B853A826395D816");

	FOnBlendOut_9082A8194C120F827B853A826395D816 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnCompleted_9082A8194C120F827B853A826395D816(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnCompleted_9082A8194C120F827B853A826395D816");

	FOnCompleted_9082A8194C120F827B853A826395D816 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnFinish_639A2A34444688AA7279D58FA53595DE(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnFinish_639A2A34444688AA7279D58FA53595DE");

	FOnFinish_639A2A34444688AA7279D58FA53595DE parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::OnFinished(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.OnFinished");

	FOnFinished parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerCharBlockReactionBase_C::ExecuteUbergraph_GA_PlayerCharBlockReactionBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerCharBlockReactionBase.GA_PlayerCharBlockReactionBase_C.ExecuteUbergraph_GA_PlayerCharBlockReactionBase");

	FExecuteUbergraph_GA_PlayerCharBlockReactionBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

