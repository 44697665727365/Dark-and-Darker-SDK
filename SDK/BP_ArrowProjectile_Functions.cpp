#include "pch.h"
#include "SDK.h"

void ABP_ArrowProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ArrowProjectile.BP_ArrowProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ArrowProjectile_C::ExecuteUbergraph_BP_ArrowProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ArrowProjectile.BP_ArrowProjectile_C.ExecuteUbergraph_BP_ArrowProjectile");

	FExecuteUbergraph_BP_ArrowProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

