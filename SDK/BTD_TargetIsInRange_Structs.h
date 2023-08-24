#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTD_TargetIsInRange.BTD_TargetIsInRange_C.PerformConditionCheckAI
// Size: 0x79(Inherited: 0x18)
struct FPerformConditionCheckAI : FPerformConditionCheckAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool ReturnValue : 1;  // 0x10 (0x10)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x18 (0x18)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x30 (0x30)
	struct FName CallFunc_MakeLiteralName_ReturnValue;  // 0x38 (0x38)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x40 (0x40)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x48 (0x48)
	char pad_97_1 : 7;  // 0x61 (0x61)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x50 (0x50)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x58 (0x58)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x70 (0x70)
	char pad_130_1 : 7;  // 0x82 (0x82)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x78 (0x78)


}; 
 
 