#pragma once 
#include <GA_MonsterMeleeAttackBaseWithOptions_InputVector_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C
// Size: 0x6A8(Inherited: 0x628)
struct UGA_MonsterMeleeAttackBaseWithOptions_InputVector_C : UGA_MonsterMeleeAttackBase
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x628 (0x628)
	struct TArray<enum class E_TargetType> Control Point;  // 0x630 (0x630)
	struct TArray<double> Angle;  // 0x640 (0x640)
	struct TArray<double> Distance;  // 0x650 (0x650)
	struct ADCCharacterBase* CasterPawn;  // 0x660 (0x660)
	struct ADCCharacterBase* TargetPawn;  // 0x668 (0x668)
	int32_t Index;  // 0x670 (0x670)
	char pad_1652[4];  // 0x674 (0x674)
	struct UAbilityTask* MovementTask;  // 0x678 (0x678)
	double RotationSpeed;  // 0x680 (0x680)
	char pad_1672_1 : 7;  // 0x688 (0x688)
	bool Without Pitch : 1;  // 0x688 (0x688)
	char pad_1673[3];  // 0x689 (0x689)
	struct FGameplayTag EndTagSignal;  // 0x68C (0x68C)
	struct FGameplayTag Gameplay Tag;  // 0x694 (0x694)
	uint8_t Hit Box;  // 0x69C (0x69C)
	char pad_1693[3];  // 0x69D (0x69D)
	struct UCurveVector* InputCurve;  // 0x6A0 (0x6A0)


	void GetAvailableLocation(struct FVector DestLocation, bool& Result, struct FVector& Location); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetAvailableLocation
	void GetBBTargetActorToMonsterBase(bool& Result, struct ABP_DCMonsterBaseWithOptions_C*& DCMonsterBaseWithOptions); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToMonsterBase
	void GetBBTargetActorToCharacterBase(bool& Result, struct ADCCharacterBase*& As DCCharacter Base); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActorToCharacterBase
	void GetBBTargetActor(bool& Result, struct UObject*& Return Value); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetBBTargetActor
	void EventReceived_345BBB4C476117C4949AE2A581954F06(struct FGameplayEventData Payload); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_345BBB4C476117C4949AE2A581954F06
	void EventReceived_AE81807E4915675DEB1BD0847699B25D(struct FGameplayTag EventTag, struct FGameplayEventData EventData); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.EventReceived_AE81807E4915675DEB1BD0847699B25D
	void OnFinish_FFD00FE4461E73F15B901CA7FD69D470(bool IsArrivedDestLocation); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_FFD00FE4461E73F15B901CA7FD69D470
	void OnFinish_AB08374A4B9F12BF12E6DA84E1306A84(bool IsArrivedDestLocation); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.OnFinish_AB08374A4B9F12BF12E6DA84E1306A84
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.AbilityActivated
	void GetSignal(); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.GetSignal
	void ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector(int32_t EntryPoint); // Function GA_MonsterMeleeAttackBaseWithOptions_InputVector.GA_MonsterMeleeAttackBaseWithOptions_InputVector_C.ExecuteUbergraph_GA_MonsterMeleeAttackBaseWithOptions_InputVector
}; 
 
 


