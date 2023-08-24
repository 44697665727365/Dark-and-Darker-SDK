#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.EventReceived_B4969E1E4A0DA4D606942E9FA45052CC
struct FEventReceived_B4969E1E4A0DA4D606942E9FA45052CC
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.ExecuteUbergraph_GA_SkeletonSwordman_Combo
struct FExecuteUbergraph_GA_SkeletonSwordman_Combo
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
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
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_GetBBTargetActorToCharacterBase_Result : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct ADCCharacterBase* CallFunc_GetBBTargetActorToCharacterBase_As_DCCharacter_Base;  // 0x260 (0x260)
	struct FGameplayEventData K2Node_MakeStruct_GameplayEventData;  // 0x268 (0x268)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x318 (0x318)
	struct ABP_DCMonsterBaseWithOptions_C* K2Node_DynamicCast_AsBP_DCMonster_Base_with_Options;  // 0x320 (0x320)
	char pad_808_1 : 7;  // 0x328 (0x328)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x328 (0x328)
	char pad_809_1 : 7;  // 0x329 (0x329)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x329 (0x329)


}; 
 
 // Function GA_SkeletonSwordman_Combo.GA_SkeletonSwordman_Combo_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 