#include "pch.h"
#include "SDK.h"

void UGA_SongOfShadowGranted_C::OnChange_C278A0BC4D007A28B825B08DB976CC55(float OldValue, float NewValue){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SongOfShadowGranted.GA_SongOfShadowGranted_C.OnChange_C278A0BC4D007A28B825B08DB976CC55");

	FOnChange_C278A0BC4D007A28B825B08DB976CC55 parms{};	
	parms.OldValue = OldValue;
	parms.NewValue = NewValue;

	ProcessEvent(fn, &parms);
}

void UGA_SongOfShadowGranted_C::OnVelocityChange_024B81034B500BF795A36CA062971549(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SongOfShadowGranted.GA_SongOfShadowGranted_C.OnVelocityChange_024B81034B500BF795A36CA062971549");

	FOnVelocityChange_024B81034B500BF795A36CA062971549 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_SongOfShadowGranted_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SongOfShadowGranted.GA_SongOfShadowGranted_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_SongOfShadowGranted_C::ExecuteUbergraph_GA_SongOfShadowGranted(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SongOfShadowGranted.GA_SongOfShadowGranted_C.ExecuteUbergraph_GA_SongOfShadowGranted");

	FExecuteUbergraph_GA_SongOfShadowGranted parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

