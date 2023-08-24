#include "pch.h"
#include "SDK.h"

void UBTD_SetFloatValue_C::Add(double FloatValue Before Change){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SetFloatValue.BTD_SetFloatValue_C.Add");

	FAdd parms{};	
	parms.FloatValue Before Change = FloatValue Before Change;

	ProcessEvent(fn, &parms);
}

void UBTD_SetFloatValue_C::Divide(double FloatValue Before Change){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SetFloatValue.BTD_SetFloatValue_C.Divide");

	FDivide parms{};	
	parms.FloatValue Before Change = FloatValue Before Change;

	ProcessEvent(fn, &parms);
}

void UBTD_SetFloatValue_C::Multiply(double FloatValue Before Change){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SetFloatValue.BTD_SetFloatValue_C.Multiply");

	FMultiply parms{};	
	parms.FloatValue Before Change = FloatValue Before Change;

	ProcessEvent(fn, &parms);
}

void UBTD_SetFloatValue_C::Subtract(double FloatValue Before Change){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SetFloatValue.BTD_SetFloatValue_C.Subtract");

	FSubtract parms{};	
	parms.FloatValue Before Change = FloatValue Before Change;

	ProcessEvent(fn, &parms);
}

bool UBTD_SetFloatValue_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SetFloatValue.BTD_SetFloatValue_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

