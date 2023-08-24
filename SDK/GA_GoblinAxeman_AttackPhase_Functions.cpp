#include "pch.h"
#include "SDK.h"

void UGA_GoblinAxeman_AttackPhase_C::EventReceived_815F7D164E1705CDEA05DEB70232D2EB(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.EventReceived_815F7D164E1705CDEA05DEB70232D2EB");

	FEventReceived_815F7D164E1705CDEA05DEB70232D2EB parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinAxeman_AttackPhase_C::ExecuteUbergraph_GA_GoblinAxeman_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinAxeman_AttackPhase.GA_GoblinAxeman_AttackPhase_C.ExecuteUbergraph_GA_GoblinAxeman_AttackPhase");

	FExecuteUbergraph_GA_GoblinAxeman_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

