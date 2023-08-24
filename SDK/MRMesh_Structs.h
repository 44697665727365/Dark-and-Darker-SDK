#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
struct FIsReconstructionPaused
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MeshReconstructorBase.ConnectMRMesh
struct FConnectMRMesh
{
	struct UMRMeshComponent* Mesh;  // 0x0 (0x0)


}; 
 
 // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
struct FOnMockDataMeshTrackerUpdated__DelegateSignature
{
	int32_t Index;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FVector> Vertices;  // 0x8 (0x8)
	struct TArray<int32_t> Triangles;  // 0x18 (0x18)
	struct TArray<struct FVector> Normals;  // 0x28 (0x28)
	struct TArray<float> Confidence;  // 0x38 (0x38)


}; 
 
 // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
struct FDisconnectMRMesh
{
	struct UMRMeshComponent* InMRMeshPtr;  // 0x0 (0x0)


}; 
 
 // ScriptStruct MRMesh.MRMeshConfiguration
struct FMRMeshConfiguration
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.GetWireframeColor
struct FGetWireframeColor
{
	struct FLinearColor ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
struct FGetEnableMeshOcclusion
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.IsConnected
struct FIsConnected
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.GetUseWireframe
struct FGetUseWireframe
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.SetWireframeMaterial
struct FSetWireframeMaterial
{
	struct UMaterialInterface* InMaterial;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
struct FSetEnableMeshOcclusion
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnable : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.SetUseWireframe
struct FSetUseWireframe
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bUseWireframe : 1;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MRMeshComponent.SetWireframeColor
struct FSetWireframeColor
{
	struct FLinearColor InColor;  // 0x0 (0x0)


}; 
 
 // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
struct FIsReconstructionStarted
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 