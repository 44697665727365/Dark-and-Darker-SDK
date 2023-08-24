#include "pch.h"
#include "SDK.h"

void UGA_HeaterShield_UniquePassive_C::SetItemReflectable(bool bIsReflectable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.SetItemReflectable");

	FSetItemReflectable parms{};	
	parms.bIsReflectable = bIsReflectable;

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::EventReceived_4C9DC7AE41ED2229697FBD959A1A0518(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.EventReceived_4C9DC7AE41ED2229697FBD959A1A0518");

	FEventReceived_4C9DC7AE41ED2229697FBD959A1A0518 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::Removed_DA901BEE4CB46296BB0E11AF4A5E9E1F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_DA901BEE4CB46296BB0E11AF4A5E9E1F");

	FRemoved_DA901BEE4CB46296BB0E11AF4A5E9E1F parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::Removed_A056618B4705CB9A7C66F994B5DC714F(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_A056618B4705CB9A7C66F994B5DC714F");

	FRemoved_A056618B4705CB9A7C66F994B5DC714F parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::Added_3863188D42EAD9EFBA47D49600884417(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Added_3863188D42EAD9EFBA47D49600884417");

	FAdded_3863188D42EAD9EFBA47D49600884417 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::Added_E8326BC94570933CDC2C199BC31E7C4B(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Added_E8326BC94570933CDC2C199BC31E7C4B");

	FAdded_E8326BC94570933CDC2C199BC31E7C4B parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::Removed_EC343C864F36A7988072F8BF900895B9(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.Removed_EC343C864F36A7988072F8BF900895B9");

	FRemoved_EC343C864F36A7988072F8BF900895B9 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_HeaterShield_UniquePassive_C::ExecuteUbergraph_GA_HeaterShield_UniquePassive(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HeaterShield_UniquePassive.GA_HeaterShield_UniquePassive_C.ExecuteUbergraph_GA_HeaterShield_UniquePassive");

	FExecuteUbergraph_GA_HeaterShield_UniquePassive parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

