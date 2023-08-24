#include "pch.h"
#include "SDK.h"

void ABP_FlameSpout_C::GetDeactivateTime(double& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.GetDeactivateTime");

	FGetDeactivateTime parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::GetActivateTime(double& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.GetActivateTime");

	FGetActivateTime parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::OnTrapDeactivate(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.OnTrapDeactivate");

	FOnTrapDeactivate parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::OnTrapActivate(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.OnTrapActivate");

	FOnTrapActivate parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::ReceivePreInitializeComponents(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.ReceivePreInitializeComponents");

	FReceivePreInitializeComponents parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::EventMsgSound(struct FMsgSoundEvent InMsg){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.EventMsgSound");

	FEventMsgSound parms{};	
	parms.InMsg = InMsg;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::Activate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.Activate");

	FActivate parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_FlameSpout_C::ExecuteUbergraph_BP_FlameSpout(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_FlameSpout.BP_FlameSpout_C.ExecuteUbergraph_BP_FlameSpout");

	FExecuteUbergraph_BP_FlameSpout parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

