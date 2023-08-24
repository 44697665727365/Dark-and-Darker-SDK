#include "pch.h"
#include "SDK.h"

void UGA_SkeletonChampion_SprintPhase_C::EventReceived_0976E0E9468066BEC23996B7CFF9D646(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.EventReceived_0976E0E9468066BEC23996B7CFF9D646");

	FEventReceived_0976E0E9468066BEC23996B7CFF9D646 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_SprintPhase_C::OnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5");

	FOnFail_A7D5BE974E6E069FBEB9DEA6342A6CF5 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_SprintPhase_C::OnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5(enum class EPathFollowingResult MovementResult){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.OnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5");

	FOnSuccess_A7D5BE974E6E069FBEB9DEA6342A6CF5 parms{};	
	parms.MovementResult = MovementResult;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_SprintPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_SprintPhase_C::Fail Timer(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.Fail Timer");

	FFail Timer parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonChampion_SprintPhase_C::ExecuteUbergraph_GA_SkeletonChampion_SprintPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonChampion_SprintPhase.GA_SkeletonChampion_SprintPhase_C.ExecuteUbergraph_GA_SkeletonChampion_SprintPhase");

	FExecuteUbergraph_GA_SkeletonChampion_SprintPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

