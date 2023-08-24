#include "pch.h"
#include "SDK.h"

void UBTT_CheckHeightFromTargetAndMove_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_CheckHeightFromTargetAndMove_C::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTT_CheckHeightFromTargetAndMove_C::ExecuteUbergraph_BTT_CheckHeightFromTargetAndMove(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ExecuteUbergraph_BTT_CheckHeightFromTargetAndMove");

	FExecuteUbergraph_BTT_CheckHeightFromTargetAndMove parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

