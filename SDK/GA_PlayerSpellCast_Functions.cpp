#include "pch.h"
#include "SDK.h"

void UGA_PlayerSpellCast_C::CheckGround(struct FHitResult HtResult, bool& Result){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CheckGround");

	FCheckGround parms{};	
	parms.HtResult = HtResult;
	parms.Result = Result;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::Cancelled_BD46902F414FE76022DDE5BE621487B9(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.Cancelled_BD46902F414FE76022DDE5BE621487B9");

	FCancelled_BD46902F414FE76022DDE5BE621487B9 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::ValidData_BD46902F414FE76022DDE5BE621487B9(struct FGameplayAbilityTargetDataHandle& Data){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ValidData_BD46902F414FE76022DDE5BE621487B9");

	FValidData_BD46902F414FE76022DDE5BE621487B9 parms{};	
	parms.Data = Data;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::CastingFinishEvent(struct FDesignDataSpell CurentDesignSpellData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.CastingFinishEvent");

	FCastingFinishEvent parms{};	
	parms.CurentDesignSpellData = CurentDesignSpellData;

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::SpellFireEvent(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.SpellFireEvent");

	FSpellFireEvent parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_PlayerSpellCast_C::ExecuteUbergraph_GA_PlayerSpellCast(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_PlayerSpellCast.GA_PlayerSpellCast_C.ExecuteUbergraph_GA_PlayerSpellCast");

	FExecuteUbergraph_GA_PlayerSpellCast parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

