#include "pch.h"
#include "SDK.h"

void UBTD_CheckBBValue_C::CompareVectorValue(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareVectorValue");

	FCompareVectorValue parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

bool UBTD_CheckBBValue_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckBBValue.BTD_CheckBBValue_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTD_CheckBBValue_C::CompareIntValue(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareIntValue");

	FCompareIntValue parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckBBValue_C::CompareFloatValue(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckBBValue.BTD_CheckBBValue_C.CompareFloatValue");

	FCompareFloatValue parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

