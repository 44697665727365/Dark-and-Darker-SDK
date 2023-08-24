#include "pch.h"
#include "SDK.h"

void UBTD_CountingTargetNumber_C::FilterRange(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterRange");

	FFilterRange parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CountingTargetNumber_C::FilterTags(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.FilterTags");

	FFilterTags parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CountingTargetNumber_C::GetTargetArray(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.GetTargetArray");

	FGetTargetArray parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CountingTargetNumber_C::TargetingType(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.TargetingType");

	FTargetingType parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

bool UBTD_CountingTargetNumber_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CountingTargetNumber.BTD_CountingTargetNumber_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

