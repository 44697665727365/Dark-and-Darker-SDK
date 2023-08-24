#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckGroundOrAir.BTD_CheckGroundOrAir_C.PerformConditionCheckAI
// Size: 0x24(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_49_1 : 7;  // 0x31 (0x31)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_50_1 : 7;  // 0x32 (0x32)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x21 (0x21)
	char pad_51_1 : 7;  // 0x33 (0x33)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x22 (0x22)
	char pad_52_1 : 7;  // 0x34 (0x34)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue_2 : 1;  // 0x23 (0x23)


}; 
 
 