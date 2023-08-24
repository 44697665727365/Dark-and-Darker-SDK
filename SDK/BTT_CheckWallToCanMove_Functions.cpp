#include "pch.h"
#include "SDK.h"

void UBTT_CheckWallToCanMove_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_CheckWallToCanMove_C::ExecuteUbergraph_BTT_CheckWallToCanMove(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ExecuteUbergraph_BTT_CheckWallToCanMove");

	FExecuteUbergraph_BTT_CheckWallToCanMove parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

