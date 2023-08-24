#include "pch.h"
#include "SDK.h"

void UGA_FluteBlockReaction_C::InputActionCompleted_BCFB65554847E3F21C3A8C89A0A77CCC(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.InputActionCompleted_BCFB65554847E3F21C3A8C89A0A77CCC");

	FInputActionCompleted_BCFB65554847E3F21C3A8C89A0A77CCC parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_FluteBlockReaction_C::InputActionStarted_BCFB65554847E3F21C3A8C89A0A77CCC(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.InputActionStarted_BCFB65554847E3F21C3A8C89A0A77CCC");

	FInputActionStarted_BCFB65554847E3F21C3A8C89A0A77CCC parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_FluteBlockReaction_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_FluteBlockReaction_C::ExecuteUbergraph_GA_FluteBlockReaction(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FluteBlockReaction.GA_FluteBlockReaction_C.ExecuteUbergraph_GA_FluteBlockReaction");

	FExecuteUbergraph_GA_FluteBlockReaction parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

