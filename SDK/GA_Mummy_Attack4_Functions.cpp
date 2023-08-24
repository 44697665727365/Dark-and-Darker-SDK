#include "pch.h"
#include "SDK.h"

void UGA_Mummy_Attack4_C::EventReceived_2E178BC945F30FDA58F6BCA3E8BA296F(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_2E178BC945F30FDA58F6BCA3E8BA296F");

	FEventReceived_2E178BC945F30FDA58F6BCA3E8BA296F parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack4_C::EventReceived_2E178BC945F30FDA58F6BCA304969C89(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_2E178BC945F30FDA58F6BCA304969C89");

	FEventReceived_2E178BC945F30FDA58F6BCA304969C89 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack4_C::EventReceived_9AADA1DC4072B1DBEE17C7B0EAC80A2B(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.EventReceived_9AADA1DC4072B1DBEE17C7B0EAC80A2B");

	FEventReceived_9AADA1DC4072B1DBEE17C7B0EAC80A2B parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack4_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack4_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_Mummy_Attack4_C::ExecuteUbergraph_GA_Mummy_Attack4(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Mummy_Attack4.GA_Mummy_Attack4_C.ExecuteUbergraph_GA_Mummy_Attack4");

	FExecuteUbergraph_GA_Mummy_Attack4 parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

