#include "pch.h"
#include "SDK.h"

void AInteractiveFoliageActor::CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	FCapsuleTouched parms{};	
	parms.OverlappedComp = OverlappedComp;
	parms.Other = Other;
	parms.OtherComp = OtherComp;
	parms.OtherBodyIndex = OtherBodyIndex;
	parms.bFromSweep = bFromSweep;
	parms.OverlapInfo = OverlapInfo;

	ProcessEvent(fn, &parms);
}

int32_t UFoliageStatistics::FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount");

	FFoliageOverlappingSphereCount parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.StaticMesh = StaticMesh;
	parms.CenterPosition = CenterPosition;
	parms.Radius = Radius;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UFoliageStatistics::FoliageOverlappingBoxTransforms(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box, struct TArray<struct FTransform>& OutTransforms){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms");

	FFoliageOverlappingBoxTransforms parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.StaticMesh = StaticMesh;
	parms.Box = Box;
	parms.OutTransforms = OutTransforms;

	ProcessEvent(fn, &parms);
}

int32_t UFoliageStatistics::FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount");

	FFoliageOverlappingBoxCount parms{};	
	parms.WorldContextObject = WorldContextObject;
	parms.StaticMesh = StaticMesh;
	parms.Box = Box;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UProceduralFoliageSpawner::Simulate(int32_t NumSteps){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	FSimulate parms{};	
	parms.NumSteps = NumSteps;

	ProcessEvent(fn, &parms);
}

