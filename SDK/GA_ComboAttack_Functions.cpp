#include "pch.h"
#include "SDK.h"

void UGA_ComboAttack_C::OnFinish_DE8698AB4425C1292B02AFB106318041(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ComboAttack.GA_ComboAttack_C.OnFinish_DE8698AB4425C1292B02AFB106318041");

	FOnFinish_DE8698AB4425C1292B02AFB106318041 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ComboAttack_C::EventReceived_0EF528F1414939B2DA8CE9A5C5B64691(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ComboAttack.GA_ComboAttack_C.EventReceived_0EF528F1414939B2DA8CE9A5C5B64691");

	FEventReceived_0EF528F1414939B2DA8CE9A5C5B64691 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ComboAttack_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ComboAttack.GA_ComboAttack_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ComboAttack_C::ExecuteUbergraph_GA_ComboAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ComboAttack.GA_ComboAttack_C.ExecuteUbergraph_GA_ComboAttack");

	FExecuteUbergraph_GA_ComboAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

