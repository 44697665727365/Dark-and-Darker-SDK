#include "pch.h"
#include "SDK.h"

void UGA_Lich_CurseOfIsolation_Mark_C::CheckOverlapActorIsNull(bool& Is Null){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.CheckOverlapActorIsNull");

	FCheckOverlapActorIsNull parms{};	
	parms.Is Null = Is Null;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::Apply Effect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.Apply Effect");

	FApply Effect parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::OnFinish_46FD27054B6E2537B8D3BFA57E85AF6D(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.OnFinish_46FD27054B6E2537B8D3BFA57E85AF6D");

	FOnFinish_46FD27054B6E2537B8D3BFA57E85AF6D parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::InvalidHandle_544DC1E440C81C931B18AE89CA7CFBE3(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.InvalidHandle_544DC1E440C81C931B18AE89CA7CFBE3");

	FInvalidHandle_544DC1E440C81C931B18AE89CA7CFBE3 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::OnRemoved_544DC1E440C81C931B18AE89CA7CFBE3(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.OnRemoved_544DC1E440C81C931B18AE89CA7CFBE3");

	FOnRemoved_544DC1E440C81C931B18AE89CA7CFBE3 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfIsolation_Mark_C::ExecuteUbergraph_GA_Lich_CurseOfIsolation_Mark(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfIsolation_Mark.GA_Lich_CurseOfIsolation_Mark_C.ExecuteUbergraph_GA_Lich_CurseOfIsolation_Mark");

	FExecuteUbergraph_GA_Lich_CurseOfIsolation_Mark parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

