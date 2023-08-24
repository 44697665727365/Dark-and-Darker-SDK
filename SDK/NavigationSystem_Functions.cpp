#include "pch.h"
#include "SDK.h"

void UNavRelevantComponent::SetNavigationRelevancy(bool bRelevant){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy");

	FSetNavigationRelevancy parms{};	
	parms.bRelevant = bRelevant;

	ProcessEvent(fn, &parms);
}

bool UNavigationPath::IsValid(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsValid");

	FIsValid parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationPath::IsStringPulled(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsStringPulled");

	FIsStringPulled parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationPath::IsPartial(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.IsPartial");

	FIsPartial parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNavigationPath::GetPathLength(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathLength");

	FGetPathLength parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

float UNavigationPath::GetPathCost(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetPathCost");

	FGetPathCost parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct FString UNavigationPath::GetDebugString(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.GetDebugString");

	FGetDebugString parms{};	

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNavigationPath::EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation");

	FEnableRecalculationOnInvalidation parms{};	
	parms.DoRecalculation = DoRecalculation;

	ProcessEvent(fn, &parms);
}

void UNavigationPath::EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationPath.EnableDebugDrawing");

	FEnableDebugDrawing parms{};	
	parms.bShouldDrawDebugData = bShouldDrawDebugData;
	parms.PathColor = PathColor;

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::UnregisterNavigationInvoker(struct AActor* Invoker){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker");

	FUnregisterNavigationInvoker parms{};	
	parms.Invoker = Invoker;

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount");

	FSetMaxSimultaneousTileGenerationJobsCount parms{};	
	parms.MaxNumberOfJobs = MaxNumberOfJobs;

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::SetGeometryGatheringMode(uint8_t NewMode){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode");

	FSetGeometryGatheringMode parms{};	
	parms.NewMode = NewMode;

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount(){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount");

	FResetMaxSimultaneousTileGenerationJobsCount parms{};	

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker");

	FRegisterNavigationInvoker parms{};	
	parms.Invoker = Invoker;
	parms.TileGenerationRadius = TileGenerationRadius;
	parms.TileRemovalRadius = TileRemovalRadius;

	ProcessEvent(fn, &parms);
}

void UNavigationSystemV1::OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated");

	FOnNavigationBoundsUpdated parms{};	
	parms.NavVolume = NavVolume;

	ProcessEvent(fn, &parms);
}

bool UNavigationSystemV1::NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, UNavigationQueryFilter* FilterClass, struct AController* Querier){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.NavigationRaycast");

	FNavigationRaycast parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.RayStart = RayStart;
	parms.RayEnd = RayEnd;
	parms.HitLocation = HitLocation;
	parms.FilterClass = FilterClass;
	parms.Querier = Querier;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::K2_ReplaceAreaInOctreeData(struct UObject* Object, UNavArea* OldArea, UNavArea* NewArea){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData");

	FK2_ReplaceAreaInOctreeData parms{};	
	parms.Object = Object;
	parms.OldArea = OldArea;
	parms.NewArea = NewArea;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation");

	FK2_ProjectPointToNavigation parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Point = Point;
	parms.ProjectedLocation = ProjectedLocation;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;
	parms.QueryExtent = QueryExtent;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius");

	FK2_GetRandomReachablePointInRadius parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Origin = Origin;
	parms.RandomLocation = RandomLocation;
	parms.Radius = Radius;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius");

	FK2_GetRandomPointInNavigableRadius parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Origin = Origin;
	parms.RandomLocation = RandomLocation;
	parms.Radius = Radius;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius");

	FK2_GetRandomLocationInNavigableRadius parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.Origin = Origin;
	parms.RandomLocation = RandomLocation;
	parms.Radius = Radius;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked");

	FIsNavigationBeingBuiltOrLocked parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool UNavigationSystemV1::IsNavigationBeingBuilt(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt");

	FIsNavigationBeingBuilt parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ENavigationQueryResult UNavigationSystemV1::GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathLength");

	FGetPathLength parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PathStart = PathStart;
	parms.PathEnd = PathEnd;
	parms.PathLength = PathLength;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

enum class ENavigationQueryResult UNavigationSystemV1::GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetPathCost");

	FGetPathCost parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PathStart = PathStart;
	parms.PathEnd = PathEnd;
	parms.PathCost = PathCost;
	parms.NavData = NavData;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNavigationSystemV1* UNavigationSystemV1::GetNavigationSystem(struct UObject* WorldContextObject){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.GetNavigationSystem");

	FGetNavigationSystem parms{};	
	parms.WorldContextObject = WorldContextObject;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNavigationPath* UNavigationSystemV1::FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously");

	FFindPathToLocationSynchronously parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PathStart = PathStart;
	parms.PathEnd = PathEnd;
	parms.PathfindingContext = PathfindingContext;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

struct UNavigationPath* UNavigationSystemV1::FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously");

	FFindPathToActorSynchronously parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.PathStart = PathStart;
	parms.GoalActor = GoalActor;
	parms.TetherDistance = TetherDistance;
	parms.PathfindingContext = PathfindingContext;
	parms.FilterClass = FilterClass;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(struct FBox Bounds, UNavArea* OldArea, UNavArea* NewArea, bool ReplaceLinks){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds");

	FK2_ReplaceAreaInTileBounds parms{};	
	parms.Bounds = Bounds;
	parms.OldArea = OldArea;
	parms.NewArea = NewArea;
	parms.ReplaceLinks = ReplaceLinks;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UNavModifierComponent::SetAreaClass(UNavArea* NewAreaClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierComponent.SetAreaClass");

	FSetAreaClass parms{};	
	parms.NewAreaClass = NewAreaClass;

	ProcessEvent(fn, &parms);
}

void ANavModifierVolume::SetAreaClass(UNavArea* NewAreaClass){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function NavigationSystem.NavModifierVolume.SetAreaClass");

	FSetAreaClass parms{};	
	parms.NewAreaClass = NewAreaClass;

	ProcessEvent(fn, &parms);
}

