#include "pch.h"
#include "SDK.h"

void UGA_GoblinWarrior_AttackPhase_C::EventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.EventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121");

	FEventReceived_E2AA8C3B4E27A81C3DCC05B52B7D7121 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinWarrior_AttackPhase_C::ExecuteUbergraph_GA_GoblinWarrior_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinWarrior_AttackPhase.GA_GoblinWarrior_AttackPhase_C.ExecuteUbergraph_GA_GoblinWarrior_AttackPhase");

	FExecuteUbergraph_GA_GoblinWarrior_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

