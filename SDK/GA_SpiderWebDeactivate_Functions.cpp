#include "pch.h"
#include "SDK.h"

void UGA_SpiderWebDeactivate_C::OnFinish_A5712FA946A02343815E6CB60CEC09F5(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebDeactivate.GA_SpiderWebDeactivate_C.OnFinish_A5712FA946A02343815E6CB60CEC09F5");

	FOnFinish_A5712FA946A02343815E6CB60CEC09F5 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebDeactivate_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebDeactivate.GA_SpiderWebDeactivate_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SpiderWebDeactivate_C::ExecuteUbergraph_GA_SpiderWebDeactivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SpiderWebDeactivate.GA_SpiderWebDeactivate_C.ExecuteUbergraph_GA_SpiderWebDeactivate");

	FExecuteUbergraph_GA_SpiderWebDeactivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

