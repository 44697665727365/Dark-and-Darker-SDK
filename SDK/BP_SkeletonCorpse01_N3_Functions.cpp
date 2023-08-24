#include "pch.h"
#include "SDK.h"

void ABP_SkeletonCorpse01_N3_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCorpse01_N3.BP_SkeletonCorpse01_N3_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonCorpse01_N3_C::ExecuteUbergraph_BP_SkeletonCorpse01_N3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCorpse01_N3.BP_SkeletonCorpse01_N3_C.ExecuteUbergraph_BP_SkeletonCorpse01_N3");

	FExecuteUbergraph_BP_SkeletonCorpse01_N3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

