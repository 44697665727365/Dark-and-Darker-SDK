#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.ExecuteUbergraph_GA_CaveTroll_Debuff_Shouting
struct FExecuteUbergraph_GA_CaveTroll_Debuff_Shouting
{
	int32_t EntryPoint;  // 0x0 (0x0)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x4 (0x4)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate_2;  // 0x14 (0x14)
	char pad_36[4];  // 0x24 (0x24)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x28 (0x28)
	struct FGameplayEventData Temp_struct_Variable;  // 0xD8 (0xD8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[3];  // 0x191 (0x191)
	int32_t Temp_int_Loop_Counter_Variable;  // 0x194 (0x194)
	int32_t CallFunc_Subtract_IntInt_ReturnValue;  // 0x198 (0x198)
	char pad_412_1 : 7;  // 0x19C (0x19C)
	bool CallFunc_GreaterEqual_IntInt_ReturnValue : 1;  // 0x19C (0x19C)
	char pad_413[3];  // 0x19D (0x19D)
	int32_t Temp_int_Array_Index_Variable;  // 0x1A0 (0x1A0)
	char pad_420[4];  // 0x1A4 (0x1A4)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A8 (0x1A8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x258 (0x258)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	struct UDCAT_RotateToActor* CallFunc_RotateToActor_ReturnValue;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_Get_Target_Array_Return_Value : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Target_Array_TargetArray;  // 0x280 (0x280)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_IsValid_ReturnValue_2 : 1;  // 0x290 (0x290)
	char pad_657[7];  // 0x291 (0x291)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue_2;  // 0x298 (0x298)
	struct FGameplayEventData Temp_struct_Variable_2;  // 0x2A0 (0x2A0)
	char pad_848_1 : 7;  // 0x350 (0x350)
	bool CallFunc_IsValid_ReturnValue_3 : 1;  // 0x350 (0x350)
	char pad_849[7];  // 0x351 (0x351)
	struct ADCCharacterBase* CallFunc_Array_Get_Item;  // 0x358 (0x358)
	int32_t CallFunc_Array_Length_ReturnValue;  // 0x360 (0x360)
	char pad_868[4];  // 0x364 (0x364)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x368 (0x368)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_2;  // 0x418 (0x418)
	char pad_1052[4];  // 0x41C (0x41C)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue;  // 0x420 (0x420)
	int32_t CallFunc_Max_ReturnValue;  // 0x430 (0x430)
	char pad_1076[4];  // 0x434 (0x434)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData_2;  // 0x438 (0x438)
	struct TArray<struct FActiveGameplayEffectHandle> CallFunc_ApplyEffectContainer_ReturnValue_2;  // 0x4E8 (0x4E8)
	char pad_1272_1 : 7;  // 0x4F8 (0x4F8)
	bool K2Node_Event_bWasCancelled : 1;  // 0x4F8 (0x4F8)
	char pad_1273_1 : 7;  // 0x4F9 (0x4F9)
	bool CallFunc_FilterTargetsWithinDistanceAndDirectionalAngleAndAllowedAngle_ReturnValue : 1;  // 0x4F9 (0x4F9)
	char pad_1274[6];  // 0x4FA (0x4FA)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x500 (0x500)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_3;  // 0x508 (0x508)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll;  // 0x510 (0x510)
	char pad_1304_1 : 7;  // 0x518 (0x518)
	bool K2Node_DynamicCast_bSuccess_2 : 1;  // 0x518 (0x518)
	char pad_1305[7];  // 0x519 (0x519)
	struct ABP_CaveTroll_C* K2Node_DynamicCast_AsBP_Cave_Troll_2;  // 0x520 (0x520)
	char pad_1320_1 : 7;  // 0x528 (0x528)
	bool K2Node_DynamicCast_bSuccess_3 : 1;  // 0x528 (0x528)
	char pad_1321[3];  // 0x529 (0x529)
	int32_t CallFunc_Get_BB_Phase_Phase;  // 0x52C (0x52C)
	char pad_1328_1 : 7;  // 0x530 (0x530)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x530 (0x530)
	char pad_1329[3];  // 0x531 (0x531)
	int32_t CallFunc_Subtract_IntInt_ReturnValue_3;  // 0x534 (0x534)
	struct FGameplayEventData K2Node_CustomEvent_Payload_2;  // 0x538 (0x538)
	char pad_1512_1 : 7;  // 0x5E8 (0x5E8)
	bool CallFunc_LessEqual_IntInt_ReturnValue : 1;  // 0x5E8 (0x5E8)


}; 
 
 // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_2C61A1944EB3F1A04EBCEBBEE236433B
struct FEventReceived_2C61A1944EB3F1A04EBCEBBEE236433B
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.EventReceived_9F4198A841DE8D176747EAA1345AC0FC
struct FEventReceived_9F4198A841DE8D176747EAA1345AC0FC
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_CaveTroll_Debuff_Shouting.GA_CaveTroll_Debuff_Shouting_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 