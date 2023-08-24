#include "pch.h"
#include "SDK.h"

void ABP_Roaster01On_C::(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.");

	F parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.");

	F parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.");

	F parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.");

	F parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::InteractSucceed(struct AActor* Interacter, struct FGameplayTag StateTag, struct FGameplayTag TriggerTag, struct FHitResult HitResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.InteractSucceed");

	FInteractSucceed parms{};	
	parms.Interacter = Interacter;
	parms.StateTag = StateTag;
	parms.TriggerTag = TriggerTag;
	parms.HitResult = HitResult;

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Roaster01On_C::ExecuteUbergraph_BP_Roaster01On(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Roaster01On.BP_Roaster01On_C.ExecuteUbergraph_BP_Roaster01On");

	FExecuteUbergraph_BP_Roaster01On parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

