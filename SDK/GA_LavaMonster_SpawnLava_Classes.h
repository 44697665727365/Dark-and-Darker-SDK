#pragma once 
#include <GA_LavaMonster_SpawnLava_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C
// Size: 0x680(Inherited: 0x608)
struct UGA_LavaMonster_SpawnLava_C : UGA_AoeCallerAtLocationFromMontage_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x608 (0x608)
	struct FVector Target Bottom Location;  // 0x610 (0x610)
	int32_t Spawn Count;  // 0x628 (0x628)
	char pad_1580[4];  // 0x62C (0x62C)
	struct FVector Line Spawn Location;  // 0x630 (0x630)
	struct FVector Target Spawn Location;  // 0x648 (0x648)
	struct FVector Line Spawn Forward Vector;  // 0x660 (0x660)
	struct FTimerHandle Line Spawn TimerHandle;  // 0x678 (0x678)


	void EventReceived_A2E4D0E04B4E99E632FB14B6CDD9C0F7(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.EventReceived_A2E4D0E04B4E99E632FB14B6CDD9C0F7
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.AbilityActivated
	void Spawn Line Aoe(); // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.Spawn Line Aoe
	void ExecuteUbergraph_GA_LavaMonster_SpawnLava(int32_t EntryPoint); // Function GA_LavaMonster_SpawnLava.GA_LavaMonster_SpawnLava_C.ExecuteUbergraph_GA_LavaMonster_SpawnLava
}; 
 
 


