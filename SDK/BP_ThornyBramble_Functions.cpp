#include "pch.h"
#include "SDK.h"

void ABP_ThornyBramble_C::CreateThornyBrambleMaterial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.CreateThornyBrambleMaterial");

	FCreateThornyBrambleMaterial parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::UpdateThornyBrambleMaterial(bool IsActivate){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.UpdateThornyBrambleMaterial");

	FUpdateThornyBrambleMaterial parms{};	
	parms.IsActivate = IsActivate;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::SetMIDParameterValue(struct UMaterialInstanceDynamic* Material Instance, double StartFrame, double EndFrame){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.SetMIDParameterValue");

	FSetMIDParameterValue parms{};	
	parms.Material Instance = Material Instance;
	parms.StartFrame = StartFrame;
	parms.EndFrame = EndFrame;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::IsImmuneToDamage(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.IsImmuneToDamage");

	FIsImmuneToDamage parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::GetRecoveryTime(double& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.GetRecoveryTime");

	FGetRecoveryTime parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::IsRecovery(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.IsRecovery");

	FIsRecovery parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::GetDestroyHitCount(int32_t& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.GetDestroyHitCount");

	FGetDestroyHitCount parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_ThornyBramble_C::ExecuteUbergraph_BP_ThornyBramble(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_ThornyBramble.BP_ThornyBramble_C.ExecuteUbergraph_BP_ThornyBramble");

	FExecuteUbergraph_BP_ThornyBramble parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

