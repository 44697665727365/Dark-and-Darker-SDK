#include "pch.h"
#include "SDK.h"

void ABP_FloorPortalScrollEscape_C::PlayPortalFXTimeline__FinishedFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFXTimeline__FinishedFunc");

	FPlayPortalFXTimeline__FinishedFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollEscape_C::PlayPortalFXTimeline__UpdateFunc(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFXTimeline__UpdateFunc");

	FPlayPortalFXTimeline__UpdateFunc parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollEscape_C::OnOpen(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.OnOpen");

	FOnOpen parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollEscape_C::PlayPortalFX(bool bOpen){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.PlayPortalFX");

	FPlayPortalFX parms{};	
	parms.bOpen = bOpen;

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollEscape_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FloorPortalScrollEscape_C::ExecuteUbergraph_BP_FloorPortalScrollEscape(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FloorPortalScrollEscape.BP_FloorPortalScrollEscape_C.ExecuteUbergraph_BP_FloorPortalScrollEscape");

	FExecuteUbergraph_BP_FloorPortalScrollEscape parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

