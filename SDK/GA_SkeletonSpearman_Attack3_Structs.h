#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.EventReceived_175188354EEA60D137DEA1B109D779BC
struct FEventReceived_175188354EEA60D137DEA1B109D779BC
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.ExecuteUbergraph_GA_SkeletonSpearman_Attack3
struct FExecuteUbergraph_GA_SkeletonSpearman_Attack3
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x7F (0x7FF7CE0B0110 (0x1705D6E0080))
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x7FF7CCAA9AC0 (0x7FF7CCAA9AC0)
	char pad_201_1 : 7;  // 0xC9 (0xC9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xC9 (0xC9)
	char pad_202[6];  // 0xCA (0xCA)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xD0 (0xD0)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385_1 : 7;  // 0x0 (0x0)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x181 (0x181)
	char pad_386_1 : 7;  // 0x182 (0x182)
	bool K2Node_Event_bWasCancelled : 1;  // 0x182 (0x0)
	char pad_387[5];  // 0x183 (0x183)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x248 (0x248)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x258 (0x258)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x260 (0x260)
	struct ABP_SkeletonSpearman_C* K2Node_DynamicCast_AsBP_Skeleton_Spearman;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x278 (0x278)
	char pad_633_1 : 7;  // 0x279 (0x279)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x279 (0x279)


}; 
 
 // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSpearman_Attack3.GA_SkeletonSpearman_Attack3_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 