#pragma once 
#include <GA_DeathBeetle_CircleMove_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C
// Size: 0x5D0(Inherited: 0x580)
struct UGA_DeathBeetle_CircleMove_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	double LimitedSeconds;  // 0x588 (0x588)
	struct ABP_DCMonsterBaseWithOptions_C* Controlled Pawn;  // 0x590 (0x590)
	struct ADCCharacterBase* TargetActor;  // 0x598 (0x598)
	double Time;  // 0x5A0 (0x5A0)
	char pad_1448_1 : 7;  // 0x5A8 (0x5A8)
	bool Direction : 1;  // 0x5A8 (0x5A8)
	char pad_1449[7];  // 0x5A9 (0x5A9)
	struct FTimerHandle CircleMove TimerHandle;  // 0x5B0 (0x5B0)
	struct FVector Direction Vector;  // 0x5B8 (0x5B8)


	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.K2_OnEndAbility
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.AbilityActivated
	void CircleMoveFromEnemy(); // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.CircleMoveFromEnemy
	void ExecuteUbergraph_GA_DeathBeetle_CircleMove(int32_t EntryPoint); // Function GA_DeathBeetle_CircleMove.GA_DeathBeetle_CircleMove_C.ExecuteUbergraph_GA_DeathBeetle_CircleMove
}; 
 
 


