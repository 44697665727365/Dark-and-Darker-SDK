#include "pch.h"
#include "SDK.h"

void UGA_SkeletonFootmanResurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanResurrection.GA_SkeletonFootmanResurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonFootmanResurrection_C::ExecuteUbergraph_GA_SkeletonFootmanResurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonFootmanResurrection.GA_SkeletonFootmanResurrection_C.ExecuteUbergraph_GA_SkeletonFootmanResurrection");

	FExecuteUbergraph_GA_SkeletonFootmanResurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

