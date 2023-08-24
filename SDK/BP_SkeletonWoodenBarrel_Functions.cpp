#include "pch.h"
#include "SDK.h"

void ABP_SkeletonWoodenBarrel_C::OnImpactEnduranceExhausted(float ExhaustedTime, UGameplayEffect* GameplayEffectClass, struct FDCGameplayEffectContext EffectContext){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.OnImpactEnduranceExhausted");

	FOnImpactEnduranceExhausted parms{};	
	parms.ExhaustedTime = ExhaustedTime;
	parms.GameplayEffectClass = GameplayEffectClass;
	parms.EffectContext = EffectContext;

	ProcessEvent(fn, &parms);
}

void ABP_SkeletonWoodenBarrel_C::ExecuteUbergraph_BP_SkeletonWoodenBarrel(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_SkeletonWoodenBarrel.BP_SkeletonWoodenBarrel_C.ExecuteUbergraph_BP_SkeletonWoodenBarrel");

	FExecuteUbergraph_BP_SkeletonWoodenBarrel parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

