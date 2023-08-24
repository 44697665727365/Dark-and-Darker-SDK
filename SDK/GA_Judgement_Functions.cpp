#include "pch.h"
#include "SDK.h"

void UGA_Judgement_C::IsTargetOutOfRange(bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.IsTargetOutOfRange");

	FIsTargetOutOfRange parms{};	
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_Judgement_C::GetAimTraceTarget(double MaxRange, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.GetAimTraceTarget");

	FGetAimTraceTarget parms{};	
	parms.MaxRange = MaxRange;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_Judgement_C::BroadcastSystemMessage(struct FText SystemMessage){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.BroadcastSystemMessage");

	FBroadcastSystemMessage parms{};	
	parms.SystemMessage = SystemMessage;

	ProcessEvent(fn, &parms);
}

void UGA_Judgement_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_Judgement_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_Judgement_C::ExecuteUbergraph_GA_Judgement(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_Judgement.GA_Judgement_C.ExecuteUbergraph_GA_Judgement");

	FExecuteUbergraph_GA_Judgement parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

