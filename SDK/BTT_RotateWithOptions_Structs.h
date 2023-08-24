#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveTickAI
// Size: 0x14(Inherited: 0x18)
struct FReceiveTickAI : FReceiveTickAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)
	float DeltaSeconds;  // 0x10 (0x10)


}; 
 
 // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ExecuteUbergraph_BTT_RotateWithOptions
struct FExecuteUbergraph_BTT_RotateWithOptions
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct AAIController* K2Node_Event_OwnerController_2;  // 0x8 (0x8)
	struct APawn* K2Node_Event_ControlledPawn_2;  // 0x10 (0x10)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	struct UObject* CallFunc_GetValueAsObject_ReturnValue;  // 0x20 (0x20)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x28 (0x28)
	char pad_41[7];  // 0x29 (0x29)
	struct AActor* K2Node_DynamicCast_As__;  // 0x30 (0x30)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x38 (0x38)
	char pad_57[7];  // 0x39 (0x39)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x40 (0x40)
	char pad_72_1 : 7;  // 0x48 (0x48)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x48 (0x48)
	char pad_73[7];  // 0x49 (0x49)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_2;  // 0x68 (0x68)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_3;  // 0x80 (0x80)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x98 (0x98)
	float CallFunc_BreakRotator_Roll;  // 0xB0 (0xB0)
	float CallFunc_BreakRotator_Pitch;  // 0xB4 (0xB4)
	float CallFunc_BreakRotator_Yaw;  // 0xB8 (0xB8)
	char pad_188[4];  // 0xBC (0xBC)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue;  // 0xC0 (0xC0)
	float CallFunc_BreakRotator_Roll_2;  // 0xC8 (0xC8)
	float CallFunc_BreakRotator_Pitch_2;  // 0xCC (0xCC)
	float CallFunc_BreakRotator_Yaw_2;  // 0xD0 (0xD0)
	char pad_212[4];  // 0xD4 (0xD4)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0xD8 (0xD8)
	struct AAIController* K2Node_Event_OwnerController;  // 0xF0 (0xF0)
	struct APawn* K2Node_Event_ControlledPawn;  // 0xF8 (0xF8)
	float K2Node_Event_DeltaSeconds;  // 0x100 (0x100)
	char pad_260_1 : 7;  // 0x104 (0x104)
	bool K2Node_SwitchEnum_CmpSuccess_2 : 1;  // 0x104 (0x104)
	char pad_261[3];  // 0x105 (0x105)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x108 (0x108)
	struct FRotator CallFunc_RInterpTo_ReturnValue;  // 0x120 (0x120)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x138 (0x138)
	float CallFunc_BreakRotator_Roll_3;  // 0x150 (0x150)
	float CallFunc_BreakRotator_Pitch_3;  // 0x154 (0x154)
	float CallFunc_BreakRotator_Yaw_3;  // 0x158 (0x158)
	char pad_348[4];  // 0x15C (0x15C)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x160 (0x160)
	double CallFunc_GetWorldDeltaSeconds_ReturnValue_2;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_K2_SetActorRotation_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x188 (0x188)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_3;  // 0x190 (0x190)
	struct FRotator CallFunc_MakeRotator_ReturnValue_3;  // 0x1A8 (0x1A8)
	struct FRotator CallFunc_RInterpTo_ReturnValue_2;  // 0x1C0 (0x1C0)
	float CallFunc_BreakRotator_Roll_4;  // 0x1D8 (0x1D8)
	float CallFunc_BreakRotator_Pitch_4;  // 0x1DC (0x1DC)
	float CallFunc_BreakRotator_Yaw_4;  // 0x1E0 (0x1E0)
	float CallFunc_BreakRotator_Roll_5;  // 0x1E4 (0x1E4)
	float CallFunc_BreakRotator_Pitch_5;  // 0x1E8 (0x1E8)
	float CallFunc_BreakRotator_Yaw_5;  // 0x1EC (0x1EC)
	struct FRotator CallFunc_MakeRotator_ReturnValue_4;  // 0x1F0 (0x1F0)
	struct FRotator CallFunc_MakeRotator_ReturnValue_5;  // 0x208 (0x208)
	char pad_544_1 : 7;  // 0x220 (0x220)
	bool CallFunc_EqualEqual_RotatorRotator_ReturnValue : 1;  // 0x220 (0x220)
	char pad_545_1 : 7;  // 0x221 (0x221)
	bool CallFunc_K2_SetActorRotation_ReturnValue_2 : 1;  // 0x221 (0x221)
	char pad_546[6];  // 0x222 (0x222)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_4;  // 0x228 (0x228)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue_4;  // 0x240 (0x240)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x258 (0x258)
	float CallFunc_BreakRotator_Roll_6;  // 0x270 (0x270)
	float CallFunc_BreakRotator_Pitch_6;  // 0x274 (0x274)
	float CallFunc_BreakRotator_Yaw_6;  // 0x278 (0x278)
	char pad_636_1 : 7;  // 0x27C (0x27C)
	bool CallFunc_EqualEqual_DoubleDouble_ReturnValue : 1;  // 0x27C (0x27C)
	char pad_637[3];  // 0x27D (0x27D)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x280 (0x280)
	struct FRotator CallFunc_MakeRotator_ReturnValue_6;  // 0x288 (0x288)
	char pad_672_1 : 7;  // 0x2A0 (0x2A0)
	bool CallFunc_EqualEqual_RotatorRotator_ReturnValue_2 : 1;  // 0x2A0 (0x2A0)
	char pad_673[3];  // 0x2A1 (0x2A1)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x2A4 (0x2A4)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x2A8 (0x2A8)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast;  // 0x2B0 (0x2B0)
	float CallFunc_RInterpTo_InterpSpeed_ImplicitCast;  // 0x2B4 (0x2B4)
	float CallFunc_RInterpTo_DeltaTime_ImplicitCast_2;  // 0x2B8 (0x2B8)
	float CallFunc_RInterpTo_InterpSpeed_ImplicitCast_2;  // 0x2BC (0x2BC)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0x2C0 (0x2C0)
	char pad_708[4];  // 0x2C4 (0x2C4)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x2C8 (0x2C8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0x2D0 (0x2D0)
	char pad_724[4];  // 0x2D4 (0x2D4)
	double K2Node_VariableSet_Angle_ImplicitCast;  // 0x2D8 (0x2D8)


}; 
 
 // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetHitBoxLocation
struct FGetHitBoxLocation
{
	struct ADCCharacterBase* DCCharacterBase;  // 0x0 (0x0)
	char pad_8_1 : 7;  // 0x8 (0x8)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x8 (0x8)
	char pad_9[7];  // 0x9 (0x9)
	struct FVector CallFunc_GetHitBoxLocation_Location;  // 0x10 (0x10)
	char pad_40_1 : 7;  // 0x28 (0x28)
	bool CallFunc_GetHitBoxLocation_ReturnValue : 1;  // 0x28 (0x28)


}; 
 
 // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.GetFloatRotationValue
struct FGetFloatRotationValue
{
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x0 (0x0)
	struct UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue;  // 0x18 (0x18)
	float CallFunc_BreakRotator_Roll;  // 0x20 (0x20)
	float CallFunc_BreakRotator_Pitch;  // 0x24 (0x24)
	float CallFunc_BreakRotator_Yaw;  // 0x28 (0x28)
	float CallFunc_GetValueAsFloat_ReturnValue;  // 0x2C (0x2C)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x30 (0x30)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue_2;  // 0x38 (0x38)
	struct FRotator CallFunc_MakeRotator_ReturnValue;  // 0x50 (0x50)
	float CallFunc_BreakRotator_Roll_2;  // 0x68 (0x68)
	float CallFunc_BreakRotator_Pitch_2;  // 0x6C (0x6C)
	float CallFunc_BreakRotator_Yaw_2;  // 0x70 (0x70)
	char pad_116[4];  // 0x74 (0x74)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x78 (0x78)
	struct FRotator CallFunc_MakeRotator_ReturnValue_2;  // 0x80 (0x80)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool K2Node_SwitchEnum_CmpSuccess : 1;  // 0x98 (0x98)
	char pad_153[7];  // 0x99 (0x99)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0xA0 (0xA0)
	double CallFunc_Add_DoubleDouble_B_ImplicitCast;  // 0xA8 (0xA8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast;  // 0xB0 (0xB0)
	char pad_180[4];  // 0xB4 (0xB4)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0xB8 (0xB8)
	float CallFunc_MakeRotator_Yaw_ImplicitCast_2;  // 0xC0 (0xC0)


}; 
 
 // Function BTT_RotateWithOptions.BTT_RotateWithOptions_C.ReceiveExecuteAI
// Size: 0x10(Inherited: 0x10)
struct FReceiveExecuteAI : FReceiveExecuteAI
{
	struct AAIController* OwnerController;  // 0x0 (0x0)
	struct APawn* ControlledPawn;  // 0x8 (0x8)


}; 
 
 