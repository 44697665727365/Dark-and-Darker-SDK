#include "pch.h"
#include "SDK.h"

void ABP_HandCrossbowBoltProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HandCrossbowBoltProjectile.BP_HandCrossbowBoltProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HandCrossbowBoltProjectile_C::ExecuteUbergraph_BP_HandCrossbowBoltProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HandCrossbowBoltProjectile.BP_HandCrossbowBoltProjectile_C.ExecuteUbergraph_BP_HandCrossbowBoltProjectile");

	FExecuteUbergraph_BP_HandCrossbowBoltProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

