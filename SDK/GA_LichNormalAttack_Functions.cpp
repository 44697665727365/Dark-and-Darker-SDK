#include "pch.h"
#include "SDK.h"

void UGA_LichNormalAttack_C::EventReceived_3D96C36F4FAC76511505409F6321DC9E(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichNormalAttack.GA_LichNormalAttack_C.EventReceived_3D96C36F4FAC76511505409F6321DC9E");

	FEventReceived_3D96C36F4FAC76511505409F6321DC9E parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichNormalAttack_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichNormalAttack.GA_LichNormalAttack_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_LichNormalAttack_C::ExecuteUbergraph_GA_LichNormalAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LichNormalAttack.GA_LichNormalAttack_C.ExecuteUbergraph_GA_LichNormalAttack");

	FExecuteUbergraph_GA_LichNormalAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

