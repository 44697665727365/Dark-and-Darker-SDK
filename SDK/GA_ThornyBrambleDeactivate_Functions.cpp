#include "pch.h"
#include "SDK.h"

void UGA_ThornyBrambleDeactivate_C::OnFinish_E371C157467D14B21AE61BBD68EA0BAF(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.OnFinish_E371C157467D14B21AE61BBD68EA0BAF");

	FOnFinish_E371C157467D14B21AE61BBD68EA0BAF parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ThornyBrambleDeactivate_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ThornyBrambleDeactivate_C::ExecuteUbergraph_GA_ThornyBrambleDeactivate(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ThornyBrambleDeactivate.GA_ThornyBrambleDeactivate_C.ExecuteUbergraph_GA_ThornyBrambleDeactivate");

	FExecuteUbergraph_GA_ThornyBrambleDeactivate parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

