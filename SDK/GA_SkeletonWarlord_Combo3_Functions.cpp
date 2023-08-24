#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Combo3_C::EventReceived_17636CDC450CD4F648F2F1BDC7F928A4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.EventReceived_17636CDC450CD4F648F2F1BDC7F928A4");

	FEventReceived_17636CDC450CD4F648F2F1BDC7F928A4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo3_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo3_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo3(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo3.GA_SkeletonWarlord_Combo3_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo3");

	FExecuteUbergraph_GA_SkeletonWarlord_Combo3 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

