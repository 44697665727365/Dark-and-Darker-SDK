#include "pch.h"
#include "SDK.h"

bool UConstraintsScriptingLibrary::RemoveConstraint(struct UWorld* InWorld, int32_t InIndex){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint");

	FRemoveConstraint parms{};	
	parms.InWorld = InWorld;
	parms.InIndex = InIndex;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UConstraintsManager* UConstraintsScriptingLibrary::GetManager(struct UWorld* InWorld){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.GetManager");

	FGetManager parms{};	
	parms.InWorld = InWorld;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTransformableComponentHandle* UConstraintsScriptingLibrary::CreateTransformableComponentHandle(struct UWorld* InWorld, struct USceneComponent* InSceneComponent, struct FName& InSocketName){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle");

	FCreateTransformableComponentHandle parms{};	
	parms.InWorld = InWorld;
	parms.InSceneComponent = InSceneComponent;
	parms.InSocketName = InSocketName;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UTickableTransformConstraint* UConstraintsScriptingLibrary::CreateFromType(struct UWorld* InWorld, uint8_t InType){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.CreateFromType");

	FCreateFromType parms{};	
	parms.InWorld = InWorld;
	parms.InType = InType;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UConstraintsScriptingLibrary::AddConstraint(struct UWorld* InWorld, struct UTransformableHandle* InParentHandle, struct UTransformableHandle* InChildHandle, struct UTickableTransformConstraint* InConstraint, bool bMaintainOffset){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Constraints.ConstraintsScriptingLibrary.AddConstraint");

	FAddConstraint parms{};	
	parms.InWorld = InWorld;
	parms.InParentHandle = InParentHandle;
	parms.InChildHandle = InChildHandle;
	parms.InConstraint = InConstraint;
	parms.bMaintainOffset = bMaintainOffset;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

