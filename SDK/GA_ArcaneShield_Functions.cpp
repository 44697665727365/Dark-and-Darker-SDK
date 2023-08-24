#include "pch.h"
#include "SDK.h"

void UGA_ArcaneShield_C::ShieldBraekAttack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.ShieldBraekAttack");

	FShieldBraekAttack parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneShield_C::SameParty(struct ADCCharacterBase* TargetActor, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.SameParty");

	FSameParty parms{};	
	parms.TargetActor = TargetActor;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneShield_C::InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.InvalidHandle_7D9C58AD4F43BA6F4618D789299B2871");

	FInvalidHandle_7D9C58AD4F43BA6F4618D789299B2871 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneShield_C::OnRemoved_7D9C58AD4F43BA6F4618D789299B2871(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.OnRemoved_7D9C58AD4F43BA6F4618D789299B2871");

	FOnRemoved_7D9C58AD4F43BA6F4618D789299B2871 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneShield_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ArcaneShield_C::ExecuteUbergraph_GA_ArcaneShield(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ArcaneShield.GA_ArcaneShield_C.ExecuteUbergraph_GA_ArcaneShield");

	FExecuteUbergraph_GA_ArcaneShield parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

