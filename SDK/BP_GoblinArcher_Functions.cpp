#include "pch.h"
#include "SDK.h"

void ABP_GoblinArcher_C::OnFMsgGASAttributeNotifyBlueprint(struct FMsgGASAttributeNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinArcher.BP_GoblinArcher_C.OnFMsgGASAttributeNotifyBlueprint");

	FOnFMsgGASAttributeNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_GoblinArcher_C::ExecuteUbergraph_BP_GoblinArcher(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GoblinArcher.BP_GoblinArcher_C.ExecuteUbergraph_BP_GoblinArcher");

	FExecuteUbergraph_BP_GoblinArcher parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

