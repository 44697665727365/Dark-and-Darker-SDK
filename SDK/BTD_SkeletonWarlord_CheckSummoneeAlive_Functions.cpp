#include "pch.h"
#include "SDK.h"

bool UBTD_SkeletonWarlord_CheckSummoneeAlive_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_SkeletonWarlord_CheckSummoneeAlive.BTD_SkeletonWarlord_CheckSummoneeAlive_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

