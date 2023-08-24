#include "pch.h"
#include "SDK.h"

void UGA_PlayerGuardBase_C::InputActionCompleted_0318D7604E14A031EF23C0A6403672BA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.InputActionCompleted_0318D7604E14A031EF23C0A6403672BA");

	FInputActionCompleted_0318D7604E14A031EF23C0A6403672BA parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerGuardBase_C::InputActionStarted_0318D7604E14A031EF23C0A6403672BA(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.InputActionStarted_0318D7604E14A031EF23C0A6403672BA");

	FInputActionStarted_0318D7604E14A031EF23C0A6403672BA parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerGuardBase_C::ReceivedEvent(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ReceivedEvent");

	FReceivedEvent parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerGuardBase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerGuardBase_C::ExecuteUbergraph_GA_PlayerGuardBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerGuardBase.GA_PlayerGuardBase_C.ExecuteUbergraph_GA_PlayerGuardBase");

	FExecuteUbergraph_GA_PlayerGuardBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

