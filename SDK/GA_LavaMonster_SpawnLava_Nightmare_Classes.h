#pragma once 
#include <GA_LavaMonster_SpawnLava_Nightmare_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C
// Size: 0x6A0(Inherited: 0x608)
struct UGA_LavaMonster_SpawnLava_Nightmare_C : UGA_AoeCallerAtLocationFromMontage_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x608 (0x608)
	struct FVector Target Bottom Location;  // 0x610 (0x610)
	int32_t Spawn Count;  // 0x628 (0x628)
	char pad_1580[4];  // 0x62C (0x62C)
	struct FVector Target Spawn Location;  // 0x630 (0x630)
	struct FVector Line Spawn Forward Vector;  // 0x648 (0x648)
	struct FTimerHandle Line Spawn TimerHandle;  // 0x660 (0x660)
	struct FVector Target Spawn Location2;  // 0x668 (0x668)
	struct FVector Line Spawn Forward Vector2;  // 0x680 (0x680)
	double Random Angle;  // 0x698 (0x698)


	void EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.EventReceived_E40F5943497DCAF72B3B2CBB58BE2A63
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.AbilityActivated
	void Spawn Line Aoe(); // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.Spawn Line Aoe
	void ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare(int32_t EntryPoint); // Function GA_LavaMonster_SpawnLava_Nightmare.GA_LavaMonster_SpawnLava_Nightmare_C.ExecuteUbergraph_GA_LavaMonster_SpawnLava_Nightmare
}; 
 
 


