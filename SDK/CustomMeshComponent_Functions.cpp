#include "pch.h"
#include "SDK.h"

bool UCustomMeshComponent::SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");

	FSetCustomMeshTriangles parms{};	
	parms.Triangles = Triangles;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UCustomMeshComponent::ClearCustomMeshTriangles(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");

	FClearCustomMeshTriangles parms{};	

	ProcessEvent(fn, &parms);
}

void UCustomMeshComponent::AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle>& Triangles){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");

	FAddCustomMeshTriangles parms{};	
	parms.Triangles = Triangles;

	ProcessEvent(fn, &parms);
}

