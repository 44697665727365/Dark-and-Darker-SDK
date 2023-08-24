#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Order_Spawn_C::EventReceived_52B22F44496B41CC1BDA73ABD2D2C532(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.EventReceived_52B22F44496B41CC1BDA73ABD2D2C532");

	FEventReceived_52B22F44496B41CC1BDA73ABD2D2C532 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_Spawn_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_Spawn_C::ExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Spawn.GA_SkeletonWarlord_Order_Spawn_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn");

	FExecuteUbergraph_GA_SkeletonWarlord_Order_Spawn parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

