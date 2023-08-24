#include "pch.h"
#include "SDK.h"

void ABP_RuinsGolem_StonePillar_C::CollapsePillar(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem_StonePillar.BP_RuinsGolem_StonePillar_C.CollapsePillar");

	FCollapsePillar parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_RuinsGolem_StonePillar_C::ExecuteUbergraph_BP_RuinsGolem_StonePillar(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_RuinsGolem_StonePillar.BP_RuinsGolem_StonePillar_C.ExecuteUbergraph_BP_RuinsGolem_StonePillar");

	FExecuteUbergraph_BP_RuinsGolem_StonePillar parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

