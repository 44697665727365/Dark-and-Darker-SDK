#include "pch.h"
#include "SDK.h"

void UGA_TortureMastery_C::EventReceived_3DAE65694E63C5F1E083E3AD03B4725A(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TortureMastery.GA_TortureMastery_C.EventReceived_3DAE65694E63C5F1E083E3AD03B4725A");

	FEventReceived_3DAE65694E63C5F1E083E3AD03B4725A parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_TortureMastery_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TortureMastery.GA_TortureMastery_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_TortureMastery_C::ExecuteUbergraph_GA_TortureMastery(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_TortureMastery.GA_TortureMastery_C.ExecuteUbergraph_GA_TortureMastery");

	FExecuteUbergraph_GA_TortureMastery parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

