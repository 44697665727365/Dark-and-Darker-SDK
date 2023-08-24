#include "pch.h"
#include "SDK.h"

void UGA_FireballProjectileCollision_C::CalTargetHitLocation(struct FVector& HitLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.CalTargetHitLocation");

	FCalTargetHitLocation parms{};	
	parms.HitLocation = HitLocation;

	ProcessEvent(fn, &parms);
}

void UGA_FireballProjectileCollision_C::K2_OnEndAbility(bool bWasCancelled){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.K2_OnEndAbility");

	FK2_OnEndAbility parms{};	
	parms.bWasCancelled = bWasCancelled;

	ProcessEvent(fn, &parms);
}

void UGA_FireballProjectileCollision_C::ExecuteUbergraph_GA_FireballProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_FireballProjectileCollision.GA_FireballProjectileCollision_C.ExecuteUbergraph_GA_FireballProjectileCollision");

	FExecuteUbergraph_GA_FireballProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

