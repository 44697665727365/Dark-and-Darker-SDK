#include "pch.h"
#include "SDK.h"

void UGA_PoisonedWeapon_C::EventReceived_AA80118041C97DA3E8B6EC8931DC8DEF(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.EventReceived_AA80118041C97DA3E8B6EC8931DC8DEF");

	FEventReceived_AA80118041C97DA3E8B6EC8931DC8DEF parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PoisonedWeapon_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_PoisonedWeapon_C::ExecuteUbergraph_GA_PoisonedWeapon(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PoisonedWeapon.GA_PoisonedWeapon_C.ExecuteUbergraph_GA_PoisonedWeapon");

	FExecuteUbergraph_GA_PoisonedWeapon parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

