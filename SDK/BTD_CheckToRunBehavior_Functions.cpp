#include "pch.h"
#include "SDK.h"

void UBTD_CheckToRunBehavior_C::Check Combat Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* MonsterBP, bool& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Combat Action Type Function");

	FCheck Combat Action Type Function parms{};	
	parms.MonsterBP = MonsterBP;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

bool UBTD_CheckToRunBehavior_C::Check Peace Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* MonsterBP){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Peace Action Type Function");

	FCheck Peace Action Type Function parms{};	
	parms.MonsterBP = MonsterBP;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UBTD_CheckToRunBehavior_C::Check Conditional Top Priority Action Condition Function(struct ABP_DCMonsterBaseWithOptions_C* Monster BP){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Conditional Top Priority Action Condition Function");

	FCheck Conditional Top Priority Action Condition Function parms{};	
	parms.Monster BP = Monster BP;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UBTD_CheckToRunBehavior_C::Check Conditional Top Priority Action Type Function(struct ABP_DCMonsterBaseWithOptions_C* Monster BP, bool& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.Check Conditional Top Priority Action Type Function");

	FCheck Conditional Top Priority Action Type Function parms{};	
	parms.Monster BP = Monster BP;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

bool UBTD_CheckToRunBehavior_C::PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BTD_CheckToRunBehavior.BTD_CheckToRunBehavior_C.PerformConditionCheckAI");

	FPerformConditionCheckAI parms{};	
	parms.OwnerController = OwnerController;
	parms.ControlledPawn = ControlledPawn;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

