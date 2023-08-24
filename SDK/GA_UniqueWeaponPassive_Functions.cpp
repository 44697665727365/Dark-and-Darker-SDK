#include "pch.h"
#include "SDK.h"

void UGA_UniqueWeaponPassive_C::OnHit(struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.OnHit");

	FOnHit parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_UniqueWeaponPassive_C::EventReceived_255D149942688A65BC6EB2AA8CA4B432(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.EventReceived_255D149942688A65BC6EB2AA8CA4B432");

	FEventReceived_255D149942688A65BC6EB2AA8CA4B432 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_UniqueWeaponPassive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_UniqueWeaponPassive_C::ExecuteUbergraph_GA_UniqueWeaponPassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_UniqueWeaponPassive.GA_UniqueWeaponPassive_C.ExecuteUbergraph_GA_UniqueWeaponPassive");

	FExecuteUbergraph_GA_UniqueWeaponPassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

