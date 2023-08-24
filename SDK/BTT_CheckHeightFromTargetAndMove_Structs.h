#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ExecuteUbergraph_BTT_CheckHeightFromTargetAndMove
struct FExecuteUbergraph_BTT_CheckHeightFromTargetAndMove
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x10 (0x10)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x18 (0x18)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	struct FVector CallFunc_GetActorForwardVector_ReturnValue;  // 0x28 (0x28)
	double CallFunc_BreakVector_X;  // 0x40 (0x40)
	double CallFunc_BreakVector_Y;  // 0x48 (0x48)
	double CallFunc_BreakVector_Z;  // 0x50 (0x50)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x58 (0x58)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x70 (0x70)
	double CallFunc_BreakVector_X_2;  // 0x78 (0x78)
	double CallFunc_BreakVector_Y_2;  // 0x80 (0x80)
	double CallFunc_BreakVector_Z_2;  // 0x88 (0x88)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x90 (0x90)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x98 (0x98)
	char pad_160_1 : 7;  // 0xA0 (0xA0)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0xA0 (0xA0)
	char pad_161[7];  // 0xA1 (0xA1)
	struct AAIController* K2Node_Event_OwnerController;  // 0xA8 (0xA8)
	struct APawn* K2Node_Event_ControlledPawn;  // 0xB0 (0xB0)
	float K2Node_Event_DeltaSeconds;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0xC0 (0xC0)
	struct UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue;  // 0xD8 (0xD8)
	double CallFunc_BreakVector_X_3;  // 0xE0 (0xE0)
	double CallFunc_BreakVector_Y_3;  // 0xE8 (0xE8)
	double CallFunc_BreakVector_Z_3;  // 0xF0 (0xF0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0xF8 (0xF8)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x100 (0x100)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[7];  // 0x119 (0x119)
	double CallFunc_BreakVector_X_4;  // 0x120 (0x120)
	double CallFunc_BreakVector_Y_4;  // 0x128 (0x128)
	double CallFunc_BreakVector_Z_4;  // 0x130 (0x130)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2;  // 0x138 (0x138)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue_2;  // 0x140 (0x140)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base_2;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x150 (0x150)
	char pad_337[7];  // 0x151 (0x151)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x158 (0x158)
	double CallFunc_BreakVector_X_5;  // 0x170 (0x170)
	double CallFunc_BreakVector_Y_5;  // 0x178 (0x178)
	double CallFunc_BreakVector_Z_5;  // 0x180 (0x180)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x188 (0x188)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_3;  // 0x190 (0x190)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x198 (0x198)
	char pad_416_1 : 7;  // 0x1A0 (0x1A0)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x1A0 (0x1A0)
	char pad_417[7];  // 0x1A1 (0x1A1)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x1A8 (0x1A8)


}; 
 
 // Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 // Function BTT_CheckHeightFromTargetAndMove.BTT_CheckHeightFromTargetAndMove_C.ReceiveTickAI
// Size: 0x14(Inherited: 0x18)
struct FReceiveTickAI : FReceiveTickAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	float DeltaSeconds;  // 0x10 (0x10)


}; 
 
 