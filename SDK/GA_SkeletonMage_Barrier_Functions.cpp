#include "pch.h"
#include "SDK.h"

void UGA_SkeletonMage_Barrier_C::EventReceived_16E0B731426486054E70CBB8F8CDC1B7(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.EventReceived_16E0B731426486054E70CBB8F8CDC1B7");

	FEventReceived_16E0B731426486054E70CBB8F8CDC1B7 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonMage_Barrier_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonMage_Barrier_C::ExecuteUbergraph_GA_SkeletonMage_Barrier(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMage_Barrier.GA_SkeletonMage_Barrier_C.ExecuteUbergraph_GA_SkeletonMage_Barrier");

	FExecuteUbergraph_GA_SkeletonMage_Barrier parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

