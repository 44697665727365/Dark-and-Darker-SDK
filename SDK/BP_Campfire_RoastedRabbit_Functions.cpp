#include "pch.h"
#include "SDK.h"

void ABP_Campfire_RoastedRabbit_C::Deactivate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_RoastedRabbit.BP_Campfire_RoastedRabbit_C.Deactivate Particle System");

	FDeactivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_RoastedRabbit_C::Activate Particle System(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_RoastedRabbit.BP_Campfire_RoastedRabbit_C.Activate Particle System");

	FActivate Particle System parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_RoastedRabbit_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_RoastedRabbit.BP_Campfire_RoastedRabbit_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Campfire_RoastedRabbit_C::ExecuteUbergraph_BP_Campfire_RoastedRabbit(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Campfire_RoastedRabbit.BP_Campfire_RoastedRabbit_C.ExecuteUbergraph_BP_Campfire_RoastedRabbit");

	FExecuteUbergraph_BP_Campfire_RoastedRabbit parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

