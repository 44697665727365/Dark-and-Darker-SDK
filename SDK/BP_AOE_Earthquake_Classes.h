#pragma once 
#include <BP_AOE_Earthquake_Structs.h>
 
 
 
// BlueprintGeneratedClass BP_AOE_Earthquake.BP_AOE_Earthquake_C
// Size: 0xC30(Inherited: 0xB98)
struct ABP_AOE_Earthquake_C : ABP_DCAoeDefineBase_AutoActive_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0xB98 (0xB98)
	struct TMap<struct AActor*, struct FActiveGameplayEffectHandle> EffectHandleMap;  // 0xBA0 (0xBA0)
	struct FVector Decal Location;  // 0xBF0 (0xBF0)
	struct FRotator Decal Rotation;  // 0xC08 (0xC08)
	struct UDecalComponent* Decal Large;  // 0xC20 (0xC20)
	double Radius;  // 0xC28 (0xC28)


	void OnRep_Radius(); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.OnRep_Radius
	void SpawnCollision(); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnCollision
	void SpawnFiringFX(); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SpawnFiringFX
	void DespawnFiringFX(); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DespawnFiringFX
	void SetAoeData(double Radius); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.SetAoeData
	void RemoveEffect(struct AActor* OutActor); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEffect
	void DestroyEvent(double DestroyDelayTime); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.DestroyEvent
	void RemoveEndOverlapActor(struct ADCCharacterBase* CharacterBase); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.RemoveEndOverlapActor
	void ReceiveBeginPlay(); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_AOE_Earthquake(int32_t EntryPoint); // Function BP_AOE_Earthquake.BP_AOE_Earthquake_C.ExecuteUbergraph_BP_AOE_Earthquake
}; 
 
 


