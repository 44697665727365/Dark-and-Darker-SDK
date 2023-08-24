#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.EventReceived_7D8A119E4E75043F1B7FD8A78249FE61
struct FEventReceived_7D8A119E4E75043F1B7FD8A78249FE61
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.ExecuteUbergraph_GA_CaveTroll_Attack_Ground
struct FExecuteUbergraph_GA_CaveTroll_Attack_Ground
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct TArray<struct AActor*> Temp_object_Variable;  // 0x8 (0x8)
	struct FVector CallFunc_MakeVector_ReturnValue;  // 0x18 (0x18)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x30 (0x30)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x34 (0x34)
	char pad_56_1 : 7;  // 0x38 (0x38)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x38 (0x38)
	char pad_57[3];  // 0x39 (0x39)
	int32_t Temp_int_Array_Index_Variable;  // 0x3C (0x3C)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x40 (0x40)
	char pad_240_1 : 7;  // 0xF0 (0xF0)
	bool K2Node_Event_bWasCancelled : 1;  // 0xF0 (0xF0)
	char pad_241[7];  // 0xF1 (0xF1)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0xF8 (0xF8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x100 (0x100)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll;  // 0x108 (0x108)
	char pad_272_1 : 7;  // 0x110 (0x110)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x110 (0x110)
	char pad_273[3];  // 0x111 (0x111)
	int32_t CallFunc_Get_BB_Phase_Phase;  // 0x114 (0x114)
	char pad_280_1 : 7;  // 0x118 (0x118)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x118 (0x118)
	char pad_281[3];  // 0x119 (0x119)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x11C (0x11C)
	char pad_288_1 : 7;  // 0x120 (0x120)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x120 (0x120)
	char pad_289[7];  // 0x121 (0x121)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x128 (0x128)
	struct TArray<enum class EObjectTypeQuery> K2Node_MakeArray_Array;  // 0x130 (0x130)
	struct FVector CallFunc_Get_Direction_Vector_Result_Vector;  // 0x140 (0x140)
	struct FGameplayEventData Temp_struct_Variable;  // 0x158 (0x158)
	double CallFunc_BreakVector_X;  // 0x208 (0x208)
	double CallFunc_BreakVector_Y;  // 0x210 (0x210)
	double CallFunc_BreakVector_Z;  // 0x218 (0x218)
	struct TArray<struct AActor*> CallFunc_SphereOverlapActors_OutActors;  // 0x220 (0x220)
	char pad_560_1 : 7;  // 0x230 (0x230)
	bool CallFunc_SphereOverlapActors_ReturnValue : 1;  // 0x230 (0x230)
	char pad_561[7];  // 0x231 (0x231)
	struct FVector CallFunc_MakeVector_ReturnValue_2;  // 0x238 (0x238)
	struct AActor* CallFunc_Array_Get_Item;  // 0x250 (0x250)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x258 (0x258)
	char pad_604[4];  // 0x25C (0x25C)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x260 (0x260)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_3;  // 0x310 (0x310)
	char pad_788[4];  // [x314 ([x314)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 000032991] ited: 0x6C9)
 (000032991] Package Id_Pe)
	int32_t CallFunc_Max_ReturnValue;  // 0x328 (0x328)
	char pad_812[4];  // 0x32C (0x32C)
	struct ADCCharacterBase* K2Node_DynamicCast_AsDCCharacter_Base;  // 0x330 (0x330)
	char pad_824_1 : 7;  // 0x338 (0x338)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x338 (0x338)
	char pad_825[7];  // 0x339 (0x339)
	struct FVector CallFunc_K2_GetActorLocation_ReturnValue;  // 0x340 (0x340)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x358 (0x358)
	double CallFunc_BreakVector_X_2;  // 0x408 (0x408)
	double CallFunc_BreakVector_Y_2;  // 0x410 (0x410)
	double CallFunc_BreakVector_Z_2;  // 0x418 (0x418)
	struct FVector CallFunc_MakeVector_ReturnValue_3;  // 0x420 (0x420)
	struct FVector CallFunc_Subtract_VectorVector_ReturnValue;  // 0x438 (0x438)
	double CallFunc_Multiply_DoubleDouble_ReturnValue;  // 0x450 (0x450)
	struct FVector CallFunc_Normal_ReturnValue;  // 0x458 (0x458)
	struct FVector CallFunc_Conv_DoubleToVector_ReturnValue;  // 0x470 (0x470)
	struct FVector CallFunc_Multiply_VectorVector_ReturnValue;  // 0x488 (0x488)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4A0 (0x4A0)
	struct FVector CallFunc_Add_VectorVector_ReturnValue;  // 0x4B0 (0x4B0)


}; 
 
 // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Attack_Ground.GA_CaveTroll_Attack_Ground_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 