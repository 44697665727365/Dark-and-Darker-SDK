#include "pch.h"
#include "SDK.h"

void UGA_GoblinMage_CastingBuff_C::EventReceived_F92A268B48691D033B80078AEF0C891E(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.EventReceived_F92A268B48691D033B80078AEF0C891E");

	FEventReceived_F92A268B48691D033B80078AEF0C891E parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_CastingBuff_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_CastingBuff_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_GoblinMage_CastingBuff_C::ExecuteUbergraph_GA_GoblinMage_CastingBuff(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_GoblinMage_CastingBuff.GA_GoblinMage_CastingBuff_C.ExecuteUbergraph_GA_GoblinMage_CastingBuff");

	FExecuteUbergraph_GA_GoblinMage_CastingBuff parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

