#include "pch.h"
#include "SDK.h"

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetAvailableLocation(struct FVector DestLocation, bool& Result, struct FVector& Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetAvailableLocation");

	FGetAvailableLocation parms{};	
	parms.DestLocation = DestLocation;
	parms.Result = Result;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::EventReceived_95DCC296493E3A36038DED83D7616167(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_95DCC296493E3A36038DED83D7616167");

	FEventReceived_95DCC296493E3A36038DED83D7616167 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::OnFinish_237210C047AC334B6F6EFAB48C3790F4(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_237210C047AC334B6F6EFAB48C3790F4");

	FOnFinish_237210C047AC334B6F6EFAB48C3790F4 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::OnFinish_73831B584F90FE2D55D4F7B95AFEE710(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_73831B584F90FE2D55D4F7B95AFEE710");

	FOnFinish_73831B584F90FE2D55D4F7B95AFEE710 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82");

	FEventReceived_B16E8F464CD39A7D82CF9CAD51B75D82 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::GetSignal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetSignal");

	FGetSignal parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_C::ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions");

	FExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

