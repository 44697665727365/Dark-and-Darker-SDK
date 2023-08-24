#include "pch.h"
#include "SDK.h"

void UGA_RuinsGolem_Attack1_C::EventReceived_53FD2F1343110844299A5DB46AFBE721(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.EventReceived_53FD2F1343110844299A5DB46AFBE721");

	FEventReceived_53FD2F1343110844299A5DB46AFBE721 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_Attack1_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_RuinsGolem_Attack1_C::ExecuteUbergraph_GA_RuinsGolem_Attack1(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RuinsGolem_Attack1.GA_RuinsGolem_Attack1_C.ExecuteUbergraph_GA_RuinsGolem_Attack1");

	FExecuteUbergraph_GA_RuinsGolem_Attack1 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

