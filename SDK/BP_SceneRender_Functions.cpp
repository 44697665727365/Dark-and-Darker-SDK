#include "pch.h"
#include "SDK.h"

void ABP_SceneRender_C::Revert(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.Revert");

	FRevert parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SceneRender_C::SetRender(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.SetRender");

	FSetRender parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SceneRender_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SceneRender_C::ReceiveDestroyed(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.ReceiveDestroyed");

	FReceiveDestroyed parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SceneRender_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_SceneRender_C::ExecuteUbergraph_BP_SceneRender(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SceneRender.BP_SceneRender_C.ExecuteUbergraph_BP_SceneRender");

	FExecuteUbergraph_BP_SceneRender parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

