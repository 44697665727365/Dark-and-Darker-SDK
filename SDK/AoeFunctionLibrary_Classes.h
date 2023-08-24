#pragma once 
#include <AoeFunctionLibrary_Structs.h>
 
 
 
// BlueprintGeneratedClass AoeFunctionLibrary.AoeFunctionLibrary_C
// Size: 0x28(Inherited: 0x28)
struct UAoeFunctionLibrary_C : UBlueprintFunctionLibrary
{


	struct ADCAoeBase* SpawnAoeFromTarget(struct FVector SpawnLocation, struct FName KeyName, struct ADCCharacterBase* DCCharacterBase, double RandomSpawnRadius, ADCAoeBase* Aoe Class, struct UDCGameplayAbilityBase* DCGameplay Ability Base, bool SpawnFromNavMesh, struct FGameplayEventData Event Data, struct UObject* __WorldContext, bool& Cast Bool); // Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromTarget
	void SpawnAoeFromSelf(struct FVector SpawnLocation, struct ADCCharacterBase* DCCharacterBase, double RandomSpawnRadius, ADCAoeBase* Aoe Class, struct UDCGameplayAbilityBase* DCGameplay Ability Base, bool SpawnFromNavMesh, struct FGameplayEventData Event Data, struct UObject* __WorldContext, struct ADCAoeBase*& Return Value); // Function AoeFunctionLibrary.AoeFunctionLibrary_C.SpawnAoeFromSelf
}; 
 
 


