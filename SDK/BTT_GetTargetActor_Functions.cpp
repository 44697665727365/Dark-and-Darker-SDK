#include "pch.h"
#include "SDK.h"

void UBTT_GetTargetActor_C::ClearVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.ClearVariables");

	FClearVariables parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::Sorting(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.Sorting");

	FSorting parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::FilterHP(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterHP");

	FFilterHP parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::FilterRange(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterRange");

	FFilterRange parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::FilterTags(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.FilterTags");

	FFilterTags parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::TargetingType(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.TargetingType");

	FTargetingType parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetActor_C::ExecuteUbergraph_BTT_GetTargetActor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetActor.BTT_GetTargetActor_C.ExecuteUbergraph_BTT_GetTargetActor");

	FExecuteUbergraph_BTT_GetTargetActor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

