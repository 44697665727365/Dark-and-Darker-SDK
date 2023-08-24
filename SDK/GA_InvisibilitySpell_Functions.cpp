#include "pch.h"
#include "SDK.h"

void UGA_InvisibilitySpell_C::Cancelled_326C53F94A2D902435BE70B8BEA83925(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.Cancelled_326C53F94A2D902435BE70B8BEA83925");

	FCancelled_326C53F94A2D902435BE70B8BEA83925 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilitySpell_C::ValidData_326C53F94A2D902435BE70B8BEA83925(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.ValidData_326C53F94A2D902435BE70B8BEA83925");

	FValidData_326C53F94A2D902435BE70B8BEA83925 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilitySpell_C::AbilityActivated(struct FGameplayEventData TriggerEventData, bool bIsSocketSightBlocked){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;
	parms.bIsSocketSightBlocked = bIsSocketSightBlocked;

	ProcessEvent(fn, &parms);
}

void UGA_InvisibilitySpell_C::ExecuteUbergraph_GA_InvisibilitySpell(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_InvisibilitySpell.GA_InvisibilitySpell_C.ExecuteUbergraph_GA_InvisibilitySpell");

	FExecuteUbergraph_GA_InvisibilitySpell parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

