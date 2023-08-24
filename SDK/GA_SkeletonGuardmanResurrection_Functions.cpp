#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanResurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanResurrection.GA_SkeletonGuardmanResurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanResurrection_C::ExecuteUbergraph_GA_SkeletonGuardmanResurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanResurrection.GA_SkeletonGuardmanResurrection_C.ExecuteUbergraph_GA_SkeletonGuardmanResurrection");

	FExecuteUbergraph_GA_SkeletonGuardmanResurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

