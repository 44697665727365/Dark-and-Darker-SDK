#include "pch.h"
#include "SDK.h"

void UGA_RuinsGolem_AttackSlam_C::EventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.EventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6");

	FEventReceived_9F0B47BF4D356B3DCEF1B9ABE7B467F6 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_AttackSlam_C::Spawn Aoe(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.Spawn Aoe");

	FSpawn Aoe parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_AttackSlam_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_AttackSlam_C::ExecuteUbergraph_GA_RuinsGolem_AttackSlam(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_AttackSlam.GA_RuinsGolem_AttackSlam_C.ExecuteUbergraph_GA_RuinsGolem_AttackSlam");

	FExecuteUbergraph_GA_RuinsGolem_AttackSlam parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

