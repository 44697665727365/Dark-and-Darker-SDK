#include "pch.h"
#include "SDK.h"

void UGA_MonsterGameplayAbilityBase_C::Unable To Move Check(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check");

	FUnable To Move Check parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MonsterGameplayAbilityBase_C::Unable To Move Check Timer(struct FTimerHandle& TimerHandle){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.Unable To Move Check Timer");

	FUnable To Move Check Timer parms{};	
	parms.TimerHandle = TimerHandle;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterGameplayAbilityBase_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterGameplayAbilityBase.GA_MonsterGameplayAbilityBase_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

