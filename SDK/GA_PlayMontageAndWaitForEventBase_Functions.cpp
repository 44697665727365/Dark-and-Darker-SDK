#include "pch.h"
#include "SDK.h"

void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEventBase_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEventBase_C::EventReceived_7713E05F4EC00D3256E30A95AF21E3A0(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.EventReceived_7713E05F4EC00D3256E30A95AF21E3A0");

	FEventReceived_7713E05F4EC00D3256E30A95AF21E3A0 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEventBase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayMontageAndWaitForEventBase_C::ExecuteUbergraph_GA_PlayMontageAndWaitForEventBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayMontageAndWaitForEventBase.GA_PlayMontageAndWaitForEventBase_C.ExecuteUbergraph_GA_PlayMontageAndWaitForEventBase");

	FExecuteUbergraph_GA_PlayMontageAndWaitForEventBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

