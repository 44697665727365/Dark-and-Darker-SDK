#include "pch.h"
#include "SDK.h"

void ABP_SkeletonChampion_Common_C::_1(struct FGameplayTag NewParam1, struct FRigUnit_SwitchParent& NewParam){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C._1");

	F_1 parms{};	
	parms.NewParam1 = NewParam1;
	parms.NewParam = NewParam;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonChampion_Common_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonChampion_Common_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonChampion_Common_C::ExecuteUbergraph_BP_SkeletonChampion_Common(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonChampion_Common.BP_SkeletonChampion_Common_C.ExecuteUbergraph_BP_SkeletonChampion_Common");

	FExecuteUbergraph_BP_SkeletonChampion_Common parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

