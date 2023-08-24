#include "pch.h"
#include "SDK.h"

void UBTT_SkillOnWhileState_C::Removed_241FC3634545136A0308048C3368EF5F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.Removed_241FC3634545136A0308048C3368EF5F");

	FRemoved_241FC3634545136A0308048C3368EF5F parms{};	

	ProcessEvent(fn, &parms);
}

void UBTT_SkillOnWhileState_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_SkillOnWhileState_C::ExecuteUbergraph_BTT_SkillOnWhileState(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOnWhileState.BTT_SkillOnWhileState_C.ExecuteUbergraph_BTT_SkillOnWhileState");

	FExecuteUbergraph_BTT_SkillOnWhileState parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

