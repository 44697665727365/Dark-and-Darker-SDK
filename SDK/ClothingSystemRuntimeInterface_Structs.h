#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
struct FClothCollisionPrim_Box
{
	struct FVector LocalPosition;  // 0x0 (0x0)
	char pad_24[8];  // 0x18 (0x18)
	struct FQuat LocalRotation;  // 0x20 (0x20)
	struct FVector HalfExtents;  // 0x40 (0x40)
	int32_t BoneIndex;  // 0x58 (0x58)
	char pad_92[4];  // 0x5C (0x5C)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
struct FClothCollisionPrim_SphereConnection
{
	int32_t SphereIndices[2];  // 0x0 (0x0)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
struct FClothCollisionPrim_Sphere
{
	int32_t BoneIndex;  // 0x0 (0x0)
	float Radius;  // 0x4 (0x4)
	struct FVector LocalPosition;  // 0x8 (0x8)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
struct FGetNumCloths
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
struct FClothCollisionPrim_ConvexFace
{
	struct FPlane Plane;  // 0x0 (0x0)
	struct TArray<int32_t> Indices;  // 0x20 (0x20)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
struct FGetNumKinematicParticles
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
struct FClothCollisionPrim_Convex
{
	struct TArray<struct FClothCollisionPrim_ConvexFace> Faces;  // 0x0 (0x0)
	struct TArray<struct FVector> SurfacePoints;  // 0x10 (0x10)
	int32_t BoneIndex;  // 0x20 (0x20)
	char pad_36[4];  // 0x24 (0x24)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData
struct FClothVertBoneData
{
	int32_t NumInfluences;  // 0x0 (0x0)
	uint16_t BoneIndices[c];  // 0x4 (0x4)
	float BoneWeights[c];  // 0x1C (0x1C)


}; 
 
 // ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData
struct FClothCollisionData
{
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres;  // 0x0 (0x0)
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;  // 0x10 (0x10)
	struct TArray<struct FClothCollisionPrim_Convex> Convexes;  // 0x20 (0x20)
	struct TArray<struct FClothCollisionPrim_Box> Boxes;  // 0x30 (0x30)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
struct FEnableGravityOverride
{
	struct FVector InVector;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
struct FGetClothingInteractor
{
	struct FString ClothingAssetName;  // 0x0 (0x0)
	struct UClothingInteractor* ReturnValue;  // 0x10 (0x10)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
struct FGetNumDynamicParticles
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
struct FGetNumIterations
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
struct FGetNumSubsteps
{
	int32_t ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
struct FGetSimulationTime
{
	float ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
struct FSetAnimDriveSpringStiffness
{
	float InStiffness;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations
struct FSetMaxNumIterations
{
	int32_t MaxNumIterations;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
struct FSetNumIterations
{
	int32_t NumIterations;  // 0x0 (0x0)


}; 
 
 // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
struct FSetNumSubsteps
{
	int32_t NumSubsteps;  // 0x0 (0x0)


}; 
 
 