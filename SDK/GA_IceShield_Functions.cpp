#include "pch.h"
#include "SDK.h"

void UGA_IceShield_C::EventReceived_5EB0E3114F71A35895119AB12A8713E4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceShield.GA_IceShield_C.EventReceived_5EB0E3114F71A35895119AB12A8713E4");

	FEventReceived_5EB0E3114F71A35895119AB12A8713E4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_IceShield_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceShield.GA_IceShield_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_IceShield_C::ExecuteUbergraph_GA_IceShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_IceShield.GA_IceShield_C.ExecuteUbergraph_GA_IceShield");

	FExecuteUbergraph_GA_IceShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

