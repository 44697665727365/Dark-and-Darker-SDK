#include "pch.h"
#include "SDK.h"

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::CheckHitGround(struct FVector NormalVector, bool& Return){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CheckHitGround");

	FCheckHitGround parms{};	
	parms.NormalVector = NormalVector;
	parms.Return = Return;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::CalRotateLocation(double Angle, double Distance, struct FVector& RotateLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.CalRotateLocation");

	FCalRotateLocation parms{};	
	parms.Angle = Angle;
	parms.Distance = Distance;
	parms.RotateLocation = RotateLocation;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::Cal Spawn Location(double SpawnDist){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.Cal Spawn Location");

	FCal Spawn Location parms{};	
	parms.SpawnDist = SpawnDist;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::K2_ActivateAbility(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.K2_ActivateAbility");

	FK2_ActivateAbility parms{};	

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::TargetDataReceived(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.TargetDataReceived");

	FTargetDataReceived parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UGA_AoeCallerFromProjectile_ExplosionBottle_C::ExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_AoeCallerFromProjectile_ExplosionBottle.GA_AoeCallerFromProjectile_ExplosionBottle_C.ExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle");

	FExecuteUbergraph_GA_AoeCallerFromProjectile_ExplosionBottle parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

