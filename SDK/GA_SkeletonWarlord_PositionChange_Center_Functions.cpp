#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_PositionChange_Center_C::EventReceived_97BB293B4ABD9D5416E3308788BF1810(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_PositionChange_Center.GA_SkeletonWarlord_PositionChange_Center_C.EventReceived_97BB293B4ABD9D5416E3308788BF1810");

	FEventReceived_97BB293B4ABD9D5416E3308788BF1810 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_PositionChange_Center_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_PositionChange_Center.GA_SkeletonWarlord_PositionChange_Center_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_PositionChange_Center_C::ExecuteUbergraph_GA_SkeletonWarlord_PositionChange_Center(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_PositionChange_Center.GA_SkeletonWarlord_PositionChange_Center_C.ExecuteUbergraph_GA_SkeletonWarlord_PositionChange_Center");

	FExecuteUbergraph_GA_SkeletonWarlord_PositionChange_Center parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

