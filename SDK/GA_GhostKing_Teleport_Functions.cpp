#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_Teleport_C::EventReceived_A1697A204058999C82AF6E9CBAC06768(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.EventReceived_A1697A204058999C82AF6E9CBAC06768");

	FEventReceived_A1697A204058999C82AF6E9CBAC06768 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Teleport_C::Move Timer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.Move Timer");

	FMove Timer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Teleport_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Teleport_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_Teleport_C::ExecuteUbergraph_GA_GhostKing_Teleport(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_Teleport.GA_GhostKing_Teleport_C.ExecuteUbergraph_GA_GhostKing_Teleport");

	FExecuteUbergraph_GA_GhostKing_Teleport parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

