#include "pch.h"
#include "SDK.h"

void UGA_FieldRation_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FieldRation.GA_FieldRation_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_FieldRation_C::ServerOnSkillActivate(struct FGameplayTag SkillTag, struct FGameplayTag CooldownTag){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FieldRation.GA_FieldRation_C.ServerOnSkillActivate");

	FServerOnSkillActivate parms{};	
	parms.SkillTag = SkillTag;
	parms.CooldownTag = CooldownTag;

	ProcessEvent(fn, &parms);
}

void UGA_FieldRation_C::ExecuteUbergraph_GA_FieldRation(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FieldRation.GA_FieldRation_C.ExecuteUbergraph_GA_FieldRation");

	FExecuteUbergraph_GA_FieldRation parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

