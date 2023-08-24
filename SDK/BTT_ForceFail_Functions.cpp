#include "pch.h"
#include "SDK.h"

void UBTT_ForceFail_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_ForceFail.BTT_ForceFail_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_ForceFail_C::ExecuteUbergraph_BTT_ForceFail(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_ForceFail.BTT_ForceFail_C.ExecuteUbergraph_BTT_ForceFail");

	FExecuteUbergraph_BTT_ForceFail parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

