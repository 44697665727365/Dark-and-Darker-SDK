#include "pch.h"
#include "SDK.h"

void UGA_Lich_CurseOfGathering_Mark_C::CheckOverlapActorIsNull(bool& Is Null){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.CheckOverlapActorIsNull");

	FCheckOverlapActorIsNull parms{};	
	parms.Is Null = Is Null;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::Apply Effect(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.Apply Effect");

	FApply Effect parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::OnFinish_ECA6CAF448F9E889034078A012F45101(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.OnFinish_ECA6CAF448F9E889034078A012F45101");

	FOnFinish_ECA6CAF448F9E889034078A012F45101 parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::InvalidHandle_7481A0444A582F553DFF5FB1E801F3B4(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.InvalidHandle_7481A0444A582F553DFF5FB1E801F3B4");

	FInvalidHandle_7481A0444A582F553DFF5FB1E801F3B4 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::OnRemoved_7481A0444A582F553DFF5FB1E801F3B4(struct FGameplayEffectRemovalInfo& GameplayEffectRemovalInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.OnRemoved_7481A0444A582F553DFF5FB1E801F3B4");

	FOnRemoved_7481A0444A582F553DFF5FB1E801F3B4 parms{};	
	parms.GameplayEffectRemovalInfo = GameplayEffectRemovalInfo;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Lich_CurseOfGathering_Mark_C::ExecuteUbergraph_GA_Lich_CurseOfGathering_Mark(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Lich_CurseOfGathering_Mark.GA_Lich_CurseOfGathering_Mark_C.ExecuteUbergraph_GA_Lich_CurseOfGathering_Mark");

	FExecuteUbergraph_GA_Lich_CurseOfGathering_Mark parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

