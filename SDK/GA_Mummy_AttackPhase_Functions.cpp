#include "pch.h"
#include "SDK.h"

void UGA_Mummy_AttackPhase_C::EventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.EventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6");

	FEventReceived_7A1CE0F142DAFDF372BBB1A3D3F876B6 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_AttackPhase_C::ExecuteUbergraph_GA_Mummy_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_AttackPhase.GA_Mummy_AttackPhase_C.ExecuteUbergraph_GA_Mummy_AttackPhase");

	FExecuteUbergraph_GA_Mummy_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

