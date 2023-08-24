#pragma once 
#include <GA_AoeCallerAtLocationFromMontage_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C
// Size: 0x608(Inherited: 0x580)
struct UGA_AoeCallerAtLocationFromMontage_C : UGA_PlayMontageAndWaitForEventBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	char pad_1416_1 : 7;  // 0x588 (0x588)
	bool SpawnFromNavMesh : 1;  // 0x588 (0x588)
	char pad_1417[7];  // 0x589 (0x589)
	struct FGameplayTagContainer SpawnEventTags;  // 0x590 (0x590)
	enum class E_TargetType TargetType;  // 0x5B0 (0x5B0)
	char pad_1457[7];  // 0x5B1 (0x5B1)
	ADCAoeBase* Aoe Class;  // 0x5B8 (0x5B8)
	struct TArray<struct FVector> SpawnLocation;  // 0x5C0 (0x5C0)
	double RandomSpawnRadius;  // 0x5D0 (0x5D0)
	double Interval;  // 0x5D8 (0x5D8)
	struct ADCAoeBase* Spawned Aoe;  // 0x5E0 (0x5E0)
	int32_t CountingAoe;  // 0x5E8 (0x5E8)
	char pad_1516[4];  // 0x5EC (0x5EC)
	struct ADCCharacterBase* As DCCharacter Base;  // 0x5F0 (0x5F0)
	struct FTimerHandle TimerHandle;  // 0x5F8 (0x5F8)
	struct UDCAT_RotateToActor* Rotation Async Task;  // 0x600 (0x600)


	void SpawnAoe(); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.SpawnAoe
	void EventReceived_A2FB813847C970E0B81B0E8D2934AE40(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.EventReceived_A2FB813847C970E0B81B0E8D2934AE40
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.AbilityActivated
	void SpawnAoeTimerLoop(); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.SpawnAoeTimerLoop
	void ExecuteUbergraph_GA_AoeCallerAtLocationFromMontage(int32_t EntryPoint); // Function GA_AoeCallerAtLocationFromMontage.GA_AoeCallerAtLocationFromMontage_C.ExecuteUbergraph_GA_AoeCallerAtLocationFromMontage
}; 
 
 


