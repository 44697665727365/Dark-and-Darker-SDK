#pragma once 
#include <GA_MonsterMeleeAttackBaseWithOptions_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C
// Size: 0x6C9(Inherited: 0x628)
struct UGA_MonsterMeleeAttackBaseWithOptions_C : UGA_MonsterMeleeAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x628 (0x628)
	struct TArray<enum class E_TargetType> Control Point;  // 0x630 (0x630)
	struct TArray<double> Angle;  // 0x640 (0x640)
	struct TArray<double> Distance;  // 0x650 (0x650)
	struct TArray<double> DashSpeed;  // 0x660 (0x660)
	struct ADCCharacterBase* CasterPawn;  // 0x670 (0x670)
	struct ADCCharacterBase* TargetPawn;  // 0x678 (0x678)
	int32_t Index;  // 0x680 (0x680)
	char pad_1668[4];  // 0x684 (0x684)
	struct UAbilityTask* MovementTask;  // 0x688 (0x688)
	double RotationSpeed;  // 0x690 (0x690)
	char pad_1688_1 : 7;  // 0x698 (0x698)
	bool Without Pitch : 1;  // 0x698 (0x698)
	char pad_1689[3];  // 0x699 (0x699)
	struct FGameplayTag EndTagSignal;  // 0x69C (0x69C)
	struct FGameplayTag Gameplay Tag;  // 0x6A4 (0x6A4)
	uint8_t Hit Box;  // 0x6AC (0x6AC)
	char pad_1709[3];  // 0x6AD (0x6AD)
	struct FVector ResultLocation;  // 0x6B0 (0x6B0)
	char pad_1736_1 : 7;  // 0x6C8 (0x6C8)
	bool Teleport : 1;  // 0x6C8 (0x6C8)


	void GetAvailableLocation(struct FVector DestLocation, bool& Result, struct FVector& Location); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetAvailableLocation
	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetBBTargetActor
	void EventReceived_95DCC296493E3A36038DED83D7616167(struct FGameplayEventData Payload); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_95DCC296493E3A36038DED83D7616167
	void OnFinish_237210C047AC334B6F6EFAB48C3790F4(bool IsArrivedDestLocation); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_237210C047AC334B6F6EFAB48C3790F4
	void OnFinish_73831B584F90FE2D55D4F7B95AFEE710(bool IsArrivedDestLocation); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.OnFinish_73831B584F90FE2D55D4F7B95AFEE710
	void EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.EventReceived_B16E8F464CD39A7D82CF9CAD51B75D82
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.AbilityActivated
	void GetSignal(); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.GetSignal
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions(int32_t EntryPoint); // Function GA_MonsterMeleeAttackBaseWithOptions.GA_MonsterMeleeAttackBaseWithOptions_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions
}; 
 
 


