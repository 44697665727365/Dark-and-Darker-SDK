#include "pch.h"
#include "SDK.h"

void ABP_TrackAxe_C::SetAbilityTriggerTag(struct FGameplayTag New Trigger Tag, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.SetAbilityTriggerTag");

	FSetAbilityTriggerTag parms{};	
	parms.New Trigger Tag = New Trigger Tag;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::OnMessageReceived_8813A0C944F113C8C2169F887C962471(struct UMsgBaseNode* ProxyObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.OnMessageReceived_8813A0C944F113C8C2169F887C962471");

	FOnMessageReceived_8813A0C944F113C8C2169F887C962471 parms{};	
	parms.ProxyObject = ProxyObject;

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::ActiveEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.ActiveEvent");

	FActiveEvent parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::EventFMsgSoundEvent(struct FMsgSoundEvent Msg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.EventFMsgSoundEvent");

	FEventFMsgSoundEvent parms{};	
	parms.Msg = Msg;

	ProcessEvent(fn, &parms);
}

void ABP_TrackAxe_C::ExecuteUbergraph_BP_TrackAxe(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TrackAxe.BP_TrackAxe_C.ExecuteUbergraph_BP_TrackAxe");

	FExecuteUbergraph_BP_TrackAxe parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

