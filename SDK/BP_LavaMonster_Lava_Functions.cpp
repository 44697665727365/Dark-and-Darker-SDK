#include "pch.h"
#include "SDK.h"

void ABP_LavaMonster_Lava_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LavaMonster_Lava.BP_LavaMonster_Lava_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LavaMonster_Lava_C::ExecuteUbergraph_BP_LavaMonster_Lava(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LavaMonster_Lava.BP_LavaMonster_Lava_C.ExecuteUbergraph_BP_LavaMonster_Lava");

	FExecuteUbergraph_BP_LavaMonster_Lava parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

