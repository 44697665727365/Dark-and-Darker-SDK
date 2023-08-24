#include "pch.h"
#include "SDK.h"

void UBTT_SkillOn_C::ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOn.BTT_SkillOn_C.ReceiveExecuteAI");

	FReceiveExecuteAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);
}

void UBTT_SkillOn_C::ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOn.BTT_SkillOn_C.ReceiveTickAI");

	FReceiveTickAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void UBTT_SkillOn_C::ExecuteUbergraph_BTT_SkillOn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTT_SkillOn.BTT_SkillOn_C.ExecuteUbergraph_BTT_SkillOn");

	FExecuteUbergraph_BTT_SkillOn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

