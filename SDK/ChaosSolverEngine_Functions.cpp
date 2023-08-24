#include "pch.h"
#include "SDK.h"

void AChaosSolverActor::SetSolverActive(bool bActive){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	FSetSolverActive parms{};	
	parms.bActive = bActive;

	ProcessEvent(fn, &parms);
}

void AChaosSolverActor::SetAsCurrentWorldSolver(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	FSetAsCurrentWorldSolver parms{};	

	ProcessEvent(fn, &parms);
}

struct FHitResult UChaosSolverEngineBlueprintLibrary::ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult");

	FConvertPhysicsCollisionToHitResult parms{};	
	parms.PhysicsCollision = PhysicsCollision;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

