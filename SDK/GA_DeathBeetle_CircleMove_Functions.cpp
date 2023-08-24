#include "pch.h"
#include "SDK.h"

void UGA_DeathBeetle_CircleMove_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_CircleMove_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_CircleMove_C::CircleMoveFromEnemy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.CircleMoveFromEnemy");

	FCircleMoveFromEnemy parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathBeetle_CircleMove_C::ExecuteUbergraph_GA_DeathBeetle_CircleMove(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.ExecuteUbergraph_GA_DeathBeetle_CircleMove");

	FExecuteUbergraph_GA_DeathBeetle_CircleMove parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

