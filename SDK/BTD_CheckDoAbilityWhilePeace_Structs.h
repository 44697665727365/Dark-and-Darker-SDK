#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckDoAbilityWhilePeace.BTD_CheckDoAbilityWhilePeace_C.PerformConditionCheckAI
// Size: 0x21(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)


}; 
 
 