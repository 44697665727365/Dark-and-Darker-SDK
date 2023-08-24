#include "pch.h"
#include "SDK.h"

void UGA_SkeletonSwordman_Combo_C::EventReceived_B4969E1E4A0DA4D606942E9FA45052CC(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.EventReceived_B4969E1E4A0DA4D606942E9FA45052CC");

	FEventReceived_B4969E1E4A0DA4D606942E9FA45052CC parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Combo_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonSwordman_Combo_C::ExecuteUbergraph_GA_SkeletonSwordman_Combo(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.ExecuteUbergraph_GA_SkeletonSwordman_Combo");

	FExecuteUbergraph_GA_SkeletonSwordman_Combo parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

