#pragma once 
#include <PhysicsCore_Structs.h>
 
 
 
// Class PhysicsCore.PhysicalMaterialPropertyBase
// Size: 0x28(Inherited: 0x28)
struct UPhysicalMaterialPropertyBase : UObject
{


}; 
 
 


// Class PhysicsCore.BodySetupCore
// Size: 0x38(Inherited: 0x28)
struct UBodySetupCore : UObject
{
	struct FName BoneName;  // 0x28 (0x28)
	enum class EPhysicsType PhysicsType;  // 0x30 (0x30)
	enum class ECollisionTraceFlag CollisionTraceFlag;  // 0x31 (0x31)
	enum class EBodyCollisionResponse CollisionReponse;  // 0x32 (0x32)
	char pad_51[5];  // 0x33 (0x33)


}; 
 
 


// Class PhysicsCore.PhysicalMaterial
// Size: 0x80(Inherited: 0x28)
struct UPhysicalMaterial : UObject
{
	float Friction;  // 0x28 (0x28)
	float StaticFriction;  // 0x2C (0x2C)
	enum class EFrictionCombineMode FrictionCombineMode;  // 0x30 (0x30)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool bOverrideFrictionCombineMode : 1;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	float Restitution;  // 0x34 (0x34)
	enum class EFrictionCombineMode RestitutionCombineMode;  // 0x38 (0x38)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool bOverrideRestitutionCombineMode : 1;  // 0x39 (0x39)
	char pad_58[2];  // 0x3A (0x3A)
	float Density;  // 0x3C (0x3C)
	float SleepLinearVelocityThreshold;  // 0x40 (0x40)
	float SleepAngularVelocityThreshold;  // 0x44 (0x44)
	int32_t SleepCounterThreshold;  // 0x48 (0x48)
	float RaiseMassToPower;  // 0x4C (0x4C)
	float DestructibleDamageThresholdScale;  // 0x50 (0x50)
	char pad_84[4];  // 0x54 (0x54)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty;  // 0x58 (0x58)
	enum class EPhysicalSurface SurfaceType;  // 0x60 (0x60)
	char pad_97[31];  // 0x61 (0x61)


}; 
 
 


// Class PhysicsCore.ChaosPhysicalMaterial
// Size: 0x48(Inherited: 0x28)
struct UChaosPhysicalMaterial : UObject
{
	float Friction;  // 0x28 (0x28)
	float StaticFriction;  // 0x2C (0x2C)
	float Restitution;  // 0x30 (0x30)
	float LinearEtherDrag;  // [x34 ([x34)
	float AngularEtherDrag;  // 0x38 (0x38)
	float SleepingLinearVelocityThreshold;  // 0x3C (0x3C)
	float SleepingAngularVelocityThreshold;  // 0x40 (0x40)
	char pad_68[4];  // 0x44 (0x44)


}; 
 
 


// Class PhysicsCore.PhysicsSettingsCore
// Size: 0xE0(Inherited: 0x38)
struct UPhysicsSettingsCore : UDeveloperSettings
{
	float DefaultGravityZ;  // 0x38 (0x38)
	float DefaultTerminalVelocity;  // 0x3C (0x3C)
	float DefaultFluidFriction;  // 0x40 (0x40)
	int32_t SimulateScratchMemorySize;  // 0x44 (0x44)
	int32_t RagdollAggregateThreshold;  // 0x48 (0x48)
	float TriangleMeshTriangleMinAreaThreshold;  // 0x4C (0x4C)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bEnableShapeSharing : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool bEnablePCM : 1;  // 0x51 (0x51)
	char pad_82_1 : 7;  // 0x52 (0x52)
	bool bEnableStabilization : 1;  // 0x52 (0x52)
	char pad_83_1 : 7;  // 0x53 (0x53)
	bool bWarnMissingLocks : 1;  // 0x53 (0x53)
	char pad_84_1 : 7;  // 0x54 (0x54)
	bool bEnable2DPhysics : 1;  // 0x54 (0x54)
	char pad_85_1 : 7;  // 0x55 (0x55)
	bool bDefaultHasComplexCollision : 1;  // 0x55 (0x55)
	char pad_86[2];  // 0x56 (0x56)
	float BounceThresholdVelocity;  // 0x58 (0x58)
	enum class EFrictionCombineMode FrictionCombineMode;  // 0x5C (0x5C)
	enum class EFrictionCombineMode RestitutionCombineMode;  // 0x5D (0x5D)
	char pad_94[2];  // 0x5E (0x5E)
	float MaxAngularVelocity;  // 0x60 (0x60)
	float MaxDepenetrationVelocity;  // 0x64 (0x64)
	float ContactOffsetMultiplier;  // 0x68 (0x68)
	float MinContactOffset;  // 0x6C (0x6C)
	float MaxContactOffset;  // 0x70 (0x70)
	char pad_116_1 : 7;  // 0x74 (0x74)
	bool bSimulateSkeletalMeshOnDedicatedServer : 1;  // 0x74 (0x74)
	enum class ECollisionTraceFlag DefaultShapeComplexity;  // 0x75 (0x75)
	char pad_118[2];  // 0x76 (0x76)
	struct FChaosSolverConfiguration SolverOptions;  // 0x78 (0x78)


}; 
 
 


