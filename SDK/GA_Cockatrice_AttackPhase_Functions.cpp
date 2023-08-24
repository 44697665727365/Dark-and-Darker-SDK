#include "pch.h"
#include "SDK.h"

void UGA_Cockatrice_AttackPhase_C::EventReceived_3E8A8A9D4693B83B5F23F6BD4C5A0570(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.EventReceived_3E8A8A9D4693B83B5F23F6BD4C5A0570");

	FEventReceived_3E8A8A9D4693B83B5F23F6BD4C5A0570 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_AttackPhase_C::ExecuteUbergraph_GA_Cockatrice_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_AttackPhase.GA_Cockatrice_AttackPhase_C.ExecuteUbergraph_GA_Cockatrice_AttackPhase");

	FExecuteUbergraph_GA_Cockatrice_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

