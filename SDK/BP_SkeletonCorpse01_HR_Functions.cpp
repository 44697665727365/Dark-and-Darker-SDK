#include "pch.h"
#include "SDK.h"

void ABP_SkeletonCorpse01_HR_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCorpse01_HR.BP_SkeletonCorpse01_HR_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonCorpse01_HR_C::ExecuteUbergraph_BP_SkeletonCorpse01_HR(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCorpse01_HR.BP_SkeletonCorpse01_HR_C.ExecuteUbergraph_BP_SkeletonCorpse01_HR");

	FExecuteUbergraph_BP_SkeletonCorpse01_HR parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

