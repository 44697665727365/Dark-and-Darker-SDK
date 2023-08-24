#include "pch.h"
#include "SDK.h"

void UGA_LavaMonster_AttackPhase_C::EventReceived_EC911C75464C4C17118BF492921C63D8(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.EventReceived_EC911C75464C4C17118BF492921C63D8");

	FEventReceived_EC911C75464C4C17118BF492921C63D8 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LavaMonster_AttackPhase_C::ExecuteUbergraph_GA_LavaMonster_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LavaMonster_AttackPhase.GA_LavaMonster_AttackPhase_C.ExecuteUbergraph_GA_LavaMonster_AttackPhase");

	FExecuteUbergraph_GA_LavaMonster_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

