#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.EventReceived_564F5B6C4DB573D61F1A8AA04342AF7C
struct FEventReceived_564F5B6C4DB573D61F1A8AA04342AF7C
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.ExecuteUbergraph_GA_DemonBerserker_Attack1
struct FExecuteUbergraph_GA_DemonBerserker_Attack1
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x8 (0x8)
	struct FGameplayEventData Temp_struct_Variable;  // 0x10 (0x10)
	struct ABP_DemonBerserker_C* K2Node_DynamicCast_AsBP_Demon_Berserker;  // 0xC0 (0xC0)
	char pad_200_1 : 7;  // 0xC8 (0xC8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0xC8 (0xC8)
	char pad_201[7];  // 0xC9 (0xC9)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xD0 (0xD0)
	char pad_216_1 : 7;  // 0xD8 (0xD8)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0xD8 (0xD8)
	char pad_217_1 : 7;  // 0xD9 (0xD9)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD9 (0xD9)
	char pad_218_1 : 7;  // 0xDA (0xDA)
	bool CallFunc_InRange_FloatFloat_ReturnValue : 1;  // 0xDA (0xDA)
	char pad_219[5];  // 0xDB (0xDB)
	double CallFunc_RandomFloatInRange_ReturnValue;  // 0xE0 (0xE0)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0xE8 (0xE8)
	char pad_408_1 : 7;  // 0x198 (0x198)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue : 1;  // 0x198 (0x198)
	char pad_409_1 : 7;  // 0x199 (0x199)
	bool CallFunc_InRange_FloatFloat_ReturnValue_2 : 1;  // 0x199 (0x199)
	char pad_410_1 : 7;  // 0x19A (0x19A)
	bool CallFunc_BooleanAND_ReturnValue : 1;  // 0x19A (0x19A)
	char pad_411[5];  // 0x19B (0x19B)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0x1A0 (0x1A0)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x250 (0x250)
	char pad_600_1 : 7;  // 0x258 (0x258)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x258 (0x258)
	char pad_601[7];  // 0x259 (0x259)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x260 (0x260)
	char pad_624_1 : 7;  // 0x270 (0x270)
	bool K2Node_Event_bWasCancelled : 1;  // 0x270 (0x270)
	char pad_625[3];  // 0x271 (0x271)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0x274 (0x274)
	char pad_644[4];  // 0x284 (0x284)
	double CallFunc_RandomFloatInRange_ReturnValue_2;  // 0x288 (0x288)
	char pad_656_1 : 7;  // 0x290 (0x290)
	bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2 : 1;  // 0x290 (0x290)
	char pad_657_1 : 7;  // 0x291 (0x291)
	bool CallFunc_BooleanAND_ReturnValue_2 : 1;  // 0x291 (0x291)


}; 
 
 // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBerserker_Attack1.GA_DemonBerserker_Attack1_C.K2_OnEndAbility
// Size: 0x1(Inherited: 0x1)
struct FK2_OnEndAbility : FK2_OnEndAbility
{
	char pad_1_1 : 7;  // 0x1 (0x1)
	bool bWasCancelled : 1;  // 0x0 (0x0)


}; 
 
 