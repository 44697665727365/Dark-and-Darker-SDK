#include "pch.h"
#include "SDK.h"

void UGA_ChainLightning_C::CheckTargetActor(struct AActor* TargetActor, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.CheckTargetActor");

	FCheckTargetActor parms{};	
	parms.TargetActor = TargetActor;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::OnBoundingTarget(int32_t RepeatCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.OnBoundingTarget");

	FOnBoundingTarget parms{};	
	parms.RepeatCount = RepeatCount;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::OnApplyedTargetDamage(struct AActor* TargetActor, int32_t BoundCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.OnApplyedTargetDamage");

	FOnApplyedTargetDamage parms{};	
	parms.TargetActor = TargetActor;
	parms.BoundCount = BoundCount;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::CalMinDistanceTarget(struct TArray<struct AActor*>& InActors, struct AActor*& OutActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.CalMinDistanceTarget");

	FCalMinDistanceTarget parms{};	
	parms.InActors = InActors;
	parms.OutActor = OutActor;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::Cancelled_31121FD1430811CAF3A874B288707DD0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.Cancelled_31121FD1430811CAF3A874B288707DD0");

	FCancelled_31121FD1430811CAF3A874B288707DD0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::ValidData_31121FD1430811CAF3A874B288707DD0(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.ValidData_31121FD1430811CAF3A874B288707DD0");

	FValidData_31121FD1430811CAF3A874B288707DD0 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::OnFinished_0648ED534A0BC29A1C2F12BADC8FE40C(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.OnFinished_0648ED534A0BC29A1C2F12BADC8FE40C");

	FOnFinished_0648ED534A0BC29A1C2F12BADC8FE40C parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::OnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C(int32_t ActionNumber){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.OnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C");

	FOnPerformAction_0648ED534A0BC29A1C2F12BADC8FE40C parms{};	
	parms.ActionNumber = ActionNumber;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::OnFinish_739012464125AEAA064EE3BBAFFB2AFC(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.OnFinish_739012464125AEAA064EE3BBAFFB2AFC");

	FOnFinish_739012464125AEAA064EE3BBAFFB2AFC parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_ChainLightning_C::ExecuteUbergraph_GA_ChainLightning(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_ChainLightning.GA_ChainLightning_C.ExecuteUbergraph_GA_ChainLightning");

	FExecuteUbergraph_GA_ChainLightning parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

