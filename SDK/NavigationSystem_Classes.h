#pragma once 
#include <NavigationSystem_Structs.h>
 
 
 
// Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28(Inherited: 0x28)
struct UNavLinkCustomInterface : UInterface
{


}; 
 
 


// Class NavigationSystem.NavigationTestingActor
// Size: 0x3B0(Inherited: 0x290)
struct ANavigationTestingActor : AActor
{
	char pad_656[16];  // 0x290 (0x290)
	struct UCapsuleComponent* CapsuleComponent;  // 0x2A0 (0x2A0)
	struct UNavigationInvokerComponent* InvokerComponent;  // 0x2A8 (0x2A8)
	char bActAsNavigationInvoker : 1;  // 0x2B0 (0x2B0)
	char pad_688_1 : 7;  // 0x2B0 (0x2B0)
	char pad_689[8];  // 0x2B1 (0x2B1)
	struct FNavAgentProperties NavAgentProps;  // 0x2B8 (0x2B8)
	struct FVector QueryingExtent;  // 0x2F0 (0x2F0)
	struct ANavigationData* MyNavData;  // 0x308 (0x308)
	struct FVector ProjectedLocation;  // 0x310 (0x310)
	char bProjectedLocationValid : 1;  // 0x328 (0x328)
	char bSearchStart : 1;  // 0x328 (0x328)
	char pad_808_1 : 6;  // 0x328 (0x328)
	char pad_809[4];  // 0x329 (0x329)
	float CostLimitFactor;  // 0x32C (0x32C)
	float MinimumCostLimit;  // 0x330 (0x330)
	char bBacktracking : 1;  // 0x334 (0x334)
	char bUseHierarchicalPathfinding : 1;  // 0x334 (0x334)
	char bGatherDetailedInfo : 1;  // 0x334 (0x334)
	char bDrawDistanceToWall : 1;  // 0x334 (0x334)
	char bShowNodePool : 1;  // 0x334 (0x334)
	char bShowBestPath : 1;  // 0x334 (0x334)
	char bShowDiffWithPreviousStep : 1;  // 0x334 (0x334)
	char bShouldBeVisibleInGame : 1;  // 0x334 (0x334)
	char pad_821[3];  // 0x335 (0x335)
	enum class ENavCostDisplay CostDisplayMode;  // 0x338 (0x338)
	char pad_825[7];  // 0x339 (0x339)
	struct FVector2D TextCanvasOffset;  // 0x340 (0x340)
	char bPathExist : 1;  // 0x350 (0x350)
	char bPathIsPartial : 1;  // 0x350 (0x350)
	char bPathSearchOutOfNodes : 1;  // 0x350 (0x350)
	char pad_848_1 : 5;  // 0x350 (0x350)
	char pad_849[4];  // 0x351 (0x351)
	float PathfindingTime;  // 0x354 (0x354)
	float PathCost;  // 0x358 (0x358)
	int32_t PathfindingSteps;  // 0x35C (0x35C)
	struct ANavigationTestingActor* OtherActor;  // 0x360 (0x360)
	UNavigationQueryFilter* FilterClass;  // 0x368 (0x368)
	int32_t ShowStepIndex;  // 0x370 (0x370)
	float OffsetFromCornersDistance;  // 0x374 (0x374)
	char pad_888[56];  // 0x378 (0x378)


}; 
 
 


// Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x2D0(Inherited: 0x2A0)
struct UNavigationGraphNodeComponent : USceneComponent
{
	struct FNavGraphNode Node;  // 0x2A0 (0x2A0)
	struct UNavigationGraphNodeComponent* NextNodeComponent;  // 0x2B8 (0x2B8)
	struct UNavigationGraphNodeComponent* PrevNodeComponent;  // 0x2C0 (0x2C0)
	char pad_712[8];  // 0x2C8 (0x2C8)


}; 
 
 


// Class NavigationSystem.CrowdManagerBase
// Size: 0x28(Inherited: 0x28)
struct UCrowdManagerBase : UObject
{


}; 
 
 


// Class NavigationSystem.NavigationGraphNode
// Size: 0x290(Inherited: 0x290)
struct ANavigationGraphNode : AActor
{


}; 
 
 


// Class NavigationSystem.NavigationPathGenerator
// Size: 0x28(Inherited: 0x28)
struct UNavigationPathGenerator : UInterface
{


}; 
 
 


// Class NavigationSystem.NavLinkHostInterface
// Size: 0x28(Inherited: 0x28)
struct UNavLinkHostInterface : UInterface
{


}; 
 
 


// Class NavigationSystem.NavigationGraph
// Size: 0x4B8(Inherited: 0x4B8)
struct ANavigationGraph : ANavigationData
{


}; 
 
 


// Class NavigationSystem.NavLinkTrivial
// Size: 0x50(Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition
{


}; 
 
 


// Class NavigationSystem.NavSystemConfigOverride
// Size: 0x2A0(Inherited: 0x290)
struct ANavSystemConfigOverride : AActor
{
	struct UNavigationSystemConfig* NavigationSystemConfig;  // 0x290 (0x290)
	uint8_t OverridePolicy;  // 0x298 (0x298)
	char bLoadOnClient : 1;  // 0x299 (0x299)
	char pad_665_1 : 7;  // 0x299 (0x299)
	char pad_666[7];  // 0x29A (0x29A)


}; 
 
 


// Class NavigationSystem.NavNodeInterface
// Size: 0x28(Inherited: 0x28)
struct UNavNodeInterface : UInterface
{


}; 
 
 


// Class NavigationSystem.NavigationData
// Size: 0x4B8(Inherited: 0x290)
struct ANavigationData : AActor
{
	char pad_656[8];  // 0x290 (0x290)
	struct UPrimitiveComponent* RenderingComp;  // 0x298 (0x298)
	struct FNavDataConfig NavDataConfig;  // 0x2A0 (0x2A0)
	char bEnableDrawing : 1;  // 0x338 (0x338)
	char bForceRebuildOnLoad : 1;  // 0x338 (0x338)
	char bAutoDestroyWhenNoNavigation : 1;  // 0x338 (0x338)
	char bCanBeMainNavData : 1;  // 0x338 (0x338)
	char bCanSpawnOnRebuild : 1;  // 0x338 (0x338)
	char bRebuildAtRuntime : 1;  // 0x338 (0x338)
	char pad_824_1 : 2;  // 0x338 (0x338)
	char pad_825[4];  // 0x339 (0x339)
	uint8_t RuntimeGeneration;  // 0x33C (0x33C)
	char pad_829[3];  // 0x33D (0x33D)
	float ObservedPathsTickInterval;  // 0x340 (0x340)
	uint32_t DataVersion;  // 0x344 (0x344)
	char pad_840[264];  // 0x348 (0x348)
	struct TArray<struct FSupportedAreaData> SupportedAreas;  // 0x450 (0x450)
	char pad_1120[88];  // 0x460 (0x460)


}; 
 
 


// Class NavigationSystem.AbstractNavData
// Size: 0x4B8(Inherited: 0x4B8)
struct AAbstractNavData : ANavigationData
{


}; 
 
 


// Class NavigationSystem.NavArea
// Size: 0x48(Inherited: 0x30)
struct UNavArea : UNavAreaBase
{
	float DefaultCost;  // 0x30 (0x30)
	float FixedAreaEnteringCost;  // 0x34 (0x34)
	struct FColor DrawColor;  // 0x38 (0x38)
	struct FNavAgentSelector SupportedAgents;  // 0x3C (0x3C)
	char bSupportsAgent0 : 1;  // 0x40 (0x40)
	char bSupportsAgent1 : 1;  // 0x40 (0x40)
	char bSupportsAgent2 : 1;  // 0x40 (0x40)
	char bSupportsAgent3 : 1;  // 0x40 (0x40)
	char bSupportsAgent4 : 1;  // 0x40 (0x40)
	char bSupportsAgent5 : 1;  // 0x40 (0x40)
	char bSupportsAgent6 : 1;  // 0x40 (0x40)
	char bSupportsAgent7 : 1;  // 0x40 (0x40)
	char bSupportsAgent8 : 1;  // 0x41 (0x41)
	char bSupportsAgent9 : 1;  // 0x41 (0x41)
	char bSupportsAgent10 : 1;  // 0x41 (0x41)
	char bSupportsAgent11 : 1;  // 0x41 (0x41)
	char bSupportsAgent12 : 1;  // 0x41 (0x41)
	char bSupportsAgent13 : 1;  // 0x41 (0x41)
	char bSupportsAgent14 : 1;  // 0x41 (0x41)
	char bSupportsAgent15 : 1;  // 0x41 (0x41)
	char pad_66[6];  // 0x42 (0x42)


}; 
 
 


// Class NavigationSystem.NavAreaMeta
// Size: 0x48(Inherited: 0x48)
struct UNavAreaMeta : UNavArea
{


}; 
 
 


// Class NavigationSystem.NavRelevantComponent
// Size: 0xF0(Inherited: 0xA0)
struct UNavRelevantComponent : UActorComponent
{
	char pad_160[64];  // 0xA0 (0xA0)
	char bAttachToOwnersRoot : 1;  // 0xE0 (0xE0)
	char pad_224_1 : 7;  // 0xE0 (0xE0)
	char pad_225[8];  // 0xE1 (0xE1)
	struct UObject* CachedNavParent;  // 0xE8 (0xE8)


	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
}; 
 
 


// Class NavigationSystem.NavigationQueryFilter
// Size: 0x48(Inherited: 0x28)
struct UNavigationQueryFilter : UObject
{
	struct TArray<struct FNavigationFilterArea> Areas;  // 0x28 (0x28)
	struct FNavigationFilterFlags IncludeFlags;  // 0x38 (0x38)
	struct FNavigationFilterFlags ExcludeFlags;  // 0x3C (0x3C)
	char pad_64[8];  // 0x40 (0x40)


}; 
 
 


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xC8(Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta
{
	UNavArea* Agent0Area;  // 0x48 (0x48)
	UNavArea* Agent1Area;  // 0x50 (0x50)
	UNavArea* Agent2Area;  // 0x58 (0x58)
	UNavArea* Agent3Area;  // 0x60 (0x60)
	UNavArea* Agent4Area;  // 0x68 (0x68)
	UNavArea* Agent5Area;  // 0x70 (0x70)
	UNavArea* Agent6Area;  // 0x78 (0x78)
	UNavArea* Agent7Area;  // 0x80 (0x80)
	UNavArea* Agent8Area;  // 0x88 (0x88)
	UNavArea* Agent9Area;  // 0x90 (0x90)
	UNavArea* Agent10Area;  // 0x98 (0x98)
	UNavArea* Agent11Area;  // 0xA0 (0xA0)
	UNavArea* Agent12Area;  // 0xA8 (0xA8)
	UNavArea* Agent13Area;  // 0xB0 (0xB0)
	UNavArea* Agent14Area;  // 0xB8 (0xB8)
	UNavArea* Agent15Area;  // 0xC0 (0xC0)


}; 
 
 


// Class NavigationSystem.NavArea_Default
// Size: 0x48(Inherited: 0x48)
struct UNavArea_Default : UNavArea
{


}; 
 
 


// Class NavigationSystem.NavArea_LowHeight
// Size: 0x48(Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea
{


}; 
 
 


// Class NavigationSystem.NavArea_Null
// Size: 0x48(Inherited: 0x48)
struct UNavArea_Null : UNavArea
{


}; 
 
 


// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48(Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter
{


}; 
 
 


// Class NavigationSystem.NavArea_Obstacle
// Size: 0x48(Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea
{


}; 
 
 


// Class NavigationSystem.NavCollision
// Size: 0xD0(Inherited: 0x70)
struct UNavCollision : UNavCollisionBase
{
	char pad_112[16];  // 0x70 (0x70)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision;  // 0x80 (0x80)
	struct TArray<struct FNavCollisionBox> BoxCollision;  // 0x90 (0x90)
	UNavArea* AreaClass;  // 0xA0 (0xA0)
	char bGatherConvexGeometry : 1;  // 0xA8 (0xA8)
	char bCreateOnClient : 1;  // 0xA8 (0xA8)
	char pad_168_1 : 6;  // 0xA8 (0xA8)
	char pad_169[40];  // 0xA9 (0xA9)


}; 
 
 


// Class NavigationSystem.NavigationInvokerComponent
// Size: 0xA8(Inherited: 0xA0)
struct UNavigationInvokerComponent : UActorComponent
{
	float TileGenerationRadius;  // 0xA0 (0xA0)
	float TileRemovalRadius;  // 0xA4 (0xA4)


}; 
 
 


// Class NavigationSystem.NavigationPath
// Size: 0x88(Inherited: 0x28)
struct UNavigationPath : UObject
{
	struct FMulticastInlineDelegate PathUpdatedNotifier;  // 0x28 (0x28)
	struct TArray<struct FVector> PathPoints;  // 0x38 (0x38)
	enum class ENavigationOptionFlag RecalculateOnInvalidation;  // 0x48 (0x48)
	char pad_73[63];  // 0x49 (0x49)


	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing
}; 
 
 


// Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x60(Inherited: 0x58)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig
{
	char bStrictlyStatic : 1;  // 0x58 (0x58)
	char bCreateOnClient : 1;  // 0x58 (0x58)
	char bAutoSpawnMissingNavData : 1;  // 0x58 (0x58)
	char bSpawnNavDataInNavBoundsLevel : 1;  // 0x58 (0x58)
	char pad_88_1 : 4;  // 0x58 (0x58)
	char pad_89[8];  // 0x59 (0x59)


}; 
 
 


// Class NavigationSystem.NavigationSystemV1
// Size: [x1530(Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase
{
	struct ANavigationData* MainNavData;  // 0x28 (0x28)
	struct ANavigationData* AbstractNavData;  // 0x30 (0x30)
	struct FName DefaultAgentName;  // 0x38 (0x38)
	struct TSoftClassPtr<UObject> CrowdManagerClass;  // 0x40 (0x40)
	char bAutoCreateNavigationData : 1;  // 0x70 (0x70)
	char bSpawnNavDataInNavBoundsLevel : 1;  // 0x70 (0x70)
	char bAllowClientSideNavigation : 1;  // 0x70 (0x70)
	char bShouldDiscardSubLevelNavData : 1;  // 0x70 (0x70)
	char bTickWhilePaused : 1;  // 0x70 (0x70)
	char bSupportRebuilding : 1;  // 0x70 (0x70)
	char bInitialBuildingLocked : 1;  // 0x70 (0x70)
	char pad_112_1 : 1;  // 0x70 (0x70)
	char bSkipAgentHeightCheckWhenPickingNavData : 1;  // 0x71 (0x71)
	char pad_113_1 : 7;  // 0x71 (0x71)
	char pad_114[3];  // 0x72 (0x72)
	int32_t GeometryExportVertexCountWarningThreshold;  // 0x74 (0x74)
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1;  // 0x78 (0x78)
	char pad_120_1 : 7;  // 0x78 (0x78)
	char pad_121[4];  // 0x79 (0x79)
	float ActiveTilesUpdateInterval;  // 0x7C (0x7C)
	uint8_t DataGatheringMode;  // 0x80 (0x80)
	char pad_129[3];  // 0x81 (0x81)
	float DirtyAreaWarningSizeThreshold;  // 0x84 (0x84)
	float GatheringNavModifiersWarningLimitTime;  // 0x88 (0x88)
	char pad_140[4];  // 0x8C (0x8C)
	struct TArray<struct FNavDataConfig> SupportedAgents;  // 0x90 (0x90)
	struct FNavAgentSelector SupportedAgentsMask;  // 0xA0 (0xA0)
	char pad_164[4];  // 0xA4 (0xA4)
	struct FBox BuildBounds;  // 0xA8 (0xA8)
	struct TArray<struct ANavigationData*> NavDataSet;  // 0xE0 (0xE0)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue;  // 0xF0 (0xF0)
	char pad_256[16];  // 0x100 (0x100)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent;  // 0x110 (0x110)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate;  // 0x120 (0x120)
	char pad_304[220];  // 0x130 (0x130)
	uint8_t OperationMode;  // 0x20C (0x20C)
	char pad_525[4899];  // 0x20D (0x20D)


	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	void SetGeometryGatheringMode(uint8_t NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, UNavArea* OldArea, UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
}; 
 
 


// Class NavigationSystem.RecastNavMesh
// Size: 0x598(Inherited: 0x4B8)
struct ARecastNavMesh : ANavigationData
{
	char bDrawTriangleEdges : 1;  // 0x4B8 (0x4B8)
	char bDrawPolyEdges : 1;  // 0x4B8 (0x4B8)
	char bDrawFilledPolys : 1;  // 0x4B8 (0x4B8)
	char bDrawNavMeshEdges : 1;  // 0x4B8 (0x4B8)
	char bDrawTileBounds : 1;  // 0x4B8 (0x4B8)
	char bDrawPathCollidingGeometry : 1;  // 0x4B8 (0x4B8)
	char bDrawTileLabels : 1;  // 0x4B8 (0x4B8)
	char bDrawPolygonLabels : 1;  // 0x4B8 (0x4B8)
	char bDrawDefaultPolygonCost : 1;  // 0x4B9 (0x4B9)
	char bDrawPolygonFlags : 1;  // 0x4B9 (0x4B9)
	char bDrawLabelsOnPathNodes : 1;  // 0x4B9 (0x4B9)
	char bDrawNavLinks : 1;  // 0x4B9 (0x4B9)
	char bDrawFailedNavLinks : 1;  // 0x4B9 (0x4B9)
	char bDrawClusters : 1;  // 0x4B9 (0x4B9)
	char bDrawOctree : 1;  // 0x4B9 (0x4B9)
	char bDrawOctreeDetails : 1;  // 0x4B9 (0x4B9)
	char bDrawMarkedForbiddenPolys : 1;  // 0x4BA (0x4BA)
	char bDistinctlyDrawTilesBeingBuilt : 1;  // 0x4BA (0x4BA)
	char pad_1210_1 : 6;  // 0x4BA (0x4BA)
	char pad_1211[2];  // 0x4BB (0x4BB)
	float DrawOffset;  // 0x4BC (0x4BC)
	struct FRecastNavMeshTileGenerationDebug TileGenerationDebug;  // 0x4C0 (0x4C0)
	char bFixedTilePoolSize : 1;  // 0x4D4 (0x4D4)
	char pad_1236_1 : 7;  // 0x4D4 (0x4D4)
	char pad_1237[4];  // 0x4D5 (0x4D5)
	int32_t TilePoolSize;  // 0x4D8 (0x4D8)
	float TileSizeUU;  // 0x4DC (0x4DC)
	float CellSize;  // 0x4E0 (0x4E0)
	float CellHeight;  // 0x4E4 (0x4E4)
	float AgentRadius;  // 0x4E8 (0x4E8)
	float AgentHeight;  // 0x4EC (0x4EC)
	float AgentMaxSlope;  // 0x4F0 (0x4F0)
	float AgentMaxStepHeight;  // 0x4F4 (0x4F4)
	float MinRegionArea;  // 0x4F8 (0x4F8)
	float MergeRegionSize;  // 0x4FC (0x4FC)
	float MaxSimplificationError;  // 0x500 (0x500)
	int32_t MaxSimultaneousTileGenerationJobsCount;  // 0x504 (0x504)
	int32_t TileNumberHardLimit;  // 0x508 (0x508)
	int32_t PolyRefTileBits;  // 0x50C (0x50C)
	int32_t PolyRefNavPolyBits;  // 0x510 (0x510)
	int32_t PolyRefSaltBits;  // 0x514 (0x514)
	struct FVector NavMeshOriginOffset;  // 0x518 (0x518)
	float DefaultDrawDistance;  // 0x530 (0x530)
	float DefaultMaxSearchNodes;  // 0x534 (0x534)
	float DefaultMaxHierarchicalSearchNodes;  // 0x538 (0x538)
	enum class ERecastPartitioning RegionPartitioning;  // 0x53C (0x53C)
	enum class ERecastPartitioning LayerPartitioning;  // 0x53D (0x53D)
	char pad_1342[2];  // 0x53E (0x53E)
	int32_t RegionChunkSplits;  // 0x540 (0x540)
	int32_t LayerChunkSplits;  // 0x544 (0x544)
	char bSortNavigationAreasByCost : 1;  // 0x548 (0x548)
	char bIsWorldPartitioned : 1;  // 0x548 (0x548)
	char bPerformVoxelFiltering : 1;  // 0x548 (0x548)
	char bMarkLowHeightAreas : 1;  // 0x548 (0x548)
	char bUseExtraTopCellWhenMarkingAreas : 1;  // 0x548 (0x548)
	char bFilterLowSpanSequences : 1;  // 0x548 (0x548)
	char bFilterLowSpanFromTileCache : 1;  // 0x548 (0x548)
	char bDoFullyAsyncNavDataGathering : 1;  // 0x548 (0x548)
	char bUseBetterOffsetsFromCorners : 1;  // 0x549 (0x549)
	char bStoreEmptyTileLayers : 1;  // 0x549 (0x549)
	char bUseVirtualFilters : 1;  // 0x549 (0x549)
	char bUseVirtualGeometryFilteringAndDirtying : 1;  // 0x549 (0x549)
	char bAllowNavLinkAsPathEnd : 1;  // 0x549 (0x549)
	char pad_1353_1 : 3;  // 0x549 (0x549)
	char pad_1354[3];  // 0x54A (0x54A)
	int32_t TimeSliceFilterLedgeSpansMaxYProcess;  // 0x54C (0x54C)
	double TimeSliceLongDurationDebug;  // 0x550 (0x550)
	char bUseVoxelCache : 1;  // 0x558 (0x558)
	char pad_1368_1 : 7;  // 0x558 (0x558)
	char pad_1369[4];  // 0x559 (0x559)
	float TileSetUpdateInterval;  // 0x55C (0x55C)
	float HeuristicScale;  // 0x560 (0x560)
	float VerticalDeviationFromGroundCompensation;  // 0x564 (0x564)
	char pad_1384[48];  // 0x568 (0x568)


	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, UNavArea* OldArea, UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
}; 
 
 


// Class NavigationSystem.NavLinkComponent
// Size: 0x550(Inherited: 0x540)
struct UNavLinkComponent : UPrimitiveComponent
{
	struct TArray<struct FNavigationLink> Links;  // 0x540 (0x540)


}; 
 
 


// Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1D0(Inherited: 0xF0)
struct UNavLinkCustomComponent : UNavRelevantComponent
{
	char pad_240[8];  // 0xF0 (0xF0)
	uint32_t NavLinkUserId;  // 0xF8 (0xF8)
	char pad_252[4];  // 0xFC (0xFC)
	UNavArea* EnabledAreaClass;  // 0x100 (0x100)
	UNavArea* DisabledAreaClass;  // 0x108 (0x108)
	struct FNavAgentSelector SupportedAgents;  // 0x110 (0x110)
	char pad_276[4];  // 0x114 (0x114)
	struct FVector LinkRelativeStart;  // 0x118 (0x118)
	struct FVector LinkRelativeEnd;  // 0x130 (0x130)
	enum class ENavLinkDirection LinkDirection;  // 0x148 (0x148)
	char pad_329[3];  // 0x149 (0x149)
	char bLinkEnabled : 1;  // 0x14C (0x14C)
	char bNotifyWhenEnabled : 1;  // 0x14C (0x14C)
	char bNotifyWhenDisabled : 1;  // 0x14C (0x14C)
	char bCreateBoxObstacle : 1;  // 0x14C (0x14C)
	char pad_332_1 : 4;  // 0x14C (0x14C)
	char pad_333[4];  // 0x14D (0x14D)
	struct FVector ObstacleOffset;  // 0x150 (0x150)
	struct FVector ObstacleExtent;  // 0x168 (0x168)
	UNavArea* ObstacleAreaClass;  // 0x180 (0x180)
	float BroadcastRadius;  // 0x188 (0x188)
	float BroadcastInterval;  // 0x18C (0x18C)
	enum class ECollisionChannel BroadcastChannel;  // 0x190 (0x190)
	char pad_401[63];  // 0x191 (0x191)


}; 
 
 


// Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x540(Inherited: 0x540)
struct UNavLinkRenderingComponent : UPrimitiveComponent
{


}; 
 
 


// Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x2D0(Inherited: 0x2C8)
struct ANavMeshBoundsVolume : AVolume
{
	struct FNavAgentSelector SupportedAgents;  // 0x2C8 (0x2C8)
	char pad_716[4];  // 0x2CC (0x2CC)


}; 
 
 


// Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x5A0(Inherited: 0x590)
struct UNavMeshRenderingComponent : UDebugDrawComponent
{
	char pad_1424[16];  // 0x590 (0x590)


}; 
 
 


// Class NavigationSystem.NavTestRenderingComponent
// Size: 0x590(Inherited: 0x590)
struct UNavTestRenderingComponent : UDebugDrawComponent
{


}; 
 
 


// Class NavigationSystem.NavModifierComponent
// Size: 0x190(Inherited: 0xF0)
struct UNavModifierComponent : UNavRelevantComponent
{
	UNavArea* AreaClass;  // 0xF0 (0xF0)
	struct FVector FailsafeExtent;  // 0xF8 (0xF8)
	char bIncludeAgentHeight : 1;  // 0x110 (0x110)
	char pad_272_1 : 7;  // 0x110 (0x110)
	char pad_273[128];  // 0x111 (0x111)


	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass
}; 
 
 


// Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40(Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk
{
	char pad_48[16];  // 0x30 (0x30)


}; 
 
 


// Class NavigationSystem.NavModifierVolume
// Size: 0x2E0(Inherited: 0x2C8)
struct ANavModifierVolume : AVolume
{
	char pad_712[8];  // 0x2C8 (0x2C8)
	UNavArea* AreaClass;  // 0x2D0 (0x2D0)
	char pad_728_1 : 7;  // 0x2D8 (0x2D8)
	bool bMaskFillCollisionUnderneathForNavmesh : 1;  // 0x2D8 (0x2D8)
	char pad_729[7];  // 0x2D9 (0x2D9)


	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass
}; 
 
 


