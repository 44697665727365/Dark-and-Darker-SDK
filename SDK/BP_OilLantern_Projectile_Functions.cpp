#include "pch.h"
#include "SDK.h"

void ABP_OilLantern_Projectile_C::OnRep_RepRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.OnRep_RepRotation");

	FOnRep_RepRotation parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_Projectile_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_Projectile_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_OilLantern_Projectile_C::ExecuteUbergraph_BP_OilLantern_Projectile(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_OilLantern_Projectile.BP_OilLantern_Projectile_C.ExecuteUbergraph_BP_OilLantern_Projectile");

	FExecuteUbergraph_BP_OilLantern_Projectile parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

