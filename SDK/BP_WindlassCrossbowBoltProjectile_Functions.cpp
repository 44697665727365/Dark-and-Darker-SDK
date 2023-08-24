#include "pch.h"
#include "SDK.h"

void ABP_WindlassCrossbowBoltProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WindlassCrossbowBoltProjectile.BP_WindlassCrossbowBoltProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_WindlassCrossbowBoltProjectile_C::ExecuteUbergraph_BP_WindlassCrossbowBoltProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_WindlassCrossbowBoltProjectile.BP_WindlassCrossbowBoltProjectile_C.ExecuteUbergraph_BP_WindlassCrossbowBoltProjectile");

	FExecuteUbergraph_BP_WindlassCrossbowBoltProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

