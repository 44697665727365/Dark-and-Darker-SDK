#include "pch.h"
#include "SDK.h"

void UGA_DeathSkull_Attack_Nightmare_C::Find Target Position(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Find Target Position");

	FFind Target Position parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::OnFinish_A04CDA7F4680AB1B5DF9E2AC7BE8E563(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.OnFinish_A04CDA7F4680AB1B5DF9E2AC7BE8E563");

	FOnFinish_A04CDA7F4680AB1B5DF9E2AC7BE8E563 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::OnFinish_E635967A42A02C013C809A85943B8E54(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.OnFinish_E635967A42A02C013C809A85943B8E54");

	FOnFinish_E635967A42A02C013C809A85943B8E54 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::LookTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.LookTarget");

	FLookTarget parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::Attack(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Attack");

	FAttack parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::Move(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.Move");

	FMove parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_Nightmare_C::ExecuteUbergraph_GA_DeathSkull_Attack_Nightmare(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack_Nightmare.GA_DeathSkull_Attack_Nightmare_C.ExecuteUbergraph_GA_DeathSkull_Attack_Nightmare");

	FExecuteUbergraph_GA_DeathSkull_Attack_Nightmare parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

