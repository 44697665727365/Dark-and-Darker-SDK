#pragma once 
#include <MRMesh_Structs.h>
 
 
 
// Class MRMesh.MockDataMeshTrackerComponent
// Size: 0x310(Inherited: 0x2A0)
struct UMockDataMeshTrackerComponent : USceneComponent
{
	struct FMulticastInlineDelegate OnMeshTrackerUpdated;  // 0x2A0 (0x2A0)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool ScanWorld : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool RequestNormals : 1;  // 0x2B1 (0x2B1)
	char pad_690_1 : 7;  // 0x2B2 (0x2B2)
	bool RequestVertexConfidence : 1;  // 0x2B2 (0x2B2)
	uint8_t VertexColorMode;  // 0x2B3 (0x2B3)
	char pad_692[4];  // 0x2B4 (0x2B4)
	struct TArray<struct FColor> BlockVertexColors;  // 0x2B8 (0x2B8)
	struct FLinearColor VertexColorFromConfidenceZero;  // 0x2C8 (0x2C8)
	struct FLinearColor VertexColorFromConfidenceOne;  // 0x2D8 (0x2D8)
	float UpdateInterval;  // 0x2E8 (0x2E8)
	char pad_748[4];  // 0x2EC (0x2EC)
	struct UMRMeshComponent* MRMesh;  // 0x2F0 (0x2F0)
	char pad_760[24];  // 0x2F8 (0x2F8)


	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
}; 
 
 


// Class MRMesh.MRMeshBodyHolder
// Size: 0x230(Inherited: 0x28)
struct UMRMeshBodyHolder : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	struct UBodySetup* BodySetup;  // 0x30 (0x30)
	struct FBodyInstance BodyInstance;  // 0x38 (0x38)
	char pad_456[104];  // 0x1C8 (0x1C8)


}; 
 
 


// Class MRMesh.MRMeshComponent
// Size: 0x5C0(Inherited: 0x540)
struct UMRMeshComponent : UPrimitiveComponent
{
	struct UMaterialInterface* Material;  // 0x540 (0x540)
	struct UMaterialInterface* WireframeMaterial;  // 0x548 (0x548)
	char pad_1360_1 : 7;  // 0x550 (0x550)
	bool bCreateMeshProxySections : 1;  // 0x550 (0x550)
	char pad_1361_1 : 7;  // 0x551 (0x551)
	bool bUpdateNavMeshOnMeshUpdate : 1;  // 0x551 (0x551)
	char pad_1362[1];  // 0x552 (0x552)
	char pad_1363_1 : 7;  // 0x553 (0x553)
	bool bNeverCreateCollisionMesh : 1;  // 0x553 (0x553)
	char pad_1364[68];  // 0x554 (0x554)
	struct TArray<struct UMRMeshBodyHolder*> BodyHolders;  // 0x598 (0x598)
	char pad_1448[24];  // 0x5A8 (0x5A8)


	void SetWireframeMaterial(struct UMaterialInterface* InMaterial); // Function MRMesh.MRMeshComponent.SetWireframeMaterial
	void SetWireframeColor(struct FLinearColor& InColor); // Function MRMesh.MRMeshComponent.SetWireframeColor
	void SetUseWireframe(bool bUseWireframe); // Function MRMesh.MRMeshComponent.SetUseWireframe
	void SetEnableMeshOcclusion(bool bEnable); // Function MRMesh.MRMeshComponent.SetEnableMeshOcclusion
	void RequestNavMeshUpdate(); // Function MRMesh.MRMeshComponent.RequestNavMeshUpdate
	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected
	struct FLinearColor GetWireframeColor(); // Function MRMesh.MRMeshComponent.GetWireframeColor
	bool GetUseWireframe(); // Function MRMesh.MRMeshComponent.GetUseWireframe
	bool GetEnableMeshOcclusion(); // Function MRMesh.MRMeshComponent.GetEnableMeshOcclusion
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	void Clear(); // Function MRMesh.MRMeshComponent.Clear
}; 
 
 


// Class MRMesh.MeshReconstructorBase
// Size: 0x28(Inherited: 0x28)
struct UMeshReconstructorBase : UObject
{


	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh
}; 
 
 


