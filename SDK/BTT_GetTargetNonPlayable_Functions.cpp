#include "pch.h"
#include "SDK.h"

void UBTT_GetTargetNonPlayable_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetNonPlayable_C::OnTaskFinished(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult TaskResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.OnTaskFinished");

	FOnTaskFinished parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.TaskResult = TaskResult;

	ProcessEvent(fn, &parms);
}

void UBTT_GetTargetNonPlayable_C::ExecuteUbergraph_BTT_GetTargetNonPlayable(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_GetTargetNonPlayable.BTT_GetTargetNonPlayable_C.ExecuteUbergraph_BTT_GetTargetNonPlayable");

	FExecuteUbergraph_BTT_GetTargetNonPlayable parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

