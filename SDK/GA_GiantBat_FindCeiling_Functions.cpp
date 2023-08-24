#include "pch.h"
#include "SDK.h"

void UGA_GiantBat_FindCeiling_C::MoveToCeiling(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.MoveToCeiling");

	FMoveToCeiling parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::SetVariablesToMove(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToMove");

	FSetVariablesToMove parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::SetVariablesToFindCeiling(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToFindCeiling");

	FSetVariablesToFindCeiling parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::EventReceived_38BE6F06435287E59C0F13BD42C857A3(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.EventReceived_38BE6F06435287E59C0F13BD42C857A3");

	FEventReceived_38BE6F06435287E59C0F13BD42C857A3 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::Move(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.Move");

	FMove parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_FindCeiling_C::ExecuteUbergraph_GA_GiantBat_FindCeiling(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.ExecuteUbergraph_GA_GiantBat_FindCeiling");

	FExecuteUbergraph_GA_GiantBat_FindCeiling parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

