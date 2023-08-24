#include "pch.h"
#include "SDK.h"

void UBTT_GetClosestTargetByChaoticDiscord_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_GetClosestTargetByChaoticDiscord_C::ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetClosestTargetByChaoticDiscord.BTT_GetClosestTargetByChaoticDiscord_C.ExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord");

	FExecuteUbergraph_BTT_GetClosestTargetByChaoticDiscord parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

