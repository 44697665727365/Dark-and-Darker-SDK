#include "pch.h"
#include "SDK.h"

void ABP_Projectile_GhostKing_ReturnHeal_C::GameplayTagUpdated(struct FGameplayTag InGameplayTag, int32_t InCount){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Projectile_GhostKing_ReturnHeal.BP_Projectile_GhostKing_ReturnHeal_C.GameplayTagUpdated");

	FGameplayTagUpdated parms{};	
	parms.InGameplayTag = InGameplayTag;
	parms.InCount = InCount;

	ProcessEvent(fn, &parms);
}

void ABP_Projectile_GhostKing_ReturnHeal_C::ExecuteUbergraph_BP_Projectile_GhostKing_ReturnHeal(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_Projectile_GhostKing_ReturnHeal.BP_Projectile_GhostKing_ReturnHeal_C.ExecuteUbergraph_BP_Projectile_GhostKing_ReturnHeal");

	FExecuteUbergraph_BP_Projectile_GhostKing_ReturnHeal parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

