#include "pch.h"
#include "SDK.h"

void ABP_SkeletonCrossbowman_Bolt_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCrossbowman_Bolt.BP_SkeletonCrossbowman_Bolt_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonCrossbowman_Bolt_C::ExecuteUbergraph_BP_SkeletonCrossbowman_Bolt(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonCrossbowman_Bolt.BP_SkeletonCrossbowman_Bolt_C.ExecuteUbergraph_BP_SkeletonCrossbowman_Bolt");

	FExecuteUbergraph_BP_SkeletonCrossbowman_Bolt parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

