#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// DelegateFunction GeometryCollectionEngine.OnChaosBreakEvent__DelegateSignature
struct FOnChaosBreakEvent__DelegateSignature
{
	struct FChaosBreakEvent BreakEvent;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosRemovalEvent__DelegateSignature
struct FOnChaosRemovalEvent__DelegateSignature
{
	struct FChaosRemovalEvent RemovalEvent;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosBreakingEvents__DelegateSignature
struct FOnChaosBreakingEvents__DelegateSignature
{
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
struct FSetNotifyBreaks
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewNotifyBreaks : 1;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosRemovalEvents__DelegateSignature
struct FOnChaosRemovalEvents__DelegateSignature
{
	struct TArray<struct FChaosRemovalEventData> RemovalEvents;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings
{
	int32_t MaxNumberOfResults;  // 0x0 (0x0)
	float MinRadius;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinMass;  // 0xC (0xC)
	float MaxDistance;  // 0x10 (0x10)
	uint8_t SortMethod;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosCrumblingEvent__DelegateSignature
struct FOnChaosCrumblingEvent__DelegateSignature
{
	struct FChaosCrumblingEvent CrumbleEvent;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters
{
	uint8_t CacheMode;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	struct UGeometryCollectionCache* TargetCache;  // 0x8 (0x8)
	float ReverseCacheBeginTime;  // 0x10 (0x10)
	char pad_20_1 : 7;  // 0x14 (0x14)
	bool SaveCollisionData : 1;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool DoGenerateCollisionData : 1;  // 0x15 (0x15)
	char pad_22[2];  // 0x16 (0x16)
	int32_t CollisionDataSizeMax;  // 0x18 (0x18)
	char pad_28_1 : 7;  // 0x1C (0x1C)
	bool DoCollisionDataSpatialHash : 1;  // 0x1C (0x1C)
	char pad_29[3];  // 0x1D (0x1D)
	float CollisionDataSpatialHashRadius;  // 0x20 (0x20)
	int32_t MaxCollisionPerCell;  // 0x24 (0x24)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool SaveBreakingData : 1;  // 0x28 (0x28)
	char pad_41_1 : 7;  // 0x29 (0x29)
	bool DoGenerateBreakingData : 1;  // 0x29 (0x29)
	char pad_42[2];  // 0x2A (0x2A)
	int32_t BreakingDataSizeMax;  // 0x2C (0x2C)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool DoBreakingDataSpatialHash : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	float BreakingDataSpatialHashRadius;  // 0x34 (0x34)
	int32_t MaxBreakingPerCell;  // 0x38 (0x38)
	char pad_60_1 : 7;  // 0x3C (0x3C)
	bool SaveTrailingData : 1;  // 0x3C (0x3C)
	char pad_61_1 : 7;  // 0x3D (0x3D)
	bool DoGenerateTrailingData : 1;  // 0x3D (0x3D)
	char pad_62[2];  // 0x3E (0x3E)
	int32_t TrailingDataSizeMax;  // 0x40 (0x40)
	float TrailingMinSpeedThreshold;  // 0x44 (0x44)
	float TrailingMinVolumeThreshold;  // 0x48 (0x48)
	char pad_76[4];  // 0x4C (0x4C)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosCollisionEvents__DelegateSignature
struct FOnChaosCollisionEvents__DelegateSignature
{
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Velocity;  // 0x18 (0x18)
	float Mass;  // 0x30 (0x30)
	char pad_52[4];  // 0x34 (0x34)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings
{
	int32_t MaxNumberOfResults;  // 0x0 (0x0)
	float MinMass;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinAngularSpeed;  // 0xC (0xC)
	float MaxDistance;  // 0x10 (0x10)
	uint8_t SortMethod;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Normal;  // 0x18 (0x18)
	struct FVector Velocity1;  // 0x30 (0x30)
	struct FVector Velocity2;  // 0x48 (0x48)
	float Mass1;  // 0x60 (0x60)
	float Mass2;  // 0x64 (0x64)
	struct FVector Impulse;  // 0x68 (0x68)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosRemovalEventData
struct FChaosRemovalEventData
{
	struct FVector Location;  // 0x0 (0x0)
	float Mass;  // 0x18 (0x18)
	int32_t ParticleIndex;  // 0x1C (0x1C)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
struct FSetBreakingEventRequestSettings
{
	struct FChaosBreakingEventRequestSettings InSettings;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.OnChaosTrailingEvents__DelegateSignature
struct FOnChaosTrailingEvents__DelegateSignature
{
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData
{
	struct FVector Location;  // 0x0 (0x0)
	struct FVector Velocity;  // 0x18 (0x18)
	struct FVector AngularVelocity;  // 0x30 (0x30)
	float Mass;  // 0x48 (0x48)
	int32_t ParticleIndex;  // 0x4C (0x4C)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
struct FApplyAngularVelocity
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector AngularVelocity;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionLevelSetData
struct FGeometryCollectionLevelSetData
{
	int32_t MinLevelSetResolution;  // 0x0 (0x0)
	int32_t MaxLevelSetResolution;  // 0x4 (0x4)
	int32_t MinClusterLevelSetResolution;  // 0x8 (0x8)
	int32_t MaxClusterLevelSetResolution;  // 0xC (0xC)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
struct FApplyInternalStrain
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Location;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	int32_t PropagationDepth;  // 0x24 (0x24)
	float PropagationFactor;  // 0x28 (0x28)
	float Strain;  // 0x2C (0x2C)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
struct FApplyBreakingAngularVelocity
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector AngularVelocity;  // 0x8 (0x8)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
struct FSetCollisionEventEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
struct FApplyBreakingLinearVelocity
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector LinearVelocity;  // 0x8 (0x8)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
struct FGetMassAndExtents
{
	int32_t ItemIndex;  // 0x0 (0x0)
	float OutMass;  // 0x4 (0x4)
	struct FBox OutExtents;  // 0x8 (0x8)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
struct FApplyLinearVelocity
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector LinearVelocity;  // 0x8 (0x8)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
struct FApplyExternalStrain
{
	int32_t ItemIndex;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Location;  // 0x8 (0x8)
	float Radius;  // 0x20 (0x20)
	int32_t PropagationDepth;  // 0x24 (0x24)
	float PropagationFactor;  // 0x28 (0x28)
	float Strain;  // 0x2C (0x2C)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
struct FSortTrailingEvents
{
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // 0x0 (0x0)
	uint8_t SortMethod;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
struct FApplyKinematicField
{
	float Radius;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FVector Position;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData
{
	float MaxSize;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct FGeometryCollectionCollisionTypeData> CollisionShapes;  // 0x8 (0x8)
	int32_t DamageThreshold;  // 0x18 (0x18)
	char pad_28[4];  // 0x1C (0x1C)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
struct FApplyPhysicsField
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Enabled : 1;  // 0x0 (0x0)
	uint8_t Target;  // 0x1 (0x1)
	char pad_2[6];  // 0x2 (0x2)
	struct UFieldSystemMetaData* MetaData;  // 0x8 (0x8)
	struct UFieldNodeBase* Field;  // 0x10 (0x10)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
struct FSetNotifyRemovals
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewNotifyRemovals : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
struct FCrumbleCluster
{
	int32_t ItemIndex;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
struct FSetRemovalEventRequestSettings
{
	struct FChaosRemovalEventRequestSettings InSettings;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
struct FGetInitialLevel
{
	int32_t ItemIndex;  // 0x0 (0x0)
	int32_t ReturnValue;  // 0x4 (0x4)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
struct FGeometryCollectionDebugDrawWarningMessage
{
	char pad_0[1];  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
struct FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
{
	struct UGeometryCollectionComponent* FracturedComponent;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
struct FSetTrailingEventRequestSettings
{
	struct FChaosTrailingEventRequestSettings InSettings;  // 0x0 (0x0)


}; 
 
 // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
struct FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature
{
	struct UGeometryCollectionComponent* FracturedComponent;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
struct FSetCollisionEventRequestSettings
{
	struct FChaosCollisionEventRequestSettings InSettings;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
struct FReceivePhysicsCollision
{
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
struct FSetTrailingEventEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
struct FSetNotifyCrumblings
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bNewNotifyCrumblings : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	int32_t ID;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AChaosSolverActor* Solver;  // 0x8 (0x8)
	struct AGeometryCollectionActor* GeometryCollection;  // 0x10 (0x10)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
struct FSetRestCollection
{
	struct UGeometryCollection* RestCollectionIn;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData
struct FGeometryCollectionRepData
{
	char pad_0[40];  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
struct FSortCollisionEvents
{
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // 0x0 (0x0)
	uint8_t SortMethod;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionDamagePropagationData
struct FGeometryCollectionDamagePropagationData
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bEnabled : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	float BreakDamagePropagationFactor;  // 0x4 (0x4)
	float ShockDamagePropagationFactor;  // 0x8 (0x8)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings
{
	int32_t MaxNumberResults;  // 0x0 (0x0)
	float MinMass;  // 0x4 (0x4)
	float MinSpeed;  // 0x8 (0x8)
	float MinImpulse;  // 0xC (0xC)
	float MaxDistance;  // 0x10 (0x10)
	uint8_t SortMethod;  // 0x14 (0x14)
	char pad_21[3];  // 0x15 (0x15)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
struct FAddGeometryCollectionActor
{
	struct AGeometryCollectionActor* GeometryCollectionActor;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.ChaosRemovalEventRequestSettings
struct FChaosRemovalEventRequestSettings
{
	int32_t MaxNumberOfResults;  // 0x0 (0x0)
	float MinMass;  // 0x4 (0x4)
	float MaxDistance;  // 0x8 (0x8)
	uint8_t SortMethod;  // 0xC (0xC)
	char pad_13[3];  // 0xD (0xD)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionSource
struct FGeometryCollectionSource
{
	struct FSoftObjectPath SourceGeometryObject;  // 0x0 (0x0)
	struct FTransform LocalTransform;  // 0x20 (0x20)
	struct TArray<struct UMaterialInterface*> SourceMaterial;  // 0x80 (0x80)
	char pad_144_1 : 7;  // 0x90 (0x90)
	bool bAddInternalMaterials : 1;  // 0x90 (0x90)
	char pad_145_1 : 7;  // 0x91 (0x91)
	bool bSplitComponents : 1;  // 0x91 (0x91)
	char pad_146[14];  // 0x92 (0x92)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
struct FIsEventListening
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
struct FGeometryCollectionAutoInstanceMesh
{
	struct FSoftObjectPath StaticMesh;  // 0x0 (0x0)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x20 (0x20)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
struct FGeometryCollectionEmbeddedExemplar
{
	struct FSoftObjectPath StaticMeshExemplar;  // 0x0 (0x0)
	float StartCullDistance;  // 0x20 (0x20)
	float EndCullDistance;  // 0x24 (0x24)
	int32_t InstanceCount;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionParticleData
struct FGeometryCollectionCollisionParticleData
{
	float CollisionParticlesFraction;  // 0x0 (0x0)
	int32_t MaximumCollisionParticles;  // 0x4 (0x4)


}; 
 
 // ScriptStruct GeometryCollectionEngine.GeometryCollectionCollisionTypeData
struct FGeometryCollectionCollisionTypeData
{
	uint8_t CollisionType;  // 0x0 (0x0)
	uint8_t ImplicitType;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)
	struct FGeometryCollectionLevelSetData LevelSet;  // 0x4 (0x4)
	struct FGeometryCollectionCollisionParticleData CollisionParticles;  // 0x14 (0x14)
	float CollisionObjectReductionPercentage;  // 0x1C (0x1C)
	float CollisionMarginFraction;  // 0x20 (0x20)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
struct FAddChaosSolverActor
{
	struct AChaosSolverActor* ChaosSolverActor;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
struct FRemoveChaosSolverActor
{
	struct AChaosSolverActor* ChaosSolverActor;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
struct FRemoveGeometryCollectionActor
{
	struct AGeometryCollectionActor* GeometryCollectionActor;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
struct FSetBreakingEventEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
struct FSetRemovalEventEnabled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bIsEnabled : 1;  // 0x0 (0x0)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
struct FSortBreakingEvents
{
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // 0x0 (0x0)
	uint8_t SortMethod;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
struct FSortRemovalEvents
{
	struct TArray<struct FChaosRemovalEventData> RemovalEvents;  // 0x0 (0x0)
	uint8_t SortMethod;  // 0x10 (0x10)
	char pad_17[7];  // 0x11 (0x11)


}; 
 
 // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
struct FRaycastSingle
{
	struct FVector Start;  // 0x0 (0x0)
	struct FVector End;  // 0x18 (0x18)
	struct FHitResult OutHit;  // 0x30 (0x30)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)


}; 
 
 