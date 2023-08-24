#include "pch.h"
#include "SDK.h"

void UBTT_SetTargetActorToSelf_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_SetTargetActorToSelf_C::ExecuteUbergraph_BTT_SetTargetActorToSelf(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SetTargetActorToSelf.BTT_SetTargetActorToSelf_C.ExecuteUbergraph_BTT_SetTargetActorToSelf");

	FExecuteUbergraph_BTT_SetTargetActorToSelf parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

