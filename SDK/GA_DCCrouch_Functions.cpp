#include "pch.h"
#include "SDK.h"

void UGA_DCCrouch_C::EventReceived_F8111BF74E13C0F203A0A2A357F51B3A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCCrouch.GA_DCCrouch_C.EventReceived_F8111BF74E13C0F203A0A2A357F51B3A");

	FEventReceived_F8111BF74E13C0F203A0A2A357F51B3A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_DCCrouch_C::OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCCrouch.GA_DCCrouch_C.OnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB");

	FOnUnCrouch_3498D7D3459D7AA787BEB5885E6B29DB parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCCrouch_C::OnChange_1B5403AA43F34E6E271364B87A6DC3AC(enum class EMovementMode NewMovementMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCCrouch.GA_DCCrouch_C.OnChange_1B5403AA43F34E6E271364B87A6DC3AC");

	FOnChange_1B5403AA43F34E6E271364B87A6DC3AC parms{};	
	parms.NewMovementMode = NewMovementMode;

	ProcessEvent(fn, &parms);
}

void UGA_DCCrouch_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCCrouch.GA_DCCrouch_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DCCrouch_C::ExecuteUbergraph_GA_DCCrouch(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DCCrouch.GA_DCCrouch_C.ExecuteUbergraph_GA_DCCrouch");

	FExecuteUbergraph_GA_DCCrouch parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

