#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Combo4_C::EventReceived_90198A41405BBF2E56DA7896FA3EB92F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.EventReceived_90198A41405BBF2E56DA7896FA3EB92F");

	FEventReceived_90198A41405BBF2E56DA7896FA3EB92F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo4_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo4_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo4(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo4.GA_SkeletonWarlord_Combo4_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo4");

	FExecuteUbergraph_GA_SkeletonWarlord_Combo4 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

