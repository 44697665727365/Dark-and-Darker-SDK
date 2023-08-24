#include "pch.h"
#include "SDK.h"

void UGA_Halberd_UniquePassive_C::EventReceived_3EF2DF974793AF751C3C3EBE5273AB0C(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.EventReceived_3EF2DF974793AF751C3C3EBE5273AB0C");

	FEventReceived_3EF2DF974793AF751C3C3EBE5273AB0C parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Halberd_UniquePassive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Halberd_UniquePassive_C::ExecuteUbergraph_GA_Halberd_UniquePassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Halberd_UniquePassive.GA_Halberd_UniquePassive_C.ExecuteUbergraph_GA_Halberd_UniquePassive");

	FExecuteUbergraph_GA_Halberd_UniquePassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

