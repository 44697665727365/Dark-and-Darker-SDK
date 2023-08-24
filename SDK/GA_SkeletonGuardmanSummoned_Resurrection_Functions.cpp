#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanSummoned_Resurrection_C::EventReceived_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.EventReceived_F5DB03154B705B01887AA294184B876B");

	FEventReceived_F5DB03154B705B01887AA294184B876B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::OnCancelled_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCancelled_F5DB03154B705B01887AA294184B876B");

	FOnCancelled_F5DB03154B705B01887AA294184B876B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::OnInterrupted_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnInterrupted_F5DB03154B705B01887AA294184B876B");

	FOnInterrupted_F5DB03154B705B01887AA294184B876B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::OnBlendOut_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnBlendOut_F5DB03154B705B01887AA294184B876B");

	FOnBlendOut_F5DB03154B705B01887AA294184B876B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::OnCompleted_F5DB03154B705B01887AA294184B876B(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.OnCompleted_F5DB03154B705B01887AA294184B876B");

	FOnCompleted_F5DB03154B705B01887AA294184B876B parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanSummoned_Resurrection_C::ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanSummoned_Resurrection.GA_SkeletonGuardmanSummoned_Resurrection_C.ExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection");

	FExecuteUbergraph_GA_SkeletonGuardmanSummoned_Resurrection parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

