#include "pch.h"
#include "SDK.h"

void UBTT_WaitWithOptions_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_WaitWithOptions_C::ExecuteUbergraph_BTT_WaitWithOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_WaitWithOptions.BTT_WaitWithOptions_C.ExecuteUbergraph_BTT_WaitWithOptions");

	FExecuteUbergraph_BTT_WaitWithOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

