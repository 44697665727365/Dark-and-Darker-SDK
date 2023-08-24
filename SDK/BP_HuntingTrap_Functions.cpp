#include "pch.h"
#include "SDK.h"

void ABP_HuntingTrap_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrap.BP_HuntingTrap_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrap_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrap.BP_HuntingTrap_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrap_C::OnHiddenInGameStateChanged(bool bIsHidden){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrap.BP_HuntingTrap_C.OnHiddenInGameStateChanged");

	FOnHiddenInGameStateChanged parms{};	
	parms.bIsHidden = bIsHidden;

	ProcessEvent(fn, &parms);
}

void ABP_HuntingTrap_C::ExecuteUbergraph_BP_HuntingTrap(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HuntingTrap.BP_HuntingTrap_C.ExecuteUbergraph_BP_HuntingTrap");

	FExecuteUbergraph_BP_HuntingTrap parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

