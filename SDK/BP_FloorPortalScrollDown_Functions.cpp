#include "pch.h"
#include "SDK.h"

void ABP_FloorPortalScrollDown_C::PlayPortalFXTimeline__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFXTimeline__FinishedFunc");

	FPlayPortalFXTimeline__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollDown_C::PlayPortalFXTimeline__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFXTimeline__UpdateFunc");

	FPlayPortalFXTimeline__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollDown_C::OnOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.OnOpen");

	FOnOpen parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollDown_C::PlayPortalFX(bool bOpen){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.PlayPortalFX");

	FPlayPortalFX parms{};	
	parms.bOpen = bOpen;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollDown_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollDown_C::ExecuteUbergraph_BP_FloorPortalScrollDown(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollDown.BP_FloorPortalScrollDown_C.ExecuteUbergraph_BP_FloorPortalScrollDown");

	FExecuteUbergraph_BP_FloorPortalScrollDown parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

