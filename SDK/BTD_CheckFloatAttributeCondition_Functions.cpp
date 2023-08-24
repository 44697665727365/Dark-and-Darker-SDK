#include "pch.h"
#include "SDK.h"

void UBTD_CheckFloatAttributeCondition_C::Compare Move Speed(double Move Speed, bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Move Speed");

	FCompare Move Speed parms{};	
	parms.Move Speed = Move Speed;
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckFloatAttributeCondition_C::Compare Secondary Attack Power(double Secondary Attack Power, bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Secondary Attack Power");

	FCompare Secondary Attack Power parms{};	
	parms.Secondary Attack Power = Secondary Attack Power;
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckFloatAttributeCondition_C::Compare Primary Attack Power(double Primary Attack Power, bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Primary Attack Power");

	FCompare Primary Attack Power parms{};	
	parms.Primary Attack Power = Primary Attack Power;
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UBTD_CheckFloatAttributeCondition_C::Compare Float Value(double CompareFloatValue, bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.Compare Float Value");

	FCompare Float Value parms{};	
	parms.CompareFloatValue = CompareFloatValue;
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

bool UBTD_CheckFloatAttributeCondition_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckFloatAttributeCondition.BTD_CheckFloatAttributeCondition_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

