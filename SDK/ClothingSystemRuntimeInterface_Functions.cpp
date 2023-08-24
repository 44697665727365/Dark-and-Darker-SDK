#include "pch.h"
#include "SDK.h"

void UClothingSimulationInteractor::SetNumSubsteps(int32_t NumSubsteps){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps");

	FSetNumSubsteps parms{};	
	parms.NumSubsteps = NumSubsteps;

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::SetNumIterations(int32_t NumIterations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations");

	FSetNumIterations parms{};	
	parms.NumIterations = NumIterations;

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::SetMaxNumIterations(int32_t MaxNumIterations){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations");

	FSetMaxNumIterations parms{};	
	parms.MaxNumIterations = MaxNumIterations;

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::SetAnimDriveSpringStiffness(float InStiffness){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness");

	FSetAnimDriveSpringStiffness parms{};	
	parms.InStiffness = InStiffness;

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::PhysicsAssetUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated");

	FPhysicsAssetUpdated parms{};	

	ProcessEvent(fn, &parms);
}

float UClothingSimulationInteractor::GetSimulationTime(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime");

	FGetSimulationTime parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClothingSimulationInteractor::GetNumSubsteps(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps");

	FGetNumSubsteps parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClothingSimulationInteractor::GetNumKinematicParticles(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles");

	FGetNumKinematicParticles parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClothingSimulationInteractor::GetNumIterations(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations");

	FGetNumIterations parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClothingSimulationInteractor::GetNumDynamicParticles(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles");

	FGetNumDynamicParticles parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

int32_t UClothingSimulationInteractor::GetNumCloths(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths");

	FGetNumCloths parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UClothingInteractor* UClothingSimulationInteractor::GetClothingInteractor(struct FString ClothingAssetName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor");

	FGetClothingInteractor parms{};	
	parms.ClothingAssetName = ClothingAssetName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UClothingSimulationInteractor::EnableGravityOverride(struct FVector& InVector){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride");

	FEnableGravityOverride parms{};	
	parms.InVector = InVector;

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::DisableGravityOverride(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride");

	FDisableGravityOverride parms{};	

	ProcessEvent(fn, &parms);
}

void UClothingSimulationInteractor::ClothConfigUpdated(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated");

	FClothConfigUpdated parms{};	

	ProcessEvent(fn, &parms);
}

