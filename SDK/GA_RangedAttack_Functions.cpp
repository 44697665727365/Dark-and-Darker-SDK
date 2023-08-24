#include "pch.h"
#include "SDK.h"

void UGA_RangedAttack_C::CalSpawnTransform(struct FVector StartLocation, struct FVector EndLocation, struct FHitResult& HitResult, struct FTransform& OutTransform){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RangedAttack.GA_RangedAttack_C.CalSpawnTransform");

	FCalSpawnTransform parms{};	
	parms.StartLocation = StartLocation;
	parms.EndLocation = EndLocation;
	parms.HitResult = HitResult;
	parms.OutTransform = OutTransform;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttack_C::OnSuccess_5ECACBC94DE5966424402193494726EC(struct AActor* ProjectileActor){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RangedAttack.GA_RangedAttack_C.OnSuccess_5ECACBC94DE5966424402193494726EC");

	FOnSuccess_5ECACBC94DE5966424402193494726EC parms{};	
	parms.ProjectileActor = ProjectileActor;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttack_C::CreateProjectiles(struct FGameplayTag EventTag, struct FGameplayEventData EventData, float FirePower, struct FVector StartLocation){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RangedAttack.GA_RangedAttack_C.CreateProjectiles");

	FCreateProjectiles parms{};	
	parms.EventTag = EventTag;
	parms.EventData = EventData;
	parms.FirePower = FirePower;
	parms.StartLocation = StartLocation;

	ProcessEvent(fn, &parms);
}

void UGA_RangedAttack_C::ExecuteUbergraph_GA_RangedAttack(int32_t EntryPoint){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function GA_RangedAttack.GA_RangedAttack_C.ExecuteUbergraph_GA_RangedAttack");

	FExecuteUbergraph_GA_RangedAttack parms{};	
	parms.EntryPoint = EntryPoint;

	ProcessEvent(fn, &parms);
}

