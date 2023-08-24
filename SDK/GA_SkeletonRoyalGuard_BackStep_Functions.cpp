#include "pch.h"
#include "SDK.h"

void UGA_SkeletonRoyalGuard_BackStep_C::EventReceived_4485961E499397E7ECF8C9ABD81E7C83(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_4485961E499397E7ECF8C9ABD81E7C83");

	FEventReceived_4485961E499397E7ECF8C9ABD81E7C83 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_BackStep_C::EventReceived_CAB9D45E4CB99D3D874F89AE01FCF203(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_CAB9D45E4CB99D3D874F89AE01FCF203");

	FEventReceived_CAB9D45E4CB99D3D874F89AE01FCF203 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_BackStep_C::EventReceived_55C9B74E4B49AA8B3DD829B2F1ED1F44(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.EventReceived_55C9B74E4B49AA8B3DD829B2F1ED1F44");

	FEventReceived_55C9B74E4B49AA8B3DD829B2F1ED1F44 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_BackStep_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_BackStep_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonRoyalGuard_BackStep_C::ExecuteUbergraph_GA_SkeletonRoyalGuard_BackStep(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonRoyalGuard_BackStep.GA_SkeletonRoyalGuard_BackStep_C.ExecuteUbergraph_GA_SkeletonRoyalGuard_BackStep");

	FExecuteUbergraph_GA_SkeletonRoyalGuard_BackStep parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

