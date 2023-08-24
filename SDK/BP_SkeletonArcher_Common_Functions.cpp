#include "pch.h"
#include "SDK.h"

void ABP_SkeletonArcher_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Common_C::OnBeforeDeath(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.OnBeforeDeath");

	FOnBeforeDeath parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonArcher_Common_C::ExecuteUbergraph_BP_SkeletonArcher_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonArcher_Common.BP_SkeletonArcher_Common_C.ExecuteUbergraph_BP_SkeletonArcher_Common");

	FExecuteUbergraph_BP_SkeletonArcher_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

