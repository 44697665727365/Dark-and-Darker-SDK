#include "pch.h"
#include "SDK.h"

void UGA_ClarityPotionConsumeGranted_C::OnFinished_58D70B5D48ED8FE1457C9690A8734640(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.OnFinished_58D70B5D48ED8FE1457C9690A8734640");

	FOnFinished_58D70B5D48ED8FE1457C9690A8734640 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ClarityPotionConsumeGranted_C::OnPerformAction_58D70B5D48ED8FE1457C9690A8734640(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.OnPerformAction_58D70B5D48ED8FE1457C9690A8734640");

	FOnPerformAction_58D70B5D48ED8FE1457C9690A8734640 parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ClarityPotionConsumeGranted_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ClarityPotionConsumeGranted_C::ExecuteUbergraph_GA_ClarityPotionConsumeGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ClarityPotionConsumeGranted.GA_ClarityPotionConsumeGranted_C.ExecuteUbergraph_GA_ClarityPotionConsumeGranted");

	FExecuteUbergraph_GA_ClarityPotionConsumeGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

