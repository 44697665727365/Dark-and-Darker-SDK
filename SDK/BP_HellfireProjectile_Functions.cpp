#include "pch.h"
#include "SDK.h"

void ABP_HellfireProjectile_C::InitNiagaraEffect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.InitNiagaraEffect");

	FInitNiagaraEffect parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.ReceiveEndPlay");

	FReceiveEndPlay parms{};	
	parms.EndPlayReason = EndPlayReason;

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::TimelineUpdateEvent(float Value, float TimelinePosition){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.TimelineUpdateEvent");

	FTimelineUpdateEvent parms{};	
	parms.Value = Value;
	parms.TimelinePosition = TimelinePosition;

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::TimelineFinishedEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.TimelineFinishedEvent");

	FTimelineFinishedEvent parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::OnDelayDestroy(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.OnDelayDestroy");

	FOnDelayDestroy parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_HellfireProjectile_C::ExecuteUbergraph_BP_HellfireProjectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_HellfireProjectile.BP_HellfireProjectile_C.ExecuteUbergraph_BP_HellfireProjectile");

	FExecuteUbergraph_BP_HellfireProjectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

