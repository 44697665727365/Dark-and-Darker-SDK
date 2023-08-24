#include "pch.h"
#include "SDK.h"

void UGA_GiantSpider_InstallCobwebFloor_C::EventReceived_785D1E8D44006265CC3CE4B32225B48A(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.EventReceived_785D1E8D44006265CC3CE4B32225B48A");

	FEventReceived_785D1E8D44006265CC3CE4B32225B48A parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantSpider_InstallCobwebFloor_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantSpider_InstallCobwebFloor_C::ExecuteUbergraph_GA_GiantSpider_InstallCobwebFloor(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantSpider_InstallCobwebFloor.GA_GiantSpider_InstallCobwebFloor_C.ExecuteUbergraph_GA_GiantSpider_InstallCobwebFloor");

	FExecuteUbergraph_GA_GiantSpider_InstallCobwebFloor parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

