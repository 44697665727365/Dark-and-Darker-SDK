#include "pch.h"
#include "SDK.h"

void UGA_SkeletonArcher_Resurrection_C::EventReceived_EE1A77D54863A53E3BBD218F729DD03D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.EventReceived_EE1A77D54863A53E3BBD218F729DD03D");

	FEventReceived_EE1A77D54863A53E3BBD218F729DD03D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::OnCancelled_EE1A77D54863A53E3BBD218F729DD03D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnCancelled_EE1A77D54863A53E3BBD218F729DD03D");

	FOnCancelled_EE1A77D54863A53E3BBD218F729DD03D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnInterrupted_EE1A77D54863A53E3BBD218F729DD03D");

	FOnInterrupted_EE1A77D54863A53E3BBD218F729DD03D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnBlendOut_EE1A77D54863A53E3BBD218F729DD03D");

	FOnBlendOut_EE1A77D54863A53E3BBD218F729DD03D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::OnCompleted_EE1A77D54863A53E3BBD218F729DD03D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.OnCompleted_EE1A77D54863A53E3BBD218F729DD03D");

	FOnCompleted_EE1A77D54863A53E3BBD218F729DD03D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonArcher_Resurrection_C::ExecuteUbergraph_GA_SkeletonArcher_Resurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonArcher_Resurrection.GA_SkeletonArcher_Resurrection_C.ExecuteUbergraph_GA_SkeletonArcher_Resurrection");

	FExecuteUbergraph_GA_SkeletonArcher_Resurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

