#include "pch.h"
#include "SDK.h"

void ABP_PushingBlock_C::ReceiveTick(float DeltaSeconds){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PushingBlock.BP_PushingBlock_C.ReceiveTick");

	FReceiveTick parms{};	
	parms.DeltaSeconds = DeltaSeconds;

	ProcessEvent(fn, &parms);
}

void ABP_PushingBlock_C::ReceiveActorBeginOverlap(struct AActor* OtherActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PushingBlock.BP_PushingBlock_C.ReceiveActorBeginOverlap");

	FReceiveActorBeginOverlap parms{};	
	parms.OtherActor = OtherActor;

	ProcessEvent(fn, &parms);
}

void ABP_PushingBlock_C::ReceiveBeginPlay(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PushingBlock.BP_PushingBlock_C.ReceiveBeginPlay");

	FReceiveBeginPlay parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_PushingBlock_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PushingBlock.BP_PushingBlock_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_PushingBlock_C::ExecuteUbergraph_BP_PushingBlock(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_PushingBlock.BP_PushingBlock_C.ExecuteUbergraph_BP_PushingBlock");

	FExecuteUbergraph_BP_PushingBlock parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

