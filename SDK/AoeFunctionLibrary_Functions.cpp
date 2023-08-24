#include "pch.h"
#include "SDK.h"

struct ADCAoeBase* UAoeFunctionLibrary_C::SpawnAoeFromTarget(struct FVector SpawnLocation, struct FName KeyName, struct ADCCharacterBase* DCCharacterBase, double RandomSpawnRadius, ADCAoeBase* Aoe Class, struct UDCGameplayAbilityBase* DCGameplay Ability Base, bool SpawnFromNavMesh, struct FGameplayEventData Event Data, struct UObject* __WorldContext, bool& Cast Bool){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromTarget");

	FSpawnAoeFromTarget parms{};	
	parms.SpawnLocation = SpawnLocation;
	parms.KeyName = KeyName;
	parms.DCCharacterBase = DCCharacterBase;
	parms.RandomSpawnRadius = RandomSpawnRadius;
	parms.Aoe Class = Aoe Class;
	parms.DCGameplay Ability Base = DCGameplay Ability Base;
	parms.SpawnFromNavMesh = SpawnFromNavMesh;
	parms.Event Data = Event Data;
	parms.__WorldContext = __WorldContext;
	parms.Cast Bool = Cast Bool;

	ProcessEvent(fn, &parms);

	return parms.return_value;
}

void UAoeFunctionLibrary_C::SpawnAoeFromSelf(struct FVector SpawnLocation, struct ADCCharacterBase* DCCharacterBase, double RandomSpawnRadius, ADCAoeBase* Aoe Class, struct UDCGameplayAbilityBase* DCGameplay Ability Base, bool SpawnFromNavMesh, struct FGameplayEventData Event Data, struct UObject* __WorldContext, struct ADCAoeBase*& Return Value){

	static UFunction* fn = 0;
 	if(!fn)
		fn = (UFunction*)UObject::FindObject<UFunction>("Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromSelf");

	FSpawnAoeFromSelf parms{};	
	parms.SpawnLocation = SpawnLocation;
	parms.DCCharacterBase = DCCharacterBase;
	parms.RandomSpawnRadius = RandomSpawnRadius;
	parms.Aoe Class = Aoe Class;
	parms.DCGameplay Ability Base = DCGameplay Ability Base;
	parms.SpawnFromNavMesh = SpawnFromNavMesh;
	parms.Event Data = Event Data;
	parms.__WorldContext = __WorldContext;
	parms.Return Value = Return Value;

	ProcessEvent(fn, &parms);
}

