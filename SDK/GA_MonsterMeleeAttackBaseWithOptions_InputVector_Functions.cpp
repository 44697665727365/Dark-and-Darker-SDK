#include "pch.h"
#include "SDK.h"

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::GetAvailableLocation(struct FVector DestLocation, bool& Result, struct FVector& Location){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetAvailableLocation");

	FGetAvailableLocation parms{};	
	parms.DestLocation = DestLocation;
	parms.Result = Result;
	parms.Location = Location;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::EventReceived_345BBB4C476117C4949AE2A581954F06(struct FGameplayEventData Payload){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_345BBB4C476117C4949AE2A581954F06");

	FEventReceived_345BBB4C476117C4949AE2A581954F06 parms{};	
	parms.Payload = Payload;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::EventReceived_AE81807E4915675DEB1BD0847699B25D(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_AE81807E4915675DEB1BD0847699B25D");

	FEventReceived_AE81807E4915675DEB1BD0847699B25D parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::OnFinish_FFD00FE4461E73F15B901CA7FD69D470(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_FFD00FE4461E73F15B901CA7FD69D470");

	FOnFinish_FFD00FE4461E73F15B901CA7FD69D470 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::OnFinish_AB08374A4B9F12BF12E6DA84E1306A84(bool IsArrivedDestLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_AB08374A4B9F12BF12E6DA84E1306A84");

	FOnFinish_AB08374A4B9F12BF12E6DA84E1306A84 parms{};	
	parms.IsArrivedDestLocation = IsArrivedDestLocation;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::GetSignal(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetSignal");

	FGetSignal parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C::ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector");

	FExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

