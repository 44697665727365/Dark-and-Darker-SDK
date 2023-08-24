#pragma once 
#include <GA_DemonBat_FindCeiling_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C
// Size: 0x5F8(Inherited: 0x580)
struct UGA_DemonBat_FindCeiling_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct ABP_DemonBat_Common_C* As BP Man Bat;  // 0x588 (0x588)
	struct FVector StartLocation;  // 0x590 (0x590)
	struct FVector CeilingLocation;  // 0x5A8 (0x5A8)
	double CapsuleHeight;  // 0x5C0 (0x5C0)
	double RemainDistance;  // 0x5C8 (0x5C8)
	struct FVector MoveDirection;  // 0x5D0 (0x5D0)
	char pad_1512_1 : 7;  // 0x5E8 (0x5E8)
	bool Reached : 1;  // 0x5E8 (0x5E8)
	char pad_1513[7];  // 0x5E9 (0x5E9)
	struct FTimerHandle TimerHandle;  // 0x5F0 (0x5F0)


	void MoveToCeiling(); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.MoveToCeiling
	void SetVariablesToMove(); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToMove
	void SetVariablesToFindCeiling(bool& Result); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.SetVariablesToFindCeiling
	void EventReceived_2CE0199045DAC986FAD76F82AEC79881(struct FGameplayEventData Payload); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.EventReceived_2CE0199045DAC986FAD76F82AEC79881
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.AbilityActivated
	void Move(); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.Move
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_DemonBat_FindCeiling(int32_t EntryPoint); // Function GA_DemonBat_FindCeiling.GA_DemonBat_FindCeiling_C.ExecuteUbergraph_GA_DemonBat_FindCeiling
}; 
 
 


