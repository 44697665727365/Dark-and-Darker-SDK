#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function BP_HellfireProjectile.BP_HellfireProjectile_C.ExecuteUbergraph_BP_HellfireProjectile
struct FExecuteUbergraph_BP_HellfireProjectile
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_HasAuthority_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5_1 : 7;  // 0x5 (0x5)
	bool CallFunc_HasAuthority_ReturnValue_2 : 1;  // 0x5 (0x5)
	char pad_6[2];  // 0x6 (0x6)
	struct FGameplayTag K2Node_Event_InGameplayTag;  // 0x8 (0x8)
	int32_t K2Node_Event_InCount;  // 0x10 (0x10)
	enum class EEndPlayReason K2Node_Event_EndPlayReason;  // 0x14 (0x14)
	char pad_21_1 : 7;  // 0x15 (0x15)
	bool CallFunc_EqualEqual_IntInt_ReturnValue : 1;  // 0x15 (0x15)
	char pad_22_1 : 7;  // 0x16 (0x16)
	bool CallFunc_MatchesTag_ReturnValue : 1;  // 0x16 (0x16)
	char pad_23[1];  // 0x17 (0x17)
	float K2Node_Event_value;  // 0x18 (0x18)
	float K2Node_Event_TimelinePosition;  // 0x1C (0x1C)
	char pad_32_1 : 7;  // 0x20 (0x20)
	bool CallFunc_HasAuthority_ReturnValue_3 : 1;  // 0x20 (0x20)
	char pad_33[7];  // 0x21 (0x21)
	double CallFunc_Divide_DoubleDouble_ReturnValue;  // 0x28 (0x28)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x30 (0x30)
	double CallFunc_FClamp_ReturnValue;  // 0x48 (0x48)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x50 (0x50)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x68 (0x68)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x80 (0x80)
	char pad_152_1 : 7;  // 0x98 (0x98)
	bool CallFunc_HasAuthority_ReturnValue_4 : 1;  // 0x98 (0x98)
	char pad_153[3];  // 0x99 (0x99)
	struct FDelegate Temp_delegate_Variable;  // 0x9C (0x9C)
	struct FDelegate Temp_delegate_Variable_2;  // 0xAC (0xAC)
	int32_t CallFunc_PostAkEvent_ReturnValue;  // 0xBC (0xBC)
	int32_t CallFunc_PostAkEvent_ReturnValue_2;  // 0xC0 (0xC0)
	char pad_196[4];  // 0xC4 (0xC4)
	double CallFunc_Divide_DoubleDouble_A_ImplicitCast;  // 0xC8 (0xC8)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast;  // 0xD0 (0xD0)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0xD4 (0xD4)
	float CallFunc_SetLifeSpan_InLifespan_ImplicitCast;  // 0xD8 (0xD8)


}; 
 
 // Function BP_HellfireProjectile.BP_HellfireProjectile_C.TimelineUpdateEvent
// Size: 0x8(Inherited: 0x8)
struct FTimelineUpdateEvent : FTimelineUpdateEvent
{
	float Value;  // 0x0 (0x0)
	float TimelinePosition;  // 0x4 (0x4)


}; 
 
 // Function BP_HellfireProjectile.BP_HellfireProjectile_C.ReceiveEndPlay
// Size: 0x1(Inherited: 0x1)
struct FReceiveEndPlay : FReceiveEndPlay
{
	enum class EEndPlayReason EndPlayReason;  // 0x0 (0x0)


}; 
 
 // Function BP_HellfireProjectile.BP_HellfireProjectile_C.InitNiagaraEffect
struct FInitNiagaraEffect
{
	struct FVector CallFunc_Divide_VectorVector_ReturnValue;  // 0x0 (0x0)
	double CallFunc_BreakVector_X;  // 0x18 (0x18)
	double CallFunc_BreakVector_Y;  // 0x20 (0x20)
	double CallFunc_BreakVector_Z;  // 0x28 (0x28)
	struct FVector CallFunc_GetSocketLocation_ReturnValue;  // 0x30 (0x30)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_2;  // 0x48 (0x48)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_3;  // 0x60 (0x60)
	struct FVector CallFunc_GetSocketLocation_ReturnValue_4;  // 0x78 (0x78)
	double CallFunc_Vector_Distance_ReturnValue;  // 0x90 (0x90)
	double CallFunc_Vector_Distance_ReturnValue_2;  // 0x98 (0x98)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0xA0 (0xA0)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0xA8 (0xA8)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast;  // 0xB0 (0xB0)
	float CallFunc_SetVariableFloat_InValue_ImplicitCast_2;  // 0xB4 (0xB4)


}; 
 
 // Function BP_HellfireProjectile.BP_HellfireProjectile_C.GameplayTagUpdated
// Size: 0xC(Inherited: 0xC)
struct FGameplayTagUpdated : FGameplayTagUpdated
{
	struct FGameplayTag InGameplayTag;  // 0x0 (0x0)
	int32_t InCount;  // 0x8 (0x8)


}; 
 
 