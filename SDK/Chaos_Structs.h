#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct Chaos.ManagedArrayCollection
struct FManagedArrayCollection
{
	char pad_0[176];  // 0x0 (0x0)


}; 
 
 // ScriptStruct Chaos.ChaosSolverConfiguration
struct FChaosSolverConfiguration
{
	int32_t PositionIterations;  // 0x0 (0x0)
	int32_t VelocityIterations;  // 0x4 (0x4)
	int32_t ProjectionIterations;  // 0x8 (0x8)
	float CollisionMarginFraction;  // 0xC (0xC)
	float CollisionMarginMax;  // 0x10 (0x10)
	float CollisionCullDistance;  // 0x14 (0x14)
	float CollisionMaxPushOutVelocity;  // 0x18 (0x18)
	float ClusterConnectionFactor;  // 0x1C (0x1C)
	uint8_t ClusterUnionConnectionType;  // 0x20 (0x20)
	char pad_33_1 : 7;  // 0x21 (0x21)
	bool bGenerateCollisionData : 1;  // 0x21 (0x21)
	char pad_34[2];  // 0x22 (0x22)
	struct FSolverCollisionFilterSettings CollisionFilterSettings;  // 0x24 (0x24)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool bGenerateBreakData : 1;  // 0x34 (0x34)
	char pad_53[3];  // 0x35 (0x35)
	struct FSolverBreakingFilterSettings BreakingFilterSettings;  // 0x38 (0x38)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool bGenerateTrailingData : 1;  // 0x48 (0x48)
	char pad_73[3];  // 0x49 (0x49)
	struct FSolverTrailingFilterSettings TrailingFilterSettings;  // 0x4C (0x4C)
	int32_t Iterations;  // 0x5C (0x5C)
	int32_t PushOutIterations;  // 0x60 (0x60)
	char pad_100_1 : 7;  // 0x64 (0x64)
	bool bGenerateContactGraph : 1;  // 0x64 (0x64)
	char pad_101[3];  // 0x65 (0x65)


}; 
 
 // ScriptStruct Chaos.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool FilterEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float MinMass;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinImpulse;  // 0xC (0xC)


}; 
 
 // ScriptStruct Chaos.SolverRemovalFilterSettings
struct FSolverRemovalFilterSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool FilterEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float MinMass;  // 0x4 (0x4)
	float MinVolume;  // 0x8 (0x8)


}; 
 
 // ScriptStruct Chaos.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool FilterEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float MinMass;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinVolume;  // 0xC (0xC)


}; 
 
 // ScriptStruct Chaos.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool FilterEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // [x1 ([x1)
	float MinMass;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinVolume;  // 0xC (0xC)


}; 
 
 // ScriptStruct Chaos.SolverTrailingData
struct FSolverTrailingData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Velocity;  // 0x18 (0x18)
	struct FVector AngularVelocity;  // 0x30 (0x30)
	float Mass;  // 0x48 (0x48)
	int32_t ParticleIndex;  // 0x4C (0x4C)
	int32_t ParticleIndexMesh;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct Chaos.SolverCollisionData
struct FSolverCollisionData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector AccumulatedImpulse;  // 0x18 (0x18)
	struct FVector Normal;  // 0x30 (0x30)
	struct FVector Velocity1;  // 0x48 (0x48)
	struct FVector Velocity2;  // 0x60 (0x60)
	struct FVector AngularVelocity1;  // 0x78 (0x78)
	struct FVector AngularVelocity2;  // 0x90 (0x90)
	float Mass1;  // 0xA8 (0xA8)
	float Mass2;  // 0xAC (0xAC)
	int32_t ParticleIndex;  // 0xB0 (0xB0)
	int32_t LevelsetIndex;  // 0xB4 (0xB4)
	int32_t ParticleIndexMesh;  // 0xB8 (0xB8)
	int32_t LevelsetIndexMesh;  // 0xBC (0xBC)


}; 
 
 // ScriptStruct Chaos.SolverBreakingData
struct FSolverBreakingData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Velocity;  // 0x18 (0x18)
	struct FVector AngularVelocity;  // 0x30 (0x30)
	float Mass;  // 0x48 (0x48)
	int32_t ParticleIndex;  // 0x4C (0x4C)
	int32_t ParticleIndexMesh;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)


}; 
 
 // ScriptStruct Chaos.RecordedFrame
struct FRecordedFrame
{
	struct TArray<struct FTransform> Transforms;  // 0x0 (0x0)
	struct TArray<int32_t> TransformIndices;  // 0x10 (0x10)
	struct TArray<int32_t> PreviousTransformIndices;  // 0x20 (0x20)
	struct TArray<bool> DisabledFlags;  // 0x30 (0x30)
	struct TArray<struct FSolverCollisionData> Collisions;  // 0x40 (0x40)
	struct TArray<struct FSolverBreakingData> Breakings;  // 0x50 (0x50)
	struct TSet<struct FSolverTrailingData> Trailings;  // 0x60 (0x60)
	float Timestamp;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)


}; 
 
 // ScriptStruct Chaos.RecordedTransformTrack
struct FRecordedTransformTrack
{
	struct TArray<struct FRecordedFrame> Records;  // 0x0 (0x0)


}; 
 
 