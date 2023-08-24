#include "pch.h"
#include "SDK.h"

void ABP_Otto_C::RandomActionFromLie(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.RandomActionFromLie");

	FRandomActionFromLie parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::RandomActionFromSit(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.RandomActionFromSit");

	FRandomActionFromSit parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::RandomActionFromStand(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.RandomActionFromStand");

	FRandomActionFromStand parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::Removed_6EE33BEA4490BDF397E479ADC218DF7F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.Removed_6EE33BEA4490BDF397E479ADC218DF7F");

	FRemoved_6EE33BEA4490BDF397E479ADC218DF7F parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.OnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8");

	FOnMessageReceived_C089C7A74477A8F15E2C599BA276E0B8 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::OnMessageReceived_B39992A64B1101C700A945B3A442429D(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.OnMessageReceived_B39992A64B1101C700A945B3A442429D");

	FOnMessageReceived_B39992A64B1101C700A945B3A442429D parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::EventFMsgInteractStarted(struct FMsgInteractStarted Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.EventFMsgInteractStarted");

	FEventFMsgInteractStarted parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::EventFMsgInteractFailed(struct FMsgInteractFailed Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.EventFMsgInteractFailed");

	FEventFMsgInteractFailed parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_Otto_C::ExecuteUbergraph_BP_Otto(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Otto.BP_Otto_C.ExecuteUbergraph_BP_Otto");

	FExecuteUbergraph_BP_Otto parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

