#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.EventReceived_E4F41D3B43AD548E3B55F6877DD81A9F
struct FEventReceived_E4F41D3B43AD548E3B55F6877DD81A9F
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.ExecuteUbergraph_GA_SkeletonWarlord_Combo2
struct FExecuteUbergraph_GA_SkeletonWarlord_Combo2
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
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401_1 : 7;  // 0x191 (0x191)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0x191 (0x191)
	char pad_402_1 : 7;  // 0x192 (0x192)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x192 (0x192)
	char pad_403[5];  // 0x193 (0x193)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x198 (0x198)
	int32_t CallFunc_RandomInteger_ReturnValue;  // 0x248 (0x248)
	char pad_588_1 : 7;  // 0x24C (0x24C)
	bool K2Node_SwitchInteger_CmpSuccess : 1;  // 0x24C (0x24C)
	char pad_589[3];  // 0x24D (0x24D)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x250 (0x250)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x258 (0x258)
	struct ABP_SkeletonWarlord_C* K2Node_DynamicCast_AsBP_Skeleton_Warlord;  // 0x260 (0x260)
	char pad_616_1 : 7;  // 0x268 (0x268)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x268 (0x268)
	char pad_617[7];  // 0x269 (0x269)
	double CallFunc_Combo_Reach_Calculation_Return;  // 0x270 (0x270)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x278 (0x278)
	char pad_633[7];  // 0x279 (0x279)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x280 (0x280)


}; 
 
 // Function GA_SkeletonWarlord_Combo2.GA_SkeletonWarlord_Combo2_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 