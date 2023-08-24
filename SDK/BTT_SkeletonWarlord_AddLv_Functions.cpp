#include "pch.h"
#include "SDK.h"

void UBTT_SkeletonWarlord_AddLv_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkeletonWarlord_AddLv.BTT_SkeletonWarlord_AddLv_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_SkeletonWarlord_AddLv_C::ExecuteUbergraph_BTT_SkeletonWarlord_AddLv(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkeletonWarlord_AddLv.BTT_SkeletonWarlord_AddLv_C.ExecuteUbergraph_BTT_SkeletonWarlord_AddLv");

	FExecuteUbergraph_BTT_SkeletonWarlord_AddLv parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

