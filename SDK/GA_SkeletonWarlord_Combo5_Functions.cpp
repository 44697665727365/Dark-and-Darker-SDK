#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Combo5_C::EventReceived_9831085E4ED4D1B4D3AEDC9983AEEAEA(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.EventReceived_9831085E4ED4D1B4D3AEDC9983AEEAEA");

	FEventReceived_9831085E4ED4D1B4D3AEDC9983AEEAEA parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo5_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo5_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo5(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo5.GA_SkeletonWarlord_Combo5_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo5");

	FExecuteUbergraph_GA_SkeletonWarlord_Combo5 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

