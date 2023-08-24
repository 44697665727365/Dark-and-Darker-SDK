#include "pch.h"
#include "SDK.h"

void UGA_GhostKing_SummonSmallGhost_C::EventReceived_EDA2BCA841843174E8997585DF436FE2(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.EventReceived_EDA2BCA841843174E8997585DF436FE2");

	FEventReceived_EDA2BCA841843174E8997585DF436FE2 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_SummonSmallGhost_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_SummonSmallGhost_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GhostKing_SummonSmallGhost_C::ExecuteUbergraph_GA_GhostKing_SummonSmallGhost(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GhostKing_SummonSmallGhost.GA_GhostKing_SummonSmallGhost_C.ExecuteUbergraph_GA_GhostKing_SummonSmallGhost");

	FExecuteUbergraph_GA_GhostKing_SummonSmallGhost parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

