#include "pch.h"
#include "SDK.h"

void UGA_SkeletonWarlord_Order_Bombing_C::EventReceived_BCFAC1BA463673E3C7CDE086F73B792E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.EventReceived_BCFAC1BA463673E3C7CDE086F73B792E");

	FEventReceived_BCFAC1BA463673E3C7CDE086F73B792E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_Bombing_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonWarlord_Order_Bombing_C::ExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonWarlord_Order_Bombing.GA_SkeletonWarlord_Order_Bombing_C.ExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing");

	FExecuteUbergraph_GA_SkeletonWarlord_Order_Bombing parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

