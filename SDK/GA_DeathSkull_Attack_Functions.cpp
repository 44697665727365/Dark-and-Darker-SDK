#include "pch.h"
#include "SDK.h"

void UGA_DeathSkull_Attack_C::Find Target Position(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.Find Target Position");

	FFind Target Position parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::OnFinish_2633EB2A49F35AC9C1DE7B93B1C6D195(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.OnFinish_2633EB2A49F35AC9C1DE7B93B1C6D195");

	FOnFinish_2633EB2A49F35AC9C1DE7B93B1C6D195 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::LookTarget(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.LookTarget");

	FLookTarget parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::Rush(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.Rush");

	FRush parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_DeathSkull_Attack_C::ExecuteUbergraph_GA_DeathSkull_Attack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_DeathSkull_Attack.GA_DeathSkull_Attack_C.ExecuteUbergraph_GA_DeathSkull_Attack");

	FExecuteUbergraph_GA_DeathSkull_Attack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

