#pragma once 
#include <GA_GiantBat_FindCeiling_Structs.h>
 
 
 
// BlueprintGeneratedClass GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C
// Size: 0x5F8(Inherited: 0x580)
struct UGA_GiantBat_FindCeiling_C : UGA_MonsterGameplayAbilityBase_C
{
	struct FPointerToUberGraphFrame UberGraphFrame;  // 0x580 (0x580)
	struct FVector StartLocation;  // 0x588 (0x588)
	struct FVector CeilingLocation;  // 0x5A0 (0x5A0)
	double CapsuleHeight;  // 0x5B8 (0x5B8)
	double RemainDistance;  // 0x5C0 (0x5C0)
	struct FVector MoveDirection;  // 0x5C8 (0x5C8)
	char pad_1504_1 : 7;  // 0x5E0 (0x5E0)
	bool Reached : 1;  // 0x5E0 (0x5E0)
	char pad_1505[7];  // 0x5E1 (0x5E1)
	struct FTimerHandle TimerHandle;  // 0x5E8 (0x5E8)
	struct ABP_GiantBat_C* As BP Giant Bat;  // 0x5F0 (0x5F0)


	void MoveToCeiling(); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.MoveToCeiling
	void SetVariablesToMove(); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToMove
	void SetVariablesToFindCeiling(bool& Result); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.SetVariablesToFindCeiling
	void EventReceived_38BE6F06435287E59C0F13BD42C857A3(struct FGameplayEventData Payload); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.EventReceived_38BE6F06435287E59C0F13BD42C857A3
	void AbilityActivated(struct FGameplayEventData TriggerEventData); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.AbilityActivated
	void Move(); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.Move
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.K2_OnEndAbility
	void ExecuteUbergraph_GA_GiantBat_FindCeiling(int32_t EntryPoint); // Function GA_GiantBat_FindCeiling.GA_GiantBat_FindCeiling_C.ExecuteUbergraph_GA_GiantBat_FindCeiling
}; 
 
 


