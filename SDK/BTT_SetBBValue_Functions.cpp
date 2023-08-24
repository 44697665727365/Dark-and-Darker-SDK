#include "pch.h"
#include "SDK.h"

void UBTT_SetBBValue_C::IntSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetBBValue.BTT_SetBBValue_C.IntSet");

	FIntSet parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_SetBBValue_C::FloatSet(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetBBValue.BTT_SetBBValue_C.FloatSet");

	FFloatSet parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_SetBBValue_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetBBValue.BTT_SetBBValue_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_SetBBValue_C::ExecuteUbergraph_BTT_SetBBValue(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetBBValue.BTT_SetBBValue_C.ExecuteUbergraph_BTT_SetBBValue");

	FExecuteUbergraph_BTT_SetBBValue parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

