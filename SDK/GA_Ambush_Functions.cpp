#include "pch.h"
#include "SDK.h"

void UGA_Ambush_C::Removed_1ED899A44857F9A1085C4F8594B4AB0D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ambush.GA_Ambush_C.Removed_1ED899A44857F9A1085C4F8594B4AB0D");

	FRemoved_1ED899A44857F9A1085C4F8594B4AB0D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Ambush_C::EventReceived_9753C2834B13EF3A8411BE9074E3DB22(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ambush.GA_Ambush_C.EventReceived_9753C2834B13EF3A8411BE9074E3DB22");

	FEventReceived_9753C2834B13EF3A8411BE9074E3DB22 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_Ambush_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ambush.GA_Ambush_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Ambush_C::ExecuteUbergraph_GA_Ambush(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Ambush.GA_Ambush_C.ExecuteUbergraph_GA_Ambush");

	FExecuteUbergraph_GA_Ambush parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

