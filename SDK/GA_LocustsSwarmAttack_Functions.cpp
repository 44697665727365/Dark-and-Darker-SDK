#include "pch.h"
#include "SDK.h"

void UGA_LocustsSwarmAttack_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarmAttack.GA_LocustsSwarmAttack_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarmAttack_C::ExecuteUbergraph_GA_LocustsSwarmAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarmAttack.GA_LocustsSwarmAttack_C.ExecuteUbergraph_GA_LocustsSwarmAttack");

	FExecuteUbergraph_GA_LocustsSwarmAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

