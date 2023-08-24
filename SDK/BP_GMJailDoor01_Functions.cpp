#include "pch.h"
#include "SDK.h"

void ABP_GMJailDoor01_C::InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractFailed");

	FInteractFailed parms{};	
	parms.Interacter = Interacter;
	parms.EventTag = EventTag;

	ProcessEvent(fn, &parms);
}

void ABP_GMJailDoor01_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GMJailDoor01.BP_GMJailDoor01_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_GMJailDoor01_C::ExecuteUbergraph_BP_GMJailDoor01(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_GMJailDoor01.BP_GMJailDoor01_C.ExecuteUbergraph_BP_GMJailDoor01");

	FExecuteUbergraph_BP_GMJailDoor01 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

