#pragma once 
#include <ClothingSystemRuntimeInterface_Structs.h>
 
 
 
// Class ClothingSystemRuntimeInterface.ClothingInteractor
// Size: 0x30(Inherited: 0x28)
struct UClothingInteractor : UObject
{
	char pad_40[8];  // 0x28 (0x28)


}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x28(Inherited: 0x28)
struct UClothingSimulationFactory : UObject
{


}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x28(Inherited: 0x28)
struct UClothConfigBase : UObject
{


}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x90(Inherited: 0x28)
struct UClothingSimulationInteractor : UObject
{
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors;  // 0x28 (0x28)
	char pad_120[24];  // 0x78 (0x78)


	void SetNumSubsteps(int32_t NumSubsteps); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	void SetNumIterations(int32_t NumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	void SetMaxNumIterations(int32_t MaxNumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x48(Inherited: 0x28)
struct UClothingAssetBase : UObject
{
	struct FString ImportedFilePath;  // 0x28 (0x28)
	struct FGuid AssetGuid;  // 0x38 (0x38)


}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x28(Inherited: 0x28)
struct UClothSharedSimConfigBase : UObject
{


}; 
 
 


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xE0(Inherited: 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject
{
	struct TArray<struct FVector3f> Vertices;  // 0x28 (0x28)
	struct TArray<struct FVector3f> Normals;  // 0x38 (0x38)
	struct TArray<uint32_t> Indices;  // 0x48 (0x48)
	struct TArray<float> InverseMasses;  // 0x58 (0x58)
	struct TArray<struct FClothVertBoneData> BoneData;  // 0x68 (0x68)
	int32_t NumFixedVerts;  // 0x78 (0x78)
	int32_t MaxBoneWeights;  // 0x7C (0x7C)
	struct TArray<uint32_t> SelfCollisionIndices;  // 0x80 (0x80)
	char pad_144[80];  // 0x90 (0x90)


}; 
 
 


