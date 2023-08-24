#include "pch.h"
#include "SDK.h"

void ABP_DeathSkull_Common_Summoned_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common_Summoned.BP_DeathSkull_Common_Summoned_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_Summoned_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common_Summoned.BP_DeathSkull_Common_Summoned_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathSkull_Common_Summoned_C::ExecuteUbergraph_BP_DeathSkull_Common_Summoned(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathSkull_Common_Summoned.BP_DeathSkull_Common_Summoned_C.ExecuteUbergraph_BP_DeathSkull_Common_Summoned");

	FExecuteUbergraph_BP_DeathSkull_Common_Summoned parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

