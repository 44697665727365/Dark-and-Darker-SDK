#include "pch.h"
#include "SDK.h"

void UGA_LocustsSwarm_C::EndSpell(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.EndSpell");

	FEndSpell parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::SpawnAoe(struct FHitResult HtResult, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.SpawnAoe");

	FSpawnAoe parms{};	
	parms.HtResult = HtResult;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::Cancelled_1FD2291E4AFD8978108B38829AE38FF5(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.Cancelled_1FD2291E4AFD8978108B38829AE38FF5");

	FCancelled_1FD2291E4AFD8978108B38829AE38FF5 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::ValidData_1FD2291E4AFD8978108B38829AE38FF5(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.ValidData_1FD2291E4AFD8978108B38829AE38FF5");

	FValidData_1FD2291E4AFD8978108B38829AE38FF5 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::EventReceived_FE9A586F4866FC81C4266582AAD4E1C6(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.EventReceived_FE9A586F4866FC81C4266582AAD4E1C6");

	FEventReceived_FE9A586F4866FC81C4266582AAD4E1C6 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::OnDirectionChanged_26EECCC4454C2204D92B728CF0C5576D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.OnDirectionChanged_26EECCC4454C2204D92B728CF0C5576D");

	FOnDirectionChanged_26EECCC4454C2204D92B728CF0C5576D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_LocustsSwarm_C::ExecuteUbergraph_GA_LocustsSwarm(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_LocustsSwarm.GA_LocustsSwarm_C.ExecuteUbergraph_GA_LocustsSwarm");

	FExecuteUbergraph_GA_LocustsSwarm parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

