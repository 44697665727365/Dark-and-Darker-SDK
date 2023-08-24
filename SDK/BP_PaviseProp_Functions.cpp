#include "pch.h"
#include "SDK.h"

void ABP_PaviseProp_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PaviseProp.BP_PaviseProp_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_PaviseProp_C::ExecuteUbergraph_BP_PaviseProp(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PaviseProp.BP_PaviseProp_C.ExecuteUbergraph_BP_PaviseProp");

	FExecuteUbergraph_BP_PaviseProp parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

