#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Combo2_C::EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F");

	FEventReceived_E4F41D3B43AD548E3B55F6877DD81A9F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo2_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Combo2_C::ExecuteUbergraph_GA_SkeletonWarlord_Combo2(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo2");

	FExecuteUbergraph_GA_SkeletonWarlord_Combo2 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

