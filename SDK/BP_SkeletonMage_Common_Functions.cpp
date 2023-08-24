#include "pch.h"
#include "SDK.h"

void ABP_SkeletonMage_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonMage_Common.BP_SkeletonMage_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonMage_Common_C::ExecuteUbergraph_BP_SkeletonMage_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonMage_Common.BP_SkeletonMage_Common_C.ExecuteUbergraph_BP_SkeletonMage_Common");

	FExecuteUbergraph_BP_SkeletonMage_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

