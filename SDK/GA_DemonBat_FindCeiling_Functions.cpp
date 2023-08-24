#include "pch.h"
#include "SDK.h"

void UGA_DemonBat_FindCeiling_C::MoveToCeiling(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.MoveToCeiling");

	FMoveToCeiling parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::SetVariablesToMove(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToMove");

	FSetVariablesToMove parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::SetVariablesToFindCeiling(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToFindCeiling");

	FSetVariablesToFindCeiling parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::EventReceived_2CE0199045DAC986FAD76F82AEC79881(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.EventReceived_2CE0199045DAC986FAD76F82AEC79881");

	FEventReceived_2CE0199045DAC986FAD76F82AEC79881 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::Move(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.Move");

	FMove parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DemonBat_FindCeiling_C::ExecuteUbergraph_GA_DemonBat_FindCeiling(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.ExecuteUbergraph_GA_DemonBat_FindCeiling");

	FExecuteUbergraph_GA_DemonBat_FindCeiling parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

