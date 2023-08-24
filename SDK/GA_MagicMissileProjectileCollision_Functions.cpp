#include "pch.h"
#include "SDK.h"

void UGA_MagicMissileProjectileCollision_C::ExecuteUbergraph_GA_MagicMissileProjectileCollision(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_MagicMissileProjectileCollision.GA_MagicMissileProjectileCollision_C.ExecuteUbergraph_GA_MagicMissileProjectileCollision");

	FExecuteUbergraph_GA_MagicMissileProjectileCollision parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

