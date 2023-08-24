#include "pch.h"
#include "SDK.h"

void UBTT_AddTimer_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_AddTimer.BTT_AddTimer_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_AddTimer_C::ExecuteUbergraph_BTT_AddTimer(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_AddTimer.BTT_AddTimer_C.ExecuteUbergraph_BTT_AddTimer");

	FExecuteUbergraph_BTT_AddTimer parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

