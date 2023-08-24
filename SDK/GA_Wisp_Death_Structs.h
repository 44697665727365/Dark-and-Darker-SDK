#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_Wisp_Death.GA_Wisp_Death_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_Wisp_Death.GA_Wisp_Death_C.EventReceived_A2C3D5EC4D6443972507938CFD3998CA
struct FEventReceived_A2C3D5EC4D6443972507938CFD3998CA
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_Wisp_Death.GA_Wisp_Death_C.ExecuteUbergraph_GA_Wisp_Death
struct FExecuteUbergraph_GA_Wisp_Death
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x8 (0x8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x18 (0x18)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_2;  // 0x20 (0x20)
	struct FTransform CallFunc_GetTransform_ReturnValue;  // 0x30 (0x30)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x90 (0x90)
	struct FVector CallFunc_BreakTransform_Location;  // 0xA0 (0xA0)
	struct FRotator CallFunc_BreakTransform_Rotation;  // 0xB8 (0xB8)
	struct FVector CallFunc_BreakTransform_Scale;  // 0xD0 (0xD0)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array_3;  // 0xE8 (0xE8)
	struct FVector CallFunc_Conv_FloatToVector_ReturnValue;  // 0xF8 (0xF8)
	struct TArray<struct AActor*> Temp_object_Variable_2;  // 0x110 (0x110)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x120 (0x120)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x128 (0x128)
	char pad_304_1 : 7;  // 0x130 (0x130)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x130 (0x130)
	char pad_305[7];  // 0x131 (0x131)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x138 (0x138)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x148 (0x148)
	char pad_336_1 : 7;  // 0x150 (0x150)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x150 (0x150)
	char pad_337[3];  // 0x151 (0x151)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x154 (0x154)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x158 (0x158)
	int32_t CallFunc_Max_ReturnValue;  // 0x15C (0x15C)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x160 (0x160)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue;  // 0x168 (0x168)
	double CallFunc_BreakVector_X;  // 0x180 (0x180)
	double CallFunc_BreakVector_Y;  // 0x188 (0x188)
	double CallFunc_BreakVector_Z;  // 0x190 (0x190)
	double CallFunc_BreakVector_X_2;  // 0x198 (0x198)
	double CallFunc_BreakVector_Y_2;  // 0x1A0 (0x1A0)
	double CallFunc_BreakVector_Z_2;  // 0x1A8 (0x1A8)
	double CallFunc_BreakVector_X_3;  // 0x1B0 (0x1B0)
	double CallFunc_BreakVector_Y_3;  // 0x1B8 (0x1B8)
	double CallFunc_BreakVector_Z_3;  // 0x1C0 (0x1C0)
	char pad_456_1 : 7;  // 0x1C8 (0x1C8)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x1C8 (0x1C8)
	char pad_457[3];  // 0x1C9 (0x1C9)
	int32_t Temp_int_Array_Index_Variable;  // 0x1CC (0x1CC)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x1D0 (0x1D0)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x1D8 (0x1D8)
	struct FRotator CallFunc_K2_GetActorRotation_ReturnValue;  // 0x288 (0x288)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x2A0 (0x2A0)
	float CallFunc_BreakRotator_Roll;  // 0x2B0 (0x2B0)
	float CallFunc_BreakRotator_Pitch;  // 0x2B4 (0x2B4)
	float CallFunc_BreakRotator_Yaw;  // 0x2B8 (0x2B8)
	char pad_700[4];  // 0x2BC (0x2BC)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x2C0 (0x2C0)
	char pad_728[8];  // 0x2D8 (0x2D8)
	struct FTransform CallFunc_MakeTransform_ReturnValue;  // 0x2E0 (0x2E0)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;  // 0x340 (0x340)
	char pad_836[4];  // 0x344 (0x344)
	struct FRotator CallFunc_FindRelativeLookAtRotation_ReturnValue;  // 0x348 (0x348)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x360 (0x360)
	float CallFunc_BreakRotator_Roll_2;  // 0x368 (0x368)
	float CallFunc_BreakRotator_Pitch_2;  // 0x36C (0x36C)
	float CallFunc_BreakRotator_Yaw_2;  // 0x370 (0x370)
	char pad_884[4];  // 0x374 (0x374)
	double CallFunc_Subtract_DoubleDouble_ReturnValue;  // 0x378 (0x378)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_2;  // 0x380 (0x380)
	char pad_900_1 : 7;  // 0x384 (0x384)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x384 (0x384)
	char pad_901[3];  // 0x385 (0x385)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_2;  // 0x388 (0x388)
	double CallFunc_Add_DoubleDouble_ReturnValue;  // 0x390 (0x390)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_2;  // 0x398 (0x398)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue;  // 0x3A0 (0x3A0)
	char pad_932[4];  // 0x3A4 (0x3A4)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x3A8 (0x3A8)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_3;  // 0x3C0 (0x3C0)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x3C8 (0x3C8)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_3;  // 0x3E0 (0x3E0)
	char pad_996[4];  // 0x3E4 (0x3E4)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_4;  // 0x3E8 (0x3E8)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_4;  // 0x3F0 (0x3F0)
	char pad_1012[4];  // 0x3F4 (0x3F4)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_5;  // 0x3F8 (0x3F8)
	float CallFunc_GetScaledCapsuleRadius_ReturnValue_2;  // 0x400 (0x400)
	char pad_1028[4];  // 0x404 (0x404)
	double CallFunc_Add_DoubleDouble_ReturnValue_2;  // 0x408 (0x408)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_6;  // 0x410 (0x410)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_3;  // 0x418 (0x418)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue_2;  // 0x420 (0x420)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x438 (0x438)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_5;  // 0x450 (0x450)
	float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue_6;  // 0x454 (0x454)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_7;  // 0x458 (0x458)
	double CallFunc_Multiply_DoubleDouble_ReturnValue_8;  // 0x460 (0x460)
	struct FVector CallFunc_GetCapsuleBottomLocation_ReturnValue_2;  // 0x468 (0x468)
	double CallFunc_Add_DoubleDouble_ReturnValue_3;  // 0x480 (0x480)
	double CallFunc_BreakVector_X_4;  // 0x488 (0x488)
	double CallFunc_BreakVector_Y_4;  // 0x490 (0x490)
	double CallFunc_BreakVector_Z_4;  // 0x498 (0x498)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_4;  // 0x4A0 (0x4A0)
	double CallFunc_Add_DoubleDouble_ReturnValue_4;  // 0x4A8 (0x4A8)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x4B0 (0x4B0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_5;  // 0x4C8 (0x4C8)
	double CallFunc_BreakVector_X_5;  // 0x4D0 (0x4D0)
	double CallFunc_BreakVector_Y_5;  // 0x4D8 (0x4D8)
	double CallFunc_BreakVector_Z_5;  // 0x4E0 (0x4E0)
	struct FVector CallFunc_MakeVector_ReturnValue_4;  // 0x4E8 (0x4E8)
	double CallFunc_Add_DoubleDouble_ReturnValue_5;  // 0x500 (0x500)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue;  // 0x508 (0x508)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_6;  // 0x520 (0x520)
	struct FVector CallFunc_GetRightVector_ReturnValue;  // 0x528 (0x528)
	struct FVector CallFunc_MakeVector_ReturnValue_5;  // 0x540 (0x540)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x558 (0x558)
	struct FRotator CallFunc_FindLookAtRotation_ReturnValue_2;  // 0x570 (0x570)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_2;  // 0x588 (0x588)
	struct FVector CallFunc_GetRightVector_ReturnValue_2;  // 0x5A0 (0x5A0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x5B8 (0x5B8)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue_3;  // 0x5D0 (0x5D0)
	struct FHitResult CallFunc_SphereTraceSingleForObjects_OutHit;  // 0x5E8 (0x5E8)
	char pad_1744_1 : 7;  // 0x6D0 (0x6D0)
	bool CallFunc_SphereTraceSingleForObjects_ReturnValue : 1;  // 0x6D0 (0x6D0)
	char pad_1745[7];  // 0x6D1 (0x6D1)
	struct FVector CallFunc_Add_VectorVector_ReturnValue_2;  // 0x6D8 (0x6D8)
	double CallFunc_BreakVector_X_6;  // 0x6F0 (0x6F0)
	double CallFunc_BreakVector_Y_6;  // 0x6F8 (0x6F8)
	double CallFunc_BreakVector_Z_6;  // 0x700 (0x700)
	struct FGameplayEventData Temp_struct_Variable;  // 0x708 (0x708)
	double CallFunc_Add_DoubleDouble_ReturnValue_6;  // 0x7B8 (0x7B8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x7C0 (0x7C0)
	double CallFunc_Subtract_DoubleDouble_ReturnValue_7;  // 0x870 (0x870)
	struct FVector CallFunc_MakeVector_ReturnValue_6;  // 0x878 (0x878)
	struct FHitResult CallFunc_SphereTraceSingleForObjects_OutHit_2;  // 0x890 (0x890)
	char pad_2424_1 : 7;  // 0x978 (0x978)
	bool CallFunc_SphereTraceSingleForObjects_ReturnValue_2 : 1;  // 0x978 (0x978)
	char pad_2425[3];  // 0x979 (0x979)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x97C (0x97C)
	char pad_2444[4];  // 0x98C (0x98C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x990 (0x990)
	int32_t Temp_int_Loop_Counter_Variable;  // 0xA40 (0xA40)
	char pad_2628[4];  // 0xA44 (0xA44)
	struct TArray<struct AActor*> Temp_object_Variable_3;  // 0xA48 (0xA48)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0xA58 (0xA58)
	char pad_2652[4];  // 0xA5C (0xA5C)
	struct FHitResult CallFunc_SphereTraceSingleForObjects_OutHit_3;  // 0xA60 (0xA60)
	char pad_2888_1 : 7;  // 0xB48 (0xB48)
	bool CallFunc_SphereTraceSingleForObjects_ReturnValue_3 : 1;  // 0xB48 (0xB48)
	char pad_2889_1 : 7;  // 0xB49 (0xB49)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0xB49 (0xB49)
	char pad_2890[6];  // 0xB4A (0xB4A)
	double CallFunc_Subtract_DoubleDouble_B_ImplicitCast;  // 0xB50 (0xB50)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast;  // 0xB58 (0xB58)
	double CallFunc_Subtract_DoubleDouble_A_ImplicitCast;  // 0xB60 (0xB60)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;  // 0xB68 (0xB68)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;  // 0xB70 (0xB70)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;  // 0xB78 (0xB78)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;  // 0xB80 (0xB80)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;  // 0xB88 (0xB88)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;  // 0xB90 (0xB90)
	double CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;  // 0xB98 (0xB98)


}; 
 
 