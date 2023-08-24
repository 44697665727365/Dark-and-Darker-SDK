#include "pch.h"
#include "SDK.h"

void ABP_ChestSpecial_Base_C::InteractFailed(struct AActor* Interacter, struct FGameplayTag EventTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractFailed");

	FInteractFailed parms{};	
	parms.Interacter = Interacter;
	parms.EventTag = EventTag;

	ProcessEvent(fn, &parms);
}

void ABP_ChestSpecial_Base_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_ChestSpecial_Base_C::ExecuteUbergraph_BP_ChestSpecial_Base(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ChestSpecial_Base.BP_ChestSpecial_Base_C.ExecuteUbergraph_BP_ChestSpecial_Base");

	FExecuteUbergraph_BP_ChestSpecial_Base parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

