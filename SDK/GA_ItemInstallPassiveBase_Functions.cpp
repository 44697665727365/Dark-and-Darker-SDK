#include "pch.h"
#include "SDK.h"

void UGA_ItemInstallPassiveBase_C::Cancelled_4B7FDAA9405950C400722898D559C59E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.Cancelled_4B7FDAA9405950C400722898D559C59E");

	FCancelled_4B7FDAA9405950C400722898D559C59E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::ValidData_4B7FDAA9405950C400722898D559C59E(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ValidData_4B7FDAA9405950C400722898D559C59E");

	FValidData_4B7FDAA9405950C400722898D559C59E parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::EventReceived_85952FD14FE8538A2FA00EA4FDA1DE72(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.EventReceived_85952FD14FE8538A2FA00EA4FDA1DE72");

	FEventReceived_85952FD14FE8538A2FA00EA4FDA1DE72 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.K2_ActivateAbilityFromEvent");

	FK2_ActivateAbilityFromEvent parms{};	
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::OnPassiveStart(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.OnPassiveStart");

	FOnPassiveStart parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::OnPassiveStop(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.OnPassiveStop");

	FOnPassiveStop parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ItemInstallPassiveBase_C::ExecuteUbergraph_GA_ItemInstallPassiveBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ItemInstallPassiveBase.GA_ItemInstallPassiveBase_C.ExecuteUbergraph_GA_ItemInstallPassiveBase");

	FExecuteUbergraph_GA_ItemInstallPassiveBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

