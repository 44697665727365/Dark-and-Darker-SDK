#include "pch.h"
#include "SDK.h"

void ABP_LanternProjectile_C::OnRep_RepRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LanternProjectile.BP_LanternProjectile_C.OnRep_RepRotation");

	FOnRep_RepRotation parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_LanternProjectile_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_LanternProjectile.BP_LanternProjectile_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

