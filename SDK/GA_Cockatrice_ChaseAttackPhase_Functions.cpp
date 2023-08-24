#include "pch.h"
#include "SDK.h"

void UGA_Cockatrice_ChaseAttackPhase_C::EventReceived_A039B1F64BBDF1060F19DD85F303B550(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.EventReceived_A039B1F64BBDF1060F19DD85F303B550");

	FEventReceived_A039B1F64BBDF1060F19DD85F303B550 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_ChaseAttackPhase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Cockatrice_ChaseAttackPhase_C::ExecuteUbergraph_GA_Cockatrice_ChaseAttackPhase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Cockatrice_ChaseAttackPhase.GA_Cockatrice_ChaseAttackPhase_C.ExecuteUbergraph_GA_Cockatrice_ChaseAttackPhase");

	FExecuteUbergraph_GA_Cockatrice_ChaseAttackPhase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

