#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.EventReceived_1A39A2D34C7FB40840D2729BBC7F2F56
struct FEventReceived_1A39A2D34C7FB40840D2729BBC7F2F56
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ExecuteUbergraph_BP_Lich_DeathSwarm
struct FExecuteUbergraph_BP_Lich_DeathSwarm
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAsyncTaskWaitGameplayEvent* CallFunc_WaitGameplayEventToActor_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x181 (0x181)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x181 (0x181)
	char pad_386[2];  // 0x182 (0x182)
	float K2Node_Event_DeltaSeconds;  // 0x184 (0x184)
	float CallFunc_GetServerWorldTimeSeconds_ReturnValue;  // 0x188 (0x188)
	char pad_396_1 : 7;  // 0x18C (0x18C)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue : 1;  // 0x18C (0x18C)
	char pad_397[3];  // 0x18D (0x18D)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x190 (0x190)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x198 (0x198)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x1A0 (0x1A0)
	char pad_440_1 : 7;  // 0x1B8 (0x1B8)
	bool CallFunc_Greater_DoubleDouble_ReturnValue : 1;  // 0x1B8 (0x1B8)
	char pad_441_1 : 7;  // 0x1B9 (0x1B9)
	bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x1B9 (0x1B9)
	char pad_442[6];  // 0x1BA (0x1BA)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_3;  // 0x1C0 (0x1C0)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x1C8 (0x1C8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_4;  // 0x1E0 (0x1E0)
	char pad_488_1 : 7;  // 0x1E8 (0x1E8)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x1E8 (0x1E8)
	char pad_489[7];  // 0x1E9 (0x1E9)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x1F0 (0x1F0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x1F8 (0x1F8)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_5;  // 0x200 (0x200)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x208 (0x208)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x210 (0x210)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x218 (0x218)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x230 (0x230)
	struct FVector CallFunc_MakeVector_ReturnValue_4;  // 0x238 (0x238)
	double K2Node_CustomEvent_TargetScale;  // 0x250 (0x250)
	double K2Node_CustomEvent_DurationSeconds;  // 0x258 (0x258)
	double CallFunc_FClamp_ReturnValue;  // 0x260 (0x260)
	float CallFunc_GetServerWorldTimeSeconds_ReturnValue_2;  // 0x268 (0x268)
	char pad_620[4];  // 0x26C (0x26C)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x270 (0x270)
	double CallFunc_BreakVector_X;  // 0x278 (0x278)
	double CallFunc_BreakVector_Y;  // 0x280 (0x280)
	double CallFunc_BreakVector_Z;  // 0x288 (0x288)
	struct FAoeScaleData K2Node_MakeStruct_AoeScaleData;  // 0x290 (0x290)
	struct FVector CallFunc_K2_GetComponentScale_ReturnValue;  // 0x2A0 (0x2A0)
	double CallFunc_BreakVector_X_2;  // 0x2B8 (0x2B8)
	double CallFunc_BreakVector_Y_2;  // 0x2C0 (0x2C0)
	double CallFunc_BreakVector_Z_2;  // 0x2C8 (0x2C8)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x2D0 (0x2D0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x2D8 (0x2D8)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x2E0 (0x2E0)
	double CallFunc_GetTimeSeconds_ReturnValue_2;  // 0x2E8 (0x2E8)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x2F0 (0x2F0)
	struct FVector CallFunc_K2_GetComponentScale_ReturnValue_2;  // 0x2F8 (0x2F8)
	double CallFunc_BreakVector_X_3;  // 0x310 (0x310)
	double CallFunc_BreakVector_Y_3;  // 0x318 (0x318)
	double CallFunc_BreakVector_Z_3;  // 0x320 (0x320)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_4;  // 0x328 (0x328)
	double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;  // 0x330 (0x330)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0x338 (0x338)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;  // 0x340 (0x340)
	double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast;  // 0x348 (0x348)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0x350 (0x350)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_2;  // 0x358 (0x358)
	double CallFunc_MakeVector_X_ImplicitCast;  // 0x360 (0x360)
	double CallFunc_MakeVector_Y_ImplicitCast;  // 0x368 (0x368)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast;  // 0x370 (0x370)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_2;  // 0x378 (0x378)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_3;  // 0x380 (0x380)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast;  // 0x388 (0x388)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_3;  // 0x390 (0x390)
	double CallFunc_GreaterEqual_DoubleDouble_B_ImplicitCast_2;  // 0x398 (0x398)
	double CallFunc_Greater_DoubleDouble_A_ImplicitCast;  // 0x3A0 (0x3A0)
	double CallFunc_MakeVector_X_ImplicitCast_2;  // 0x3A8 (0x3A8)
	double CallFunc_MakeVector_Y_ImplicitCast_2;  // 0x3B0 (0x3B0)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_2;  // 0x3B8 (0x3B8)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_4;  // 0x3C0 (0x3C0)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_4;  // 0x3C8 (0x3C8)
	double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast_2;  // 0x3D0 (0x3D0)
	float K2Node_MakeStruct_NewScale_ImplicitCast;  // 0x3D8 (0x3D8)
	char pad_988[4];  // 0x3DC (0x3DC)
	double CallFunc_Add_DoubleDouble_A_ImplicitCast_3;  // 0x3E0 (0x3E0)
	float K2Node_MakeStruct_NewServerWorldTimeSeconds_ImplicitCast;  // 0x3E8 (0x3E8)
	float K2Node_MakeStruct_OldScale_ImplicitCast;  // 0x3EC (0x3EC)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x3F0 (0x3F0)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast;  // 0x3F4 (0x3F4)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x3F8 (0x3F8)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0x3FC (0x3FC)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast_3;  // 0x400 (0x400)


}; 
 
 // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.SetTargetAoeScale
struct FSetTargetAoeScale
{
	double TargetScale;  // 0x0 (0x0)
	double DurationSeconds;  // 0x8 (0x8)


}; 
 
 // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.ReceiveTick
// Size: 0x4(Inherited: 0x4)
struct FReceiveTick : FReceiveTick
{
	float DeltaSeconds;  // 0x0 (0x0)


}; 
 
 // Function BP_Lich_DeathSwarm.BP_Lich_DeathSwarm_C.UpdateBorderMaterial
struct FUpdateBorderMaterial
{
	char pad_0_1 : 7;  // 0x0 (0x0)
	bool Off : 1;  // 0x0 (0x0)
	char pad_1[7];  // 0x1 (0x1)
	double Transition;  // 0x8 (0x8)
	struct UMaterialInstanceDynamic* Material Instance;  // 0x10 (0x10)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue;  // 0x18 (0x18)
	double CallFunc_GetTimeSeconds_ReturnValue;  // 0x20 (0x20)
	struct UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;  // 0x28 (0x28)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast;  // 0x30 (0x30)
	float CallFunc_SetScalarParameterValue_Value_ImplicitCast_2;  // 0x34 (0x34)


}; 
 
 