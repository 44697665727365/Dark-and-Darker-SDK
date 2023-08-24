#include "pch.h"
#include "SDK.h"

void UGA_SpearBlockReaction_C::InputActionCompleted_59241CEF4202F35366160881F6AE7FF8(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.InputActionCompleted_59241CEF4202F35366160881F6AE7FF8");

	FInputActionCompleted_59241CEF4202F35366160881F6AE7FF8 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpearBlockReaction_C::InputActionStarted_59241CEF4202F35366160881F6AE7FF8(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.InputActionStarted_59241CEF4202F35366160881F6AE7FF8");

	FInputActionStarted_59241CEF4202F35366160881F6AE7FF8 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpearBlockReaction_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SpearBlockReaction_C::ExecuteUbergraph_GA_SpearBlockReaction(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpearBlockReaction.GA_SpearBlockReaction_C.ExecuteUbergraph_GA_SpearBlockReaction");

	FExecuteUbergraph_GA_SpearBlockReaction parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

