#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// ScriptStruct NavigationSystem.NavCollisionBox
struct FNavCollisionBox
{
	struct FVector Offset;  // 0x0 (0x0)
	struct FVector Extent;  // 0x18 (0x18)


}; 
 
 // DelegateFunction NavigationSystem.OnNavDataGenericEvent__DelegateSignature
struct FOnNavDataGenericEvent__DelegateSignature
{
	struct ANavigationData* NavData;  // 0x0 (0x0)


}; 
 
 // DelegateFunction NavigationSystem.OnNavigationPathUpdated__DelegateSignature
struct FOnNavigationPathUpdated__DelegateSignature
{
	struct UNavigationPath* AffectedPath;  // 0x0 (0x0)
	enum class ENavPathEvent PathEvent;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
struct FSetNavigationRelevancy
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bRelevant : 1;  // 0x0 (0x0)


}; 
 
 // ScriptStruct NavigationSystem.NavigationFilterArea
struct FNavigationFilterArea
{
	UNavArea* AreaClass;  // 0x0 (0x0)
	float TravelCostOverride;  // 0x8 (0x8)
	float EnteringCostOverride;  // 0xC (0xC)
	char bIsExcluded : 1;  // 0x10 (0x10)
	char bOverrideTravelCost : 1;  // 0x10 (0x10)
	char bOverrideEnteringCost : 1;  // 0x10 (0x10)
	char pad_16_1 : 5;  // 0x10 (0x10)
	char pad_17[8];  // 0x11 (0x11)


}; 
 
 // ScriptStruct NavigationSystem.NavigationFilterFlags
struct FNavigationFilterFlags
{
	char bNavFlag0 : 1;  // 0x0 (0x0)
	char bNavFlag1 : 1;  // 0x0 (0x0)
	char bNavFlag2 : 1;  // 0x0 (0x0)
	char bNavFlag3 : 1;  // 0x0 (0x0)
	char bNavFlag4 : 1;  // 0x0 (0x0)
	char bNavFlag5 : 1;  // 0x0 (0x0)
	char bNavFlag6 : 1;  // 0x0 (0x0)
	char bNavFlag7 : 1;  // 0x0 (0x0)
	char bNavFlag8 : 1;  // 0x1 (0x1)
	char bNavFlag9 : 1;  // 0x1 (0x1)
	char bNavFlag10 : 1;  // 0x1 (0x1)
	char bNavFlag11 : 1;  // 0x1 (0x1)
	char bNavFlag12 : 1;  // 0x1 (0x1)
	char bNavFlag13 : 1;  // 0x1 (0x1)
	char bNavFlag14 : 1;  // 0x1 (0x1)
	char bNavFlag15 : 1;  // 0x1 (0x1)
	char pad_2[2];  // 0x2 (0x2)


}; 
 
 // ScriptStruct NavigationSystem.NavCollisionCylinder
struct FNavCollisionCylinder
{
	struct FVector Offset;  // 0x0 (0x0)
	float Radius;  // 0x18 (0x18)
	float Height;  // 0x1C (0x1C)


}; 
 
 // ScriptStruct NavigationSystem.NavGraphEdge
struct FNavGraphEdge
{
	char pad_0[24];  // 0x0 (0x0)


}; 
 
 // ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
struct FRecastNavMeshGenerationProperties
{
	int32_t TilePoolSize;  // 0x0 (0x0)
	float TileSizeUU;  // 0x4 (0x4)
	float CellSize;  // 0x8 (0x8)
	float CellHeight;  // 0xC (0xC)
	float AgentRadius;  // 0x10 (0x10)
	float AgentHeight;  // 0x14 (0x14)
	float AgentMaxSlope;  // 0x18 (0x18)
	float AgentMaxStepHeight;  // 0x1C (0x1C)
	float MinRegionArea;  // 0x20 (0x20)
	float MergeRegionSize;  // 0x24 (0x24)
	float MaxSimplificationError;  // 0x28 (0x28)
	int32_t TileNumberHardLimit;  // 0x2C (0x2C)
	enum class ERecastPartitioning RegionPartitioning;  // 0x30 (0x30)
	enum class ERecastPartitioning LayerPartitioning;  // 0x31 (0x31)
	char pad_50[2];  // 0x32 (0x32)
	int32_t RegionChunkSplits;  // 0x34 (0x34)
	int32_t LayerChunkSplits;  // 0x38 (0x38)
	char bSortNavigationAreasByCost : 1;  // 0x3C (0x3C)
	char bPerformVoxelFiltering : 1;  // 0x3C (0x3C)
	char bMarkLowHeightAreas : 1;  // 0x3C (0x3C)
	char bUseExtraTopCellWhenMarkingAreas : 1;  // 0x3C (0x3C)
	char bFilterLowSpanSequences : 1;  // 0x3C (0x3C)
	char bFilterLowSpanFromTileCache : 1;  // 0x3C (0x3C)
	char bFixedTilePoolSize : 1;  // 0x3C (0x3C)
	char bIsWorldPartitioned : 1;  // 0x3C (0x3C)
	char pad_61[3];  // 0x3D (0x3D)


}; 
 
 // ScriptStruct NavigationSystem.NavGraphNode
struct FNavGraphNode
{
	struct UObject* Owner;  // 0x0 (0x0)
	char pad_8[16];  // 0x8 (0x8)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
struct FGetNavigationSystem
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct UNavigationSystemV1* ReturnValue;  // 0x8 (0x8)


}; 
 
 // ScriptStruct NavigationSystem.SupportedAreaData
struct FSupportedAreaData
{
	struct FString AreaClassName;  // 0x0 (0x0)
	int32_t AreaID;  // 0x10 (0x10)
	char pad_20[4];  // 0x14 (0x14)
	 AreaClass;  // 0x18 (0x18)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
struct FFindPathToActorSynchronously
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector PathStart;  // 0x8 (0x8)
	struct AActor* GoalActor;  // 0x20 (0x20)
	float TetherDistance;  // 0x28 (0x28)
	char pad_44[4];  // 0x2C (0x2C)
	struct AActor* PathfindingContext;  // 0x30 (0x30)
	UNavigationQueryFilter* FilterClass;  // 0x38 (0x38)
	struct UNavigationPath* ReturnValue;  // 0x40 (0x40)


}; 
 
 // ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x70(Inherited: 0x68)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{
	uint32_t NavLinkUserId;  // 0x68 (0x68)
	char pad_108[4];  // 0x6C (0x6C)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
struct FK2_GetRandomReachablePointInRadius
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Origin;  // 0x8 (0x8)
	struct FVector RandomLocation;  // 0x20 (0x20)
	float Radius;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct ANavigationData* NavData;  // 0x40 (0x40)
	UNavigationQueryFilter* FilterClass;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // ScriptStruct NavigationSystem.RecastNavMeshTileGenerationDebug
struct FRecastNavMeshTileGenerationDebug
{
	char bEnabled : 1;  // 0x0 (0x0)
	char pad_0_1 : 7;  // 0x0 (0x0)
	char pad_1[4];  // 0x1 (0x1)
	struct FIntVector TileCoordinate;  // 0x4 (0x4)
	char bHeightfieldSolidFromRasterization : 1;  // 0x10 (0x10)
	char bHeightfieldSolidPostInclusionBoundsFiltering : 1;  // 0x10 (0x10)
	char bHeightfieldSolidPostHeightFiltering : 1;  // 0x10 (0x10)
	char bCompactHeightfield : 1;  // 0x10 (0x10)
	char bCompactHeightfieldEroded : 1;  // 0x10 (0x10)
	char bCompactHeightfieldRegions : 1;  // 0x10 (0x10)
	char bCompactHeightfieldDistances : 1;  // 0x10 (0x10)
	char bTileCacheLayerAreas : 1;  // 0x10 (0x10)
	char bTileCacheLayerRegions : 1;  // 0x11 (0x11)
	char bTileCacheContours : 1;  // 0x11 (0x11)
	char bTileCachePolyMesh : 1;  // 0x11 (0x11)
	char bTileCacheDetailMesh : 1;  // 0x11 (0x11)
	char pad_17_1 : 4;  // 0x11 (0x11)
	char pad_18[3];  // 0x12 (0x12)


}; 
 
 // Function NavigationSystem.NavigationPath.EnableDebugDrawing
struct FEnableDebugDrawing
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool bShouldDrawDebugData : 1;  // 0x0 (0x0)
	char pad_1[3];  // 0x1 (0x1)
	struct FLinearColor PathColor;  // 0x4 (0x4)


}; 
 
 // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
struct FEnableRecalculationOnInvalidation
{
	enum class ENavigationOptionFlag DoRecalculation;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
struct FK2_ProjectPointToNavigation
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Point;  // 0x8 (0x8)
	struct FVector ProjectedLocation;  // 0x20 (0x20)
	struct ANavigationData* NavData;  // 0x38 (0x38)
	UNavigationQueryFilter* FilterClass;  // 0x40 (0x40)
	struct FVector QueryExtent;  // 0x48 (0x48)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 // Function NavigationSystem.NavigationPath.GetDebugString
struct FGetDebugString
{
	struct FString ReturnValue;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.GetPathCost
struct FGetPathCost
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector PathStart;  // 0x8 (0x8)
	struct FVector PathEnd;  // 0x20 (0x20)
	float PathCost;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct ANavigationData* NavData;  // 0x40 (0x40)
	UNavigationQueryFilter* FilterClass;  // 0x48 (0x48)
	enum class ENavigationQueryResult ReturnValue;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.GetPathLength
struct FGetPathLength
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector PathStart;  // 0x8 (0x8)
	struct FVector PathEnd;  // 0x20 (0x20)
	float PathLength;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct ANavigationData* NavData;  // 0x40 (0x40)
	UNavigationQueryFilter* FilterClass;  // 0x48 (0x48)
	enum class ENavigationQueryResult ReturnValue;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function NavigationSystem.NavigationPath.IsPartial
struct FIsPartial
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationPath.IsStringPulled
struct FIsStringPulled
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationPath.IsValid
struct FIsValid
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool ReturnValue : 1;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
struct FFindPathToLocationSynchronously
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector PathStart;  // 0x8 (0x8)
	struct FVector PathEnd;  // 0x20 (0x20)
	struct AActor* PathfindingContext;  // 0x38 (0x38)
	UNavigationQueryFilter* FilterClass;  // 0x40 (0x40)
	struct UNavigationPath* ReturnValue;  // 0x48 (0x48)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.NavigationRaycast
struct FNavigationRaycast
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector RayStart;  // 0x8 (0x8)
	struct FVector RayEnd;  // 0x20 (0x20)
	struct FVector HitLocation;  // 0x38 (0x38)
	UNavigationQueryFilter* FilterClass;  // 0x50 (0x50)
	struct AController* Querier;  // 0x58 (0x58)
	char pad_96_1 : 7;  // 0x60 (0x60)
	bool ReturnValue : 1;  // 0x60 (0x60)
	char pad_97[7];  // 0x61 (0x61)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
struct FIsNavigationBeingBuilt
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
struct FIsNavigationBeingBuiltOrLocked
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool ReturnValue : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
struct FSetGeometryGatheringMode
{
	uint8_t NewMode;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
struct FK2_GetRandomLocationInNavigableRadius
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Origin;  // 0x8 (0x8)
	struct FVector RandomLocation;  // 0x20 (0x20)
	float Radius;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct ANavigationData* NavData;  // 0x40 (0x40)
	UNavigationQueryFilter* FilterClass;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
struct FK2_ReplaceAreaInTileBounds
{
	struct FBox Bounds;  // 0x0 (0x0)
	UNavArea* OldArea;  // 0x38 (0x38)
	UNavArea* NewArea;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool ReplaceLinks : 1;  // 0x48 (0x48)
	char pad_73_1 : 7;  // 0x49 (0x49)
	bool ReturnValue : 1;  // 0x49 (0x49)
	char pad_74[6];  // 0x4A (0x4A)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
struct FK2_GetRandomPointInNavigableRadius
{
	struct UObject* WorldContextObject;  // 0x0 (0x0)
	struct FVector Origin;  // 0x8 (0x8)
	struct FVector RandomLocation;  // 0x20 (0x20)
	float Radius;  // 0x38 (0x38)
	char pad_60[4];  // 0x3C (0x3C)
	struct ANavigationData* NavData;  // 0x40 (0x40)
	UNavigationQueryFilter* FilterClass;  // 0x48 (0x48)
	char pad_80_1 : 7;  // 0x50 (0x50)
	bool ReturnValue : 1;  // 0x50 (0x50)
	char pad_81[7];  // 0x51 (0x51)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
struct FK2_ReplaceAreaInOctreeData
{
	struct UObject* Object;  // 0x0 (0x0)
	UNavArea* OldArea;  // 0x8 (0x8)
	UNavArea* NewArea;  // 0x10 (0x10)
	char pad_24_1 : 7;  // 0x18 (0x18)
	bool ReturnValue : 1;  // 0x18 (0x18)
	char pad_25[7];  // 0x19 (0x19)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
struct FOnNavigationBoundsUpdated
{
	struct ANavMeshBoundsVolume* NavVolume;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
struct FRegisterNavigationInvoker
{
	struct AActor* Invoker;  // 0x0 (0x0)
	float TileGenerationRadius;  // 0x8 (0x8)
	float TileRemovalRadius;  // 0xC (0xC)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
struct FSetMaxSimultaneousTileGenerationJobsCount
{
	int32_t MaxNumberOfJobs;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
struct FUnregisterNavigationInvoker
{
	struct AActor* Invoker;  // 0x0 (0x0)


}; 
 
 // Function NavigationSystem.NavModifierVolume.SetAreaClass
struct FSetAreaClass
{
	UNavArea* NewAreaClass;  // 0x0 (0x0)


}; 
 
 