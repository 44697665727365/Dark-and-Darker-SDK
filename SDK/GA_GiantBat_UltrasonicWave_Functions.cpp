#include "pch.h"
#include "SDK.h"

void UGA_GiantBat_UltrasonicWave_C::EventReceived_A80402D641FC7F2A987748A071549433(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_A80402D641FC7F2A987748A071549433");

	FEventReceived_A80402D641FC7F2A987748A071549433 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_UltrasonicWave_C::EventReceived_68D9B709497C03B93FB891B8ADD0D0F4(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.EventReceived_68D9B709497C03B93FB891B8ADD0D0F4");

	FEventReceived_68D9B709497C03B93FB891B8ADD0D0F4 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_UltrasonicWave_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_UltrasonicWave_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GiantBat_UltrasonicWave_C::ExecuteUbergraph_GA_GiantBat_UltrasonicWave(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GiantBat_UltrasonicWave.GA_GiantBat_UltrasonicWave_C.ExecuteUbergraph_GA_GiantBat_UltrasonicWave");

	FExecuteUbergraph_GA_GiantBat_UltrasonicWave parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

