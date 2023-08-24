#include "pch.h"
#include "SDK.h"

void UGA_JollyTime_C::Added_A8FBDC3B40B7390403C7DDAC5D94E4F9(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_JollyTime.GA_JollyTime_C.Added_A8FBDC3B40B7390403C7DDAC5D94E4F9");

	FAdded_A8FBDC3B40B7390403C7DDAC5D94E4F9 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_JollyTime_C::Removed_7A7B47FB4D02B66E25ABF1B0C57D6631(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_JollyTime.GA_JollyTime_C.Removed_7A7B47FB4D02B66E25ABF1B0C57D6631");

	FRemoved_7A7B47FB4D02B66E25ABF1B0C57D6631 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_JollyTime_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_JollyTime.GA_JollyTime_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_JollyTime_C::ExecuteUbergraph_GA_JollyTime(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_JollyTime.GA_JollyTime_C.ExecuteUbergraph_GA_JollyTime");

	FExecuteUbergraph_GA_JollyTime parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

