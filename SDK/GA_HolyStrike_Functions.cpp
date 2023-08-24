#include "pch.h"
#include "SDK.h"

void UGA_HolyStrike_C::SpellBlast(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.SpellBlast");

	FSpellBlast parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::HitCollisionCheck(AActor* TargetActorClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.HitCollisionCheck");

	FHitCollisionCheck parms{};	
	parms.TargetActorClass = TargetActorClass;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::InstallGround(struct FHitResult HtResult, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.InstallGround");

	FInstallGround parms{};	
	parms.HtResult = HtResult;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::Cancelled_5D422FC745788DC53D9BB980597D3C0C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.Cancelled_5D422FC745788DC53D9BB980597D3C0C");

	FCancelled_5D422FC745788DC53D9BB980597D3C0C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::ValidData_5D422FC745788DC53D9BB980597D3C0C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.ValidData_5D422FC745788DC53D9BB980597D3C0C");

	FValidData_5D422FC745788DC53D9BB980597D3C0C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_HolyStrike_C::ExecuteUbergraph_GA_HolyStrike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_HolyStrike.GA_HolyStrike_C.ExecuteUbergraph_GA_HolyStrike");

	FExecuteUbergraph_GA_HolyStrike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

