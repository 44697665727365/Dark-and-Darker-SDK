#include "pch.h"
#include "SDK.h"

void UGA_LightningStrike_C::HitCollisionCheck(AActor* TargetActorClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.HitCollisionCheck");

	FHitCollisionCheck parms{};	
	parms.TargetActorClass = TargetActorClass;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::SpellBlast(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.SpellBlast");

	FSpellBlast parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::InstallGround(struct FHitResult HtResult, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.InstallGround");

	FInstallGround parms{};	
	parms.HtResult = HtResult;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::Cancelled_3C07F6154261BA22F206AFA74ABBAD1C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.Cancelled_3C07F6154261BA22F206AFA74ABBAD1C");

	FCancelled_3C07F6154261BA22F206AFA74ABBAD1C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::ValidData_3C07F6154261BA22F206AFA74ABBAD1C(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.ValidData_3C07F6154261BA22F206AFA74ABBAD1C");

	FValidData_3C07F6154261BA22F206AFA74ABBAD1C parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::OnFinish_96E515424152A73E08746B99EA15FF49(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.OnFinish_96E515424152A73E08746B99EA15FF49");

	FOnFinish_96E515424152A73E08746B99EA15FF49 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LightningStrike_C::ExecuteUbergraph_GA_LightningStrike(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LightningStrike.GA_LightningStrike_C.ExecuteUbergraph_GA_LightningStrike");

	FExecuteUbergraph_GA_LightningStrike parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

