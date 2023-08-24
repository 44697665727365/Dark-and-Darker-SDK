#include "pch.h"
#include "SDK.h"

void UBTT_RotateWithOptions_C::GetFloatRotationValue(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetFloatRotationValue");

	FGetFloatRotationValue parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_RotateWithOptions_C::GetHitBoxLocation(struct ADCCharacterBase* DCCharacterBase){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetHitBoxLocation");

	FGetHitBoxLocation parms{};	
	parms.DCCharacterBase = DCCharacterBase;

	ProcessEvent(fn, &parms);
}

void UBTT_RotateWithOptions_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_RotateWithOptions_C::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTT_RotateWithOptions_C::ExecuteUbergraph_BTT_RotateWithOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ExecuteUbergraph_BTT_RotateWithOptions");

	FExecuteUbergraph_BTT_RotateWithOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

