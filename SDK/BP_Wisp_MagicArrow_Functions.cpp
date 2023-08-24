#include "pch.h"
#include "SDK.h"

void ABP_Wisp_MagicArrow_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp_MagicArrow.BP_Wisp_MagicArrow_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Wisp_MagicArrow_C::ExecuteUbergraph_BP_Wisp_MagicArrow(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Wisp_MagicArrow.BP_Wisp_MagicArrow_C.ExecuteUbergraph_BP_Wisp_MagicArrow");

	FExecuteUbergraph_BP_Wisp_MagicArrow parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

