#include "pch.h"
#include "SDK.h"

void ABP_DeathBeetle_Common_C::Added_B850C33A4DF2D5977E1ACFB2F351E777(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.Added_B850C33A4DF2D5977E1ACFB2F351E777");

	FAdded_B850C33A4DF2D5977E1ACFB2F351E777 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathBeetle_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathBeetle_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_DeathBeetle_Common_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_DeathBeetle_Common_C::ExecuteUbergraph_BP_DeathBeetle_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_DeathBeetle_Common.BP_DeathBeetle_Common_C.ExecuteUbergraph_BP_DeathBeetle_Common");

	FExecuteUbergraph_BP_DeathBeetle_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

