#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ExecuteUbergraph_BTT_CheckWallToCanMove
struct FExecuteUbergraph_BTT_CheckWallToCanMove
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x8 (0x8)
	struct AAIController* K2Node_Event_OwnerController;  // 0x18 (0x18)
	struct APawn* K2Node_Event_ControlledPawn;  // 0x20 (0x20)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x28 (0x28)
	char pad_48_1 : 7;  // 0x30 (0x30)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x30 (0x30)
	char pad_49[7];  // 0x31 (0x31)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x38 (0x38)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x50 (0x50)
	float CallFunc_BreakRotator_Roll;  // 0x68 (0x68)
	float CallFunc_BreakRotator_Pitch;  // 0x6C (0x6C)
	float CallFunc_BreakRotator_Yaw;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	double CallFunc_BreakVector_X;  // 0x78 (0x78)
	double CallFunc_BreakVector_Y;  // 0x80 (0x80)
	double CallFunc_BreakVector_Z;  // 0x88 (0x88)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x90 (0x90)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x98 (0x98)
	struct FVector CallFunc_GetForwardVector_ReturnValue;  // 0xB0 (0xB0)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0xC8 (0xC8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0xD0 (0xD0)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0xE8 (0xE8)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options_2;  // 0x100 (0x100)
	char pad_264_1 : 7;  // 0x108 (0x108)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x108 (0x108)
	char pad_265[7];  // 0x109 (0x109)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x110 (0x110)
	struct FVector CallFunc_Multiply_VectorFloat_ReturnValue;  // 0x118 (0x118)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x130 (0x130)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x148 (0x148)
	struct FHitResult CallFunc_CapsuleTraceSingleForObjects_OutHit;  // 0x158 (0x158)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue : 1;  // 0x240 (0x240)
	char pad_577_1 : 7;  // 0x241 (0x241)
	bool CallFunc_Not_PreBool_ReturnValue : 1;  // 0x241 (0x241)
	char pad_578[6];  // 0x242 (0x242)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_2;  // 0x248 (0x248)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x258 (0x258)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x270 (0x270)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_2;  // 0x288 (0x288)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x2A0 (0x2A0)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x2B8 (0x2B8)
	float CallFunc_BreakRotator_Roll_2;  // 0x2C8 (0x2C8)
	float CallFunc_BreakRotator_Pitch_2;  // 0x2CC (0x2CC)
	float CallFunc_BreakRotator_Yaw_2;  // 0x2D0 (0x2D0)
	char pad_724[4];  // 0x2D4 (0x2D4)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x2D8 (0x2D8)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x2E0 (0x2E0)
	struct FVector CallFunc_GetForwardVector_ReturnValue_2;  // 0x2F8 (0x2F8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x310 (0x310)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x328 (0x328)
	double CallFunc_BreakVector_X_2;  // 0x340 (0x340)
	double CallFunc_BreakVector_Y_2;  // 0x348 (0x348)
	double CallFunc_BreakVector_Z_2;  // 0x350 (0x350)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x358 (0x358)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x360 (0x360)
	struct FHitResult CallFunc_CapsuleTraceSingleForObjects_OutHit_2;  // 0x378 (0x378)
	char pad_1120_1 : 7;  // 0x460 (0x460)
	bool CallFunc_CapsuleTraceSingleForObjects_ReturnValue_2 : 1;  // 0x460 (0x460)
	char pad_1121_1 : 7;  // 0x461 (0x461)
	bool CallFunc_Not_PreBool_ReturnValue_2 : 1;  // 0x461 (0x461)
	char pad_1122[6];  // 0x462 (0x462)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x468 (0x468)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x470 (0x470)
	char pad_1140[4];  // 0x474 (0x474)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0x478 (0x478)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast_2;  // 0x480 (0x480)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x488 (0x488)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0x490 (0x490)


}; 
 
 // Function BTT_CheckWallToCanMove.BTT_CheckWallToCanMove_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 