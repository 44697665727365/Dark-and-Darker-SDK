#include "pch.h"
#include "SDK.h"

void UGA_LichStrongAttack_C::EventReceived_4E4E06694B4EADEAE20F289910F13C2D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichStrongAttack.GA_LichStrongAttack_C.EventReceived_4E4E06694B4EADEAE20F289910F13C2D");

	FEventReceived_4E4E06694B4EADEAE20F289910F13C2D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichStrongAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichStrongAttack.GA_LichStrongAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichStrongAttack_C::ExecuteUbergraph_GA_LichStrongAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichStrongAttack.GA_LichStrongAttack_C.ExecuteUbergraph_GA_LichStrongAttack");

	FExecuteUbergraph_GA_LichStrongAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

