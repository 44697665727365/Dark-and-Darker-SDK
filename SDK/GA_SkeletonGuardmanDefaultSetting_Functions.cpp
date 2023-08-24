#include "pch.h"
#include "SDK.h"

void UGA_SkeletonGuardmanDefaultSetting_C::EventReceived_2B77E3CC4AD34889AA615EA96094536E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.EventReceived_2B77E3CC4AD34889AA615EA96094536E");

	FEventReceived_2B77E3CC4AD34889AA615EA96094536E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanDefaultSetting_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonGuardmanDefaultSetting_C::ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonGuardmanDefaultSetting.GA_SkeletonGuardmanDefaultSetting_C.ExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting");

	FExecuteUbergraph_GA_SkeletonGuardmanDefaultSetting parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

