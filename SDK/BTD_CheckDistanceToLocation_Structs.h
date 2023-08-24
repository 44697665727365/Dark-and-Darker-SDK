#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckDistanceToLocation.BTD_CheckDistanceToLocation_C.PerformConditionCheckAI
// Size: 0xEE(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x14 (0x14)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x20 (0x20)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x48 (0x48)
	struct FVector CallFunc_GetValueAsVector_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_BreakTransform_Location;  // 0x68 (0x68)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0x80 (0x80)
	struct FVector CallFunc_BreakTransform_Scale;  // 0x98 (0x98)
	double CallFunc_Vector_Distance_ReturnValue;  // 0xB0 (0xB0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xB8 (0xB8)
	char pad_218_1 : 7;  // 0xDA (0xDA)
	bool CallFunc_Less_DoubleDouble_ReturnValue : 1;  // 0xD0 (0xD0)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0xD8 (0xD8)
	char pad_227_1 : 7;  // 0xE3 (0xE3)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xE0 (0xE0)
	char pad_228_1 : 7;  // 0xE4 (0xE4)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0xE1 (0xE1)
	char pad_229_1 : 7;  // 0xE5 (0xE5)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue : 1;  // 0xE2 (0xE2)
	char pad_230_1 : 7;  // 0xE6 (0xE6)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0xE3 (0xE3)
	char pad_231_1 : 7;  // 0xE7 (0xE7)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0xE4 (0xE4)
	char pad_232_1 : 7;  // 0xE8 (0xE8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0xE5 (0xE5)
	char pad_233_1 : 7;  // 0xE9 (0xE9)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0xE6 (0xE6)
	char pad_234_1 : 7;  // 0xEA (0xEA)
	bool CallFunc_Less_DoubleDouble_ReturnValue_2 : 1;  // 0xE7 (0xE7)
	char pad_235_1 : 7;  // 0xEB (0xEB)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xE8 (0xE8)
	char pad_236_1 : 7;  // 0xEC (0xEC)
	bool CallFunc_Greater_DoubleDouble_ReturnValue_2 : 1;  // 0xE9 (0xE9)
	char pad_237_1 : 7;  // 0xED (0xED)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xEA (0xEA)
	char pad_238_1 : 7;  // 0xEE (0xEE)
	bool CallFunc_NotEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xEB (0xEB)
	char pad_239_1 : 7;  // 0xEF (0xEF)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xEC (0xEC)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_SwitchEnum_CmpSuccess_3 : 1;  // 0xED (0xED)


}; 
 
 