#include "pch.h"
#include "SDK.h"

void ABP_GiantDragonfly_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_GiantDragonfly_Common_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_GiantDragonfly_Common_C::ExecuteUbergraph_BP_GiantDragonfly_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GiantDragonfly_Common.BP_GiantDragonfly_Common_C.ExecuteUbergraph_BP_GiantDragonfly_Common");

	FExecuteUbergraph_BP_GiantDragonfly_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

