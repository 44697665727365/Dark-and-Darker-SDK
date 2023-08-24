#include "pch.h"
#include "SDK.h"

void ABP_GiantWorm_PoisonArea_C::SpawnFiringFX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm_PoisonArea.BP_GiantWorm_PoisonArea_C.SpawnFiringFX");

	FSpawnFiringFX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantWorm_PoisonArea_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm_PoisonArea.BP_GiantWorm_PoisonArea_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantWorm_PoisonArea_C::ReceiveDestroyed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm_PoisonArea.BP_GiantWorm_PoisonArea_C.ReceiveDestroyed");

	FReceiveDestroyed parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantWorm_PoisonArea_C::ExecuteUbergraph_BP_GiantWorm_PoisonArea(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantWorm_PoisonArea.BP_GiantWorm_PoisonArea_C.ExecuteUbergraph_BP_GiantWorm_PoisonArea");

	FExecuteUbergraph_BP_GiantWorm_PoisonArea parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

