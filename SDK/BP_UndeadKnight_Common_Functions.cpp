#include "pch.h"
#include "SDK.h"

void ABP_UndeadKnight_Common_C::Added_F50AB48B481209DF9DA8D5A43171B136(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.Added_F50AB48B481209DF9DA8D5A43171B136");

	FAdded_F50AB48B481209DF9DA8D5A43171B136 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_UndeadKnight_Common_C::Added_E19F842F40DC4892A5519BAE1CE16F59(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.Added_E19F842F40DC4892A5519BAE1CE16F59");

	FAdded_E19F842F40DC4892A5519BAE1CE16F59 parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_UndeadKnight_Common_C::OnSetAI(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.OnSetAI");

	FOnSetAI parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_UndeadKnight_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_UndeadKnight_Common_C::OnFMsgGASActorDieNotifyBlueprint(struct FMsgGASActorDieNotify& InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.OnFMsgGASActorDieNotifyBlueprint");

	FOnFMsgGASActorDieNotifyBlueprint parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_UndeadKnight_Common_C::ExecuteUbergraph_BP_UndeadKnight_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_UndeadKnight_Common.BP_UndeadKnight_Common_C.ExecuteUbergraph_BP_UndeadKnight_Common");

	FExecuteUbergraph_BP_UndeadKnight_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

