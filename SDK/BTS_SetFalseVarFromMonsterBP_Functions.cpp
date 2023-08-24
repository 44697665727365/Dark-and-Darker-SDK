#include "pch.h"
#include "SDK.h"

void UBTS_SetFalseVarFromMonsterBP_C::ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ReceiveDeactivationAI");

	FReceiveDeactivationAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTS_SetFalseVarFromMonsterBP_C::ExecuteUbergraph_BTS_SetFalseVarFromMonsterBP(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTS_SetFalseVarFromMonsterBP.BTS_SetFalseVarFromMonsterBP_C.ExecuteUbergraph_BTS_SetFalseVarFromMonsterBP");

	FExecuteUbergraph_BTS_SetFalseVarFromMonsterBP parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

