#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_CheckTargetDistanceToAttack.BTD_CheckTargetDistanceToAttack_C.PerformConditionCheckAI
// Size: 0xF9(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x20 (0x20)
	char pad_57_1 : 7;  // 0x39 (0x39)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x28 (0x28)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x30 (0x30)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options_2;  // 0x48 (0x48)
	char pad_90_1 : 7;  // 0x5A (0x5A)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x50 (0x50)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x58 (0x58)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x60 (0x60)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x78 (0x78)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x80 (0x80)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x88 (0x88)
	char pad_147_1 : 7;  // 0x93 (0x93)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x90 (0x90)
	struct FName CallFunc_MakeLiteralName_ReturnValue_2;  // 0x94 (0x94)
	char pad_156[4];  // 001058847] ted: 0x18)
 (001058847] Id_ActorSta)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_2;  // 0xA0 (0xA0)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue_2;  // 0xB8 (0xB8)
	double CallFunc_Vector_Distance_ReturnValue;  // 0xC0 (0xC0)
	struct AActor* K2Node_DynamicCast_As__;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool K2Node_DynamicCast_bSuccess_4 : 1;  // 0xD0 (0xD0)
	char pad_209_1 : 7;  // 0xD1 (0xD1)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0xD1 (0xD1)
	char pad_210[6];  // 0xD2 (0xD2)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xD8 (0xD8)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0xF0 (0xF0)
	char pad_248_1 : 7;  // 0xF8 (0xF8)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0xF8 (0xF8)


}; 
 
 