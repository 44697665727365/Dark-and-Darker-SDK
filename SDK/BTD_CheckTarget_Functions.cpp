#include "pch.h"
#include "SDK.h"

void UBTD_CheckTarget_C::ClearVariables(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.ClearVariables");

	FClearVariables parms{};	

	ProcessEvent(fn, &parms);
}

void UBTD_CheckTarget_C::FilterHP(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.FilterHP");

	FFilterHP parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckTarget_C::FilterRange(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.FilterRange");

	FFilterRange parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckTarget_C::FilterTags(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.FilterTags");

	FFilterTags parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckTarget_C::TargetingType(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.TargetingType");

	FTargetingType parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

bool UBTD_CheckTarget_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckTarget.BTD_CheckTarget_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

