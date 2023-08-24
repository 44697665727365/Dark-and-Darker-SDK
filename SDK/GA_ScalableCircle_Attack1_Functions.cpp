#include "pch.h"
#include "SDK.h"

void UGA_ScalableCircle_Attack1_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ScalableCircle_Attack1.GA_ScalableCircle_Attack1_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ScalableCircle_Attack1_C::ExecuteUbergraph_GA_ScalableCircle_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ScalableCircle_Attack1.GA_ScalableCircle_Attack1_C.ExecuteUbergraph_GA_ScalableCircle_Attack1");

	FExecuteUbergraph_GA_ScalableCircle_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

