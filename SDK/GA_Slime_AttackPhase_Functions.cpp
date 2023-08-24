#include "pch.h"
#include "SDK.h"

void UGA_Slime_AttackPhase_C::EventReceived_24CAE78F43C9EF3054EB50932E944C21(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.EventReceived_24CAE78F43C9EF3054EB50932E944C21");

	FEventReceived_24CAE78F43C9EF3054EB50932E944C21 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Slime_AttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Slime_AttackPhase_C::ExecuteUbergraph_GA_Slime_AttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Slime_AttackPhase.GA_Slime_AttackPhase_C.ExecuteUbergraph_GA_Slime_AttackPhase");

	FExecuteUbergraph_GA_Slime_AttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

