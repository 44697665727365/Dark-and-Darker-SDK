#include "pch.h"
#include "SDK.h"

void UGA_Counterattack_C::EventReceived_19CACCFA41352FB78A10C68219C531EE(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Counterattack.GA_Counterattack_C.EventReceived_19CACCFA41352FB78A10C68219C531EE");

	FEventReceived_19CACCFA41352FB78A10C68219C531EE parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Counterattack_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Counterattack.GA_Counterattack_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Counterattack_C::ExecuteUbergraph_GA_Counterattack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Counterattack.GA_Counterattack_C.ExecuteUbergraph_GA_Counterattack");

	FExecuteUbergraph_GA_Counterattack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

