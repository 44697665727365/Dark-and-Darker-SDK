#include "pch.h"
#include "SDK.h"

void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	FOnMockDataMeshTrackerUpdated__DelegateSignature parms{};	
	parms.Index = Index;
	parms.Vertices = Vertices;
	parms.Triangles = Triangles;
	parms.Normals = Normals;
	parms.Confidence = Confidence;

	ProcessEvent(fn, &parms);
}

void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	FDisconnectMRMesh parms{};	
	parms.InMRMeshPtr = InMRMeshPtr;

	ProcessEvent(fn, &parms);
}

void UMockDataMeshTrackerComponent::ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	FConnectMRMesh parms{};	
	parms.InMRMeshPtr = InMRMeshPtr;

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::SetWireframeMaterial(struct UMaterialInterface* InMaterial){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeMaterial");

	FSetWireframeMaterial parms{};	
	parms.InMaterial = InMaterial;

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::SetWireframeColor(struct FLinearColor& InColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetWireframeColor");

	FSetWireframeColor parms{};	
	parms.InColor = InColor;

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::SetUseWireframe(bool bUseWireframe){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetUseWireframe");

	FSetUseWireframe parms{};	
	parms.bUseWireframe = bUseWireframe;

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::SetEnableMeshOcclusion(bool bEnable){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion");

	FSetEnableMeshOcclusion parms{};	
	parms.bEnable = bEnable;

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::RequestNavMeshUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.RequestNavMeshUpdate");

	FRequestNavMeshUpdate parms{};	

	ProcessEvent(fn, &parms);
}

bool UMRMeshComponent::IsConnected(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	FIsConnected parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FLinearColor UMRMeshComponent::GetWireframeColor(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetWireframeColor");

	FGetWireframeColor parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMRMeshComponent::GetUseWireframe(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetUseWireframe");

	FGetUseWireframe parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMRMeshComponent::GetEnableMeshOcclusion(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion");

	FGetEnableMeshOcclusion parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMRMeshComponent::ForceNavMeshUpdate(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	FForceNavMeshUpdate parms{};	

	ProcessEvent(fn, &parms);
}

void UMRMeshComponent::Clear(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	FClear parms{};	

	ProcessEvent(fn, &parms);
}

void UMeshReconstructorBase::StopReconstruction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");

	FStopReconstruction parms{};	

	ProcessEvent(fn, &parms);
}

void UMeshReconstructorBase::StartReconstruction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");

	FStartReconstruction parms{};	

	ProcessEvent(fn, &parms);
}

void UMeshReconstructorBase::PauseReconstruction(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");

	FPauseReconstruction parms{};	

	ProcessEvent(fn, &parms);
}

bool UMeshReconstructorBase::IsReconstructionStarted(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");

	FIsReconstructionStarted parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UMeshReconstructorBase::IsReconstructionPaused(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");

	FIsReconstructionPaused parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UMeshReconstructorBase::DisconnectMRMesh(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");

	FDisconnectMRMesh parms{};	

	ProcessEvent(fn, &parms);
}

void UMeshReconstructorBase::ConnectMRMesh(struct UMRMeshComponent* Mesh){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");

	FConnectMRMesh parms{};	
	parms.Mesh = Mesh;

	ProcessEvent(fn, &parms);
}

