#include "pch.h"
#include "SDK.h"

void UClothingSimulationInteractorNv::SetAnimDriveDamperStiffness(float InStiffness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness");

	FSetAnimDriveDamperStiffness parms{};	
	parms.InStiffness = InStiffness;

	ProcessEvent(fn, &parms);
}

