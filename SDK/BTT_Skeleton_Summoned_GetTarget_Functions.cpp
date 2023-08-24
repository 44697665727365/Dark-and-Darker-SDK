#include "pch.h"
#include "SDK.h"

void UBTT_Skeleton_Summoned_GetTarget_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_Skeleton_Summoned_GetTarget_C::ExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_Skeleton_Summoned_GetTarget.BTT_Skeleton_Summoned_GetTarget_C.ExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget");

	FExecuteUbergraph_BTT_Skeleton_Summoned_GetTarget parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

