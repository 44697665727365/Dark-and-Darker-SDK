#include "pch.h"
#include "SDK.h"

void UGA_MonsterProjectileAttackBase_C::GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToMonsterBase");

	FGetBBTargetActorToMonsterBase parms{};	
	parms.Result = Result;
	parms.DCMonsterBaseWithOptions = DCMonsterBaseWithOptions;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActorToCharacterBase");

	FGetBBTargetActorToCharacterBase parms{};	
	parms.Result = Result;
	parms.As DCCharacter Base = As DCCharacter Base;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::GetBBTargetActor(bool& Result, struct UObject*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.GetBBTargetActor");

	FGetBBTargetActor parms{};	
	parms.Result = Result;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::Set Options(struct AProjectileActor* ProjectileActorInput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.Set Options");

	FSet Options parms{};	
	parms.ProjectileActorInput = ProjectileActorInput;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::SetSpec(struct AActor* ProjectileActorInput, struct AProjectileActor*& ProjectileActorOutput){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetSpec");

	FSetSpec parms{};	
	parms.ProjectileActorInput = ProjectileActorInput;
	parms.ProjectileActorOutput = ProjectileActorOutput;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::SetTransform(struct FVector ShootLocation Input, struct FRotator ShootRotation Input, struct FVector& ShootLocation Output, struct FRotator& ShootRotation Output){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetTransform");

	FSetTransform parms{};	
	parms.ShootLocation Input = ShootLocation Input;
	parms.ShootRotation Input = ShootRotation Input;
	parms.ShootLocation Output = ShootLocation Output;
	parms.ShootRotation Output = ShootRotation Output;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::ShootProjectile(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.ShootProjectile");

	FShootProjectile parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::SetHoming(bool& bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.SetHoming");

	FSetHoming parms{};	
	parms.bool = bool;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::OnSuccess_F7E3C6614A5311DD050E5CB226F07D8A(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.OnSuccess_F7E3C6614A5311DD050E5CB226F07D8A");

	FOnSuccess_F7E3C6614A5311DD050E5CB226F07D8A parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::EventReceived_FF8A911F49704E3033475794D8E16251(struct FGameplayTag EventTag, struct FGameplayEventData EventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.EventReceived_FF8A911F49704E3033475794D8E16251");

	FEventReceived_FF8A911F49704E3033475794D8E16251 parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::AbilityActivated(struct FGameplayEventData TriggerEventData){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.AbilityActivated");

	FAbilityActivated parms{};	
	parms.TriggerEventData = TriggerEventData;

	ProcessEvent(fn, &parms);
}

void UGA_MonsterProjectileAttackBase_C::ExecuteUbergraph_GA_MonsterProjectileAttackBase(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MonsterProjectileAttackBase.GA_MonsterProjectileAttackBase_C.ExecuteUbergraph_GA_MonsterProjectileAttackBase");

	FExecuteUbergraph_GA_MonsterProjectileAttackBase parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

