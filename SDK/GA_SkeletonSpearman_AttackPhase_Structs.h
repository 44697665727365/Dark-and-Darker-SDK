#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.EventReceived_FEFD9C5A49C735D59CBA058127C754E3
struct FEventReceived_FEFD9C5A49C735D59CBA058127C754E3
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSpearman_AttackPhase.GA_SkeletonSpearman_AttackPhase_C.ExecuteUbergraph_GA_SkeletonSpearman_AttackPhase
struct FExecuteUbergraph_GA_SkeletonSpearman_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4_1 : 7;  // 0x4 (0x4)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x4 (0x4)
	char pad_5[3];  // 0x5 (0x5)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x8 (0x8)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x18 (0x18)
	struct FGameplayEventData Temp_struct_Variable;  // 0xC8 (0xC8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x178 (0x178)
	char pad_384_1 : 7;  // 0x180 (0x180)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x180 (0x180)
	char pad_385[7];  // 0x181 (0x181)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x188 (0x188)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x238 (0x238)
	char pad_576_1 : 7;  // 0x240 (0x240)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x240 (0x240)
	char pad_577[7];  // 0x241 (0x241)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x248 (0x248)


}; 
 
 