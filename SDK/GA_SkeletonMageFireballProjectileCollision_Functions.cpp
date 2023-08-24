#include "pch.h"
#include "SDK.h"

void UGA_SkeletonMageFireballProjectileCollision_C::TargetDataReceived(struct FHitResult& Hit){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.TargetDataReceived");

	FTargetDataReceived parms{};	
	parms.Hit = Hit;

	ProcessEvent(fn, &parms);
}

void UGA_SkeletonMageFireballProjectileCollision_C::ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_SkeletonMageFireballProjectileCollision.GA_SkeletonMageFireballProjectileCollision_C.ExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision");

	FExecuteUbergraph_GA_SkeletonMageFireballProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

