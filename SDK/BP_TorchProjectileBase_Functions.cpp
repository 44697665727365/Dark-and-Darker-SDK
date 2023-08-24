#include "pch.h"
#include "SDK.h"

void ABP_TorchProjectileBase_C::OnRep_RepRotation(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchProjectileBase.BP_TorchProjectileBase_C.OnRep_RepRotation");

	FOnRep_RepRotation parms{};	

	ProcessEvent(fn, &parms);
}

void ABP_TorchProjectileBase_C::UserConstructionScript(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function BP_TorchProjectileBase.BP_TorchProjectileBase_C.UserConstructionScript");

	FUserConstructionScript parms{};	

	ProcessEvent(fn, &parms);
}

