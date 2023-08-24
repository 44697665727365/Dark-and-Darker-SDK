#include "pch.h"
#include "SDK.h"

void ABP_GiantSpider_CobWeb_C::ReceiveDestroyed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ReceiveDestroyed");

	FReceiveDestroyed parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantSpider_CobWeb_C::EmergeCobWeb(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.EmergeCobWeb");

	FEmergeCobWeb parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantSpider_CobWeb_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantSpider_CobWeb_C::ExecuteUbergraph_BP_GiantSpider_CobWeb(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantSpider_CobWeb.BP_GiantSpider_CobWeb_C.ExecuteUbergraph_BP_GiantSpider_CobWeb");

	FExecuteUbergraph_BP_GiantSpider_CobWeb parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

