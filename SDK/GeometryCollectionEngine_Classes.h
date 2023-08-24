#pragma once 
#include <GeometryCollectionEngine_Structs.h>
 
 
 
// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size: 0xB10(Inherited: 0x570)
struct UGeometryCollectionComponent : UMeshComponent
{
	char pad_1392[8];  // 0x570 (0x570)
	struct AChaosSolverActor* ChaosSolverActor;  // 0x578 (0x578)
	char pad_1408[232];  // 0x580 (0x580)
	struct UGeometryCollection* RestCollection;  // 0x668 (0x668)
	struct TArray<struct AFieldSystemActor*> InitializationFields;  // 0x670 (0x670)
	char pad_1664_1 : 7;  // 0x680 (0x680)
	bool Simulating : 1;  // 0x680 (0x680)
	char pad_1665[7];  // 0x681 (0x681)
	uint8_t ObjectType;  // 0x688 (0x688)
	char pad_1673_1 : 7;  // 0x689 (0x689)
	bool bForceMotionBlur : 1;  // 0x689 (0x689)
	char pad_1674_1 : 7;  // 0x68A (0x68A)
	bool EnableClustering : 1;  // 0x68A (0x68A)
	char pad_1675[1];  // 0x68B (0x68B)
	int32_t ClusterGroupIndex;  // 0x68C (0x68C)
	int32_t MaxClusterLevel;  // 0x690 (0x690)
	char pad_1684[4];  // 0x694 (0x694)
	struct TArray<float> DamageThreshold;  // 0x698 (0x698)
	char pad_1704_1 : 7;  // 0x6A8 (0x6A8)
	bool bUseSizeSpecificDamageThreshold : 1;  // 0x6A8 (0x6A8)
	char pad_1705[3];  // 0x6A9 (0x6A9)
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;  // 0x6AC (0x6AC)
	char pad_1720_1 : 7;  // 0x6B8 (0x6B8)
	bool bAllowRemovalOnSleep : 1;  // 0x6B8 (0x6B8)
	char pad_1721_1 : 7;  // 0x6B9 (0x6B9)
	bool bAllowRemovalOnBreak : 1;  // 0x6B9 (0x6B9)
	uint8_t ClusterConnectionType;  // 0x6BA (0x6BA)
	char pad_1723[1];  // 0x6BB (0x6BB)
	int32_t CollisionGroup;  // 0x6BC (0x6BC)
	float CollisionSampleFraction;  // 0x6C0 (0x6C0)
	float LinearEtherDrag;  // 0x6C4 (0x6C4)
	float AngularEtherDrag;  // 0x6C8 (0x6C8)
	char pad_1740[4];  // 0x6CC (0x6CC)
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // 0x6D0 (0x6D0)
	uint8_t InitialVelocityType;  // 0x6D8 (0x6D8)
	char pad_1753[7];  // 0x6D9 (0x6D9)
	struct FVector InitialLinearVelocity;  // 0x6E0 (0x6E0)
	struct FVector InitialAngularVelocity;  // 0x6F8 (0x6F8)
	struct UPhysicalMaterial* PhysicalMaterialOverride;  // 0x710 (0x710)
	struct FGeomComponentCacheParameters CacheParameters;  // 0x718 (0x718)
	struct TArray<struct FTransform> RestTransforms;  // 0x768 (0x768)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange;  // 0x778 (0x778)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange;  // 0x788 (0x788)
	char pad_1944[24];  // 0x798 (0x798)
	struct FMulticastInlineDelegate OnChaosBreakEvent;  // 0x7B0 (0x7B0)
	struct FMulticastInlineDelegate OnChaosRemovalEvent;  // 0x7C0 (0x7C0)
	struct FMulticastInlineDelegate OnChaosCrumblingEvent;  // 0x7D0 (0x7D0)
	float DesiredCacheTime;  // 0x7E0 (0x7E0)
	char pad_2020_1 : 7;  // 0x7E4 (0x7E4)
	bool CachePlayback : 1;  // 0x7E4 (0x7E4)
	char pad_2021[3];  // 0x7E5 (0x7E5)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // 0x7E8 (0x7E8)
	char pad_2040_1 : 7;  // 0x7F8 (0x7F8)
	bool bNotifyBreaks : 1;  // 0x7F8 (0x7F8)
	char pad_2041_1 : 7;  // 0x7F9 (0x7F9)
	bool bNotifyCollisions : 1;  // 0x7F9 (0x7F9)
	char pad_2042_1 : 7;  // 0x7FA (0x7FA)
	bool bNotifyTrailing : 1;  // 0x7FA (0x7FA)
	char pad_2043_1 : 7;  // 0x7FB (0x7FB)
	bool bNotifyRemovals : 1;  // 0x7FB (0x7FB)
	char pad_2044_1 : 7;  // 0x7FC (0x7FC)
	bool bNotifyCrumblings : 1;  // 0x7FC (0x7FC)
	char pad_2045_1 : 7;  // 0x7FD (0x7FD)
	bool bCrumblingEventIncludesChildren : 1;  // 0x7FD (0x7FD)
	char pad_2046_1 : 7;  // 0x7FE (0x7FE)
	bool bStoreVelocities : 1;  // 0x7FE (0x7FE)
	char pad_2047_1 : 7;  // 0x7FF (0x7FF)
	bool bShowBoneColors : 1;  // 0x7FF (0x7FF)
	struct AGeometryCollectionISMPoolActor* ISMPool;  // 0x800 (0x800)
	char pad_2056[4];  // 0x808 (0x808)
	char pad_2060_1 : 7;  // 0x80C (0x80C)
	bool bEnableReplication : 1;  // 0x80C (0x80C)
	char pad_2061_1 : 7;  // 0x80D (0x80D)
	bool bEnableAbandonAfterLevel : 1;  // 0x80D (0x80D)
	char pad_2062[2];  // 0x80E (0x80E)
	int32_t ReplicationAbandonClusterLevel;  // 0x810 (0x810)
	int32_t ReplicationAbandonAfterLevel;  // 0x814 (0x814)
	struct FGeometryCollectionRepData RepData;  // 0x818 (0x818)
	char pad_2112[648];  // 0x840 (0x840)
	struct UBodySetup* DummyBodySetup;  // 0xAC8 (0xAC8)
	char pad_2768[8];  // 0xAD0 (0xAD0)
	struct TArray<struct UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;  // 0xAD8 (0xAD8)
	char pad_2792[40];  // 0xAE8 (0xAE8)


	void SetRestCollection(struct UGeometryCollection* RestCollectionIn); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	void SetNotifyRemovals(bool bNewNotifyRemovals); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	void SetNotifyCrumblings(bool bNewNotifyCrumblings); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	void RemoveAllAnchors(); // Function GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	void GetMassAndExtents(int32_t ItemIndex, float& OutMass, struct FBox& OutExtents); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	int32_t GetInitialLevel(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	void CrumbleCluster(int32_t ItemIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	void CrumbleActiveClusters(); // Function GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	void ApplyPhysicsField(bool Enabled, uint8_t Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	void ApplyLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	void ApplyInternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	void ApplyExternalStrain(int32_t ItemIndex, struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	void ApplyBreakingLinearVelocity(int32_t ItemIndex, struct FVector& LinearVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	void ApplyBreakingAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	void ApplyAngularVelocity(int32_t ItemIndex, struct FVector& AngularVelocity); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size: 0x350(Inherited: 0x290)
struct AGeometryCollectionDebugDrawActor : AActor
{
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;  // 0x298 (0x298)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	bool bDebugDrawWholeCollection : 1;  // 0x2B0 (0x2B0)
	char pad_689_1 : 7;  // 0x2B1 (0x2B1)
	bool bDebugDrawHierarchy : 1;  // 0x2B1 (0x2B1)
	char pad_690_1 : 7;  // 0x2B2 (0x2B2)
	bool bDebugDrawClustering : 1;  // 0x2B2 (0x2B2)
	uint8_t HideGeometry;  // 0x2B3 (0x2B3)
	char pad_692_1 : 7;  // 0x2B4 (0x2B4)
	bool bShowRigidBodyId : 1;  // 0x2B4 (0x2B4)
	char pad_693_1 : 7;  // 0x2B5 (0x2B5)
	bool bShowRigidBodyCollision : 1;  // 0x2B5 (0x2B5)
	char pad_694_1 : 7;  // 0x2B6 (0x2B6)
	bool bCollisionAtOrigin : 1;  // 0x2B6 (0x2B6)
	char pad_695_1 : 7;  // 0x2B7 (0x2B7)
	bool bShowRigidBodyTransform : 1;  // 0x2B7 (0x2B7)
	char pad_696_1 : 7;  // 0x2B8 (0x2B8)
	bool bShowRigidBodyInertia : 1;  // 0x2B8 (0x2B8)
	char pad_697_1 : 7;  // 0x2B9 (0x2B9)
	bool bShowRigidBodyVelocity : 1;  // 0x2B9 (0x2B9)
	char pad_698_1 : 7;  // 0x2BA (0x2BA)
	bool bShowRigidBodyForce : 1;  // 0x2BA (0x2BA)
	char pad_699_1 : 7;  // 0x2BB (0x2BB)
	bool bShowRigidBodyInfos : 1;  // 0x2BB (0x2BB)
	char pad_700_1 : 7;  // [x2BC ([x2BC)
	bool bShowTransformIndex : 1;  // 0x2BC (0x2BC)
	char pad_701_1 : 7;  // 0x2BD (0x2BD)
	bool bShowTransform : 1;  // 0x2BD (0x2BD)
	char pad_702_1 : 7;  // 0x2BE (0x2BE)
	bool bShowParent : 1;  // 0x2BE (0x2BE)
	char pad_703_1 : 7;  // 0x2BF (0x2BF)
	bool bShowLevel : 1;  // 0x2BF (0x2BF)
	char pad_704_1 : 7;  // 0x2C0 (0x2C0)
	bool bShowConnectivityEdges : 1;  // 0x2C0 (0x2C0)
	char pad_705_1 : 7;  // 0x2C1 (0x2C1)
	bool bShowGeometryIndex : 1;  // 0x2C1 (0x2C1)
	char pad_706_1 : 7;  // 0x2C2 (0x2C2)
	bool bShowGeometryTransform : 1;  // 0x2C2 (0x2C2)
	char pad_707_1 : 7;  // 0x2C3 (0x2C3)
	bool bShowBoundingBox : 1;  // 0x2C3 (0x2C3)
	char pad_708_1 : 7;  // 0x2C4 (0x2C4)
	bool bShowFaces : 1;  // 0x2C4 (0x2C4)
	char pad_709_1 : 7;  // 0x2C5 (0x2C5)
	bool bShowFaceIndices : 1;  // 0x2C5 (0x2C5)
	char pad_710_1 : 7;  // 0x2C6 (0x2C6)
	bool bShowFaceNormals : 1;  // 0x2C6 (0x2C6)
	char pad_711_1 : 7;  // 0x2C7 (0x2C7)
	bool bShowSingleFace : 1;  // 0x2C7 (0x2C7)
	int32_t SingleFaceIndex;  // 0x2C8 (0x2C8)
	char pad_716_1 : 7;  // 0x2CC (0x2CC)
	bool bShowVertices : 1;  // 0x2CC (0x2CC)
	char pad_717_1 : 7;  // 0x2CD (0x2CD)
	bool bShowVertexIndices : 1;  // 0x2CD (0x2CD)
	char pad_718_1 : 7;  // 0x2CE (0x2CE)
	bool bShowVertexNormals : 1;  // 0x2CE (0x2CE)
	char pad_719_1 : 7;  // 0x2CF (0x2CF)
	bool bUseActiveVisualization : 1;  // 0x2CF (0x2CF)
	float PointThickness;  // 0x2D0 (0x2D0)
	float LineThickness;  // 0x2D4 (0x2D4)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bTextShadow : 1;  // 0x2D8 (0x2D8)
	char pad_729[3];  // 0x2D9 (0x2D9)
	float TextScale;  // 0x2DC (0x2DC)
	float NormalScale;  // 0x2E0 (0x2E0)
	float AxisScale;  // 0x2E4 (0x2E4)
	float ArrowScale;  // 0x2E8 (0x2E8)
	struct FColor RigidBodyIdColor;  // 0x2EC (0x2EC)
	float RigidBodyTransformScale;  // 0x2F0 (0x2F0)
	struct FColor RigidBodyCollisionColor;  // 0x2F4 (0x2F4)
	struct FColor RigidBodyInertiaColor;  // 0x2F8 (0x2F8)
	struct FColor RigidBodyVelocityColor;  // 0x2FC (0x2FC)
	struct FColor RigidBodyForceColor;  // 0x300 (0x300)
	struct FColor RigidBodyInfoColor;  // 0x304 (0x304)
	struct FColor TransformIndexColor;  // 0x308 (0x308)
	float TransformScale;  // 0x30C (0x30C)
	struct FColor LevelColor;  // 0x310 (0x310)
	struct FColor ParentColor;  // 0x314 (0x314)
	float ConnectivityEdgeThickness;  // 0x318 (0x318)
	struct FColor GeometryIndexColor;  // 0x31C (0x31C)
	float GeometryTransformScale;  // 0x320 (0x320)
	struct FColor BoundingBoxColor;  // 0x324 (0x324)
	struct FColor FaceColor;  // 0x328 (0x328)
	struct FColor FaceIndexColor;  // 0x32C (0x32C)
	struct FColor FaceNormalColor;  // 0x330 (0x330)
	struct FColor SingleFaceColor;  // 0x334 (0x334)
	struct FColor VertexColor;  // 0x338 (0x338)
	struct FColor VertexIndexColor;  // 0x33C (0x33C)
	struct FColor VertexNormalColor;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct UBillboardComponent* SpriteComponent;  // 0x348 (0x348)


}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionCache
// Size: 0x50(Inherited: 0x28)
struct UGeometryCollectionCache : UObject
{
	struct FRecordedTransformTrack RecordedData;  // 0x28 (0x28)
	struct UGeometryCollection* SupportedCollection;  // 0x38 (0x38)
	struct FGuid CompatibleCollectionState;  // 0x40 (0x40)


}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
// Size: 0x298(Inherited: 0x290)
struct AGeometryCollectionISMPoolActor : AActor
{
	struct UGeometryCollectionISMPoolComponent* ISMPoolComp;  // 0x290 (0x290)


}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
// Size: 0x360(Inherited: 0x2A0)
struct UGeometryCollectionISMPoolComponent : USceneComponent
{
	char pad_672[192];  // 0x2A0 (0x2A0)


}; 
 
 


// Class GeometryCollectionEngine.ChaosDestructionListener
// Size: 0x550(Inherited: 0x2A0)
struct UChaosDestructionListener : USceneComponent
{
	char bIsCollisionEventListeningEnabled : 1;  // 0x2A0 (0x2A0)
	char bIsBreakingEventListeningEnabled : 1;  // 0x2A0 (0x2A0)
	char bIsTrailingEventListeningEnabled : 1;  // 0x2A0 (0x2A0)
	char bIsRemovalEventListeningEnabled : 1;  // 0x2A0 (0x2A0)
	char pad_672_1 : 4;  // 0x2A0 (0x2A0)
	char pad_673[4];  // 0x2A1 (0x2A1)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings;  // 0x2A4 (0x2A4)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings;  // 0x2BC (0x2BC)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings;  // 0x2D4 (0x2D4)
	struct FChaosRemovalEventRequestSettings RemovalEventRequestSettings;  // 0x2EC (0x2EC)
	char pad_764[4];  // 0x2FC (0x2FC)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors;  // 0x300 (0x300)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors;  // 0x350 (0x350)
	struct FMulticastInlineDelegate OnCollisionEvents;  // 0x3A0 (0x3A0)
	struct FMulticastInlineDelegate OnBreakingEvents;  // 0x3B0 (0x3B0)
	struct FMulticastInlineDelegate OnTrailingEvents;  // 0x3C0 (0x3C0)
	struct FMulticastInlineDelegate OnRemovalEvents;  // 0x3D0 (0x3D0)
	char pad_992[368];  // 0x3E0 (0x3E0)


	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, uint8_t SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	void SortRemovalEvents(struct TArray<struct FChaosRemovalEventData>& RemovalEvents, uint8_t SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, uint8_t SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, uint8_t SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	void SetRemovalEventRequestSettings(struct FChaosRemovalEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	void SetRemovalEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionActor
// Size: 0x2A0(Inherited: 0x290)
struct AGeometryCollectionActor : AActor
{
	struct UGeometryCollectionComponent* GeometryCollectionComponent;  // 0x290 (0x290)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;  // 0x298 (0x298)


	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size: 0xB8(Inherited: 0xA0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent
{
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;  // 0xA0 (0xA0)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;  // 0xA8 (0xA8)
	char pad_176[8];  // 0xB0 (0xB0)


}; 
 
 


// Class GeometryCollectionEngine.GeometryCollection
// Size: 0x160(Inherited: 0x28)
struct UGeometryCollection : UObject
{
	char pad_40[8];  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool EnableClustering : 1;  // 0x30 (0x30)
	char pad_49[3];  // 0x31 (0x31)
	int32_t ClusterGroupIndex;  // 0x34 (0x34)
	int32_t MaxClusterLevel;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct TArray<float> DamageThreshold;  // 0x40 (0x40)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool bUseSizeSpecificDamageThreshold : 1;  // 0x50 (0x50)
	char pad_81_1 : 7;  // 0x51 (0x51)
	bool PerClusterOnlyDamageThreshold : 1;  // 0x51 (0x51)
	char pad_82[2];  // 0x52 (0x52)
	struct FGeometryCollectionDamagePropagationData DamagePropagationData;  // 0x54 (0x54)
	uint8_t ClusterConnectionType;  // 0x60 (0x60)
	char pad_97[3];  // 0x61 (0x61)
	float ConnectionGraphBoundsFilteringMargin;  // 0x64 (0x64)
	struct TArray<struct UMaterialInterface*> Materials;  // 0x68 (0x68)
	struct TArray<struct FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;  // 0x78 (0x78)
	char pad_136_1 : 7;  // 0x88 (0x88)
	bool bUseFullPrecisionUVs : 1;  // 0x88 (0x88)
	char pad_137[7];  // 0x89 (0x89)
	struct TArray<struct FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;  // 0x90 (0x90)
	struct FSoftObjectPath RootProxy;  // 0xA0 (0xA0)
	char pad_192_1 : 7;  // 0xC0 (0xC0)
	bool bStripOnCook : 1;  // 0xC0 (0xC0)
	char pad_193_1 : 7;  // 0xC1 (0xC1)
	bool EnableNanite : 1;  // 0xC1 (0xC1)
	char pad_194_1 : 7;  // 0xC2 (0xC2)
	bool bMassAsDensity : 1;  // 0xC2 (0xC2)
	char pad_195[1];  // 0xC3 (0xC3)
	float Mass;  // 0xC4 (0xC4)
	float MinimumMassClamp;  // 0xC8 (0xC8)
	char pad_204_1 : 7;  // 0xCC (0xCC)
	bool bImportCollisionFromSource : 1;  // 0xCC (0xCC)
	char pad_205_1 : 7;  // 0xCD (0xCD)
	bool bRemoveOnMaxSleep : 1;  // 0xCD (0xCD)
	char pad_206[2];  // 0xCE (0xCE)
	struct FVector2D MaximumSleepTime;  // 0xD0 (0xD0)
	struct FVector2D RemovalDuration;  // 0xE0 (0xE0)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool bSlowMovingAsSleeping : 1;  // 0xF0 (0xF0)
	char pad_241[3];  // 0xF1 (0xF1)
	float SlowMovingVelocityThreshold;  // 0xF4 (0xF4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;  // 0xF8 (0xF8)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool EnableRemovePiecesOnFracture : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials;  // 0x110 (0x110)
	struct UDataflow* Dataflow;  // 0x120 (0x120)
	struct FGuid PersistentGuid;  // 0x128 (0x128)
	struct FGuid StateGuid;  // 0x138 (0x138)
	int32_t BoneSelectedMaterialIndex;  // 0x148 (0x148)
	char pad_332[20];  // 0x14C (0x14C)


}; 
 
 


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size: 0x380(Inherited: 0x290)
struct AGeometryCollectionRenderLevelSetActor : AActor
{
	struct UVolumeTexture* TargetVolumeTexture;  // 0x290 (0x290)
	struct UMaterial* RayMarchMaterial;  // 0x298 (0x298)
	float SurfaceTolerance;  // 0x2A0 (0x2A0)
	float Isovalue;  // 0x2A4 (0x2A4)
	char pad_680_1 : 7;  // 0x2A8 (0x2A8)
	bool Enabled : 1;  // 0x2A8 (0x2A8)
	char pad_681_1 : 7;  // 0x2A9 (0x2A9)
	bool RenderVolumeBoundingBox : 1;  // 0x2A9 (0x2A9)
	char pad_682[214];  // 0x2AA (0x2AA)


}; 
 
 


