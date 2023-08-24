#include "pch.h"
#include "SDK.h"

void UGA_ShadowRunner_C::Removed_8CBF5F874D65963B86B997AC7C280A2C(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ShadowRunner.GA_ShadowRunner_C.Removed_8CBF5F874D65963B86B997AC7C280A2C");

	FRemoved_8CBF5F874D65963B86B997AC7C280A2C parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ShadowRunner_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ShadowRunner.GA_ShadowRunner_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ShadowRunner_C::ExecuteUbergraph_GA_ShadowRunner(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ShadowRunner.GA_ShadowRunner_C.ExecuteUbergraph_GA_ShadowRunner");

	FExecuteUbergraph_GA_ShadowRunner parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

