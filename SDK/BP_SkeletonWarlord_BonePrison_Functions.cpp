#include "pch.h"
#include "SDK.h"

void ABP_SkeletonWarlord_BonePrison_C::Destroy FX(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.Destroy FX");

	FDestroy FX parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_BonePrison_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_BonePrison_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWarlord_BonePrison_C::ExecuteUbergraph_BP_SkeletonWarlord_BonePrison(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWarlord_BonePrison.BP_SkeletonWarlord_BonePrison_C.ExecuteUbergraph_BP_SkeletonWarlord_BonePrison");

	FExecuteUbergraph_BP_SkeletonWarlord_BonePrison parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

