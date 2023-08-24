#include "pch.h"
#include "SDK.h"

void UGA_ZombieAttackPhase_C::EventReceived_5F8B5C6D458A326FAED185915655BF55(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.EventReceived_5F8B5C6D458A326FAED185915655BF55");

	FEventReceived_5F8B5C6D458A326FAED185915655BF55 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_ZombieAttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_ZombieAttackPhase_C::ExecuteUbergraph_GA_ZombieAttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ZombieAttackPhase.GA_ZombieAttackPhase_C.ExecuteUbergraph_GA_ZombieAttackPhase");

	FExecuteUbergraph_GA_ZombieAttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

