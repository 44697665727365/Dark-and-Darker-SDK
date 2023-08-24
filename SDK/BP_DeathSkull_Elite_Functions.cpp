#include "pch.h"
#include "SDK.h"

void ABP_DeathSkull_Elite_C::ExecuteUbergraph_BP_DeathSkull_Elite(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Elite.BP_DeathSkull_Elite_C.ExecuteUbergraph_BP_DeathSkull_Elite");

	FExecuteUbergraph_BP_DeathSkull_Elite parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

