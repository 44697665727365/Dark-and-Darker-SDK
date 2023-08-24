#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
// Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.AbilityActivated
// Size: 0xB0(Inherited: 0xB0)
struct FAbilityActivated : FAbilityActivated
{
	struct FGameplayEventData TriggerEventData;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.EventReceived_C04B84C441549667BDACC89A3F87529D
struct FEventReceived_C04B84C441549667BDACC89A3F87529D
{
	struct FGameplayEventData Payload;  // 0x0 (0x0)


}; 
 
 // Function GA_DemonBerserker_AttackPhase.GA_DemonBerserker_AttackPhase_C.ExecuteUbergraph_GA_DemonBerserker_AttackPhase
struct FExecuteUbergraph_GA_DemonBerserker_AttackPhase
{
	int32_t EntryPoint;  // 0x0 (0x0)
	char pad_4[4];  // 0x4 (0x4)
	struct FGameplayEventData Temp_struct_Variable;  // 0x8 (0x8)
	struct FDelegate K2Node_CreateDelegate_OutputDelegate;  // 0xB8 (0xB8)
	struct UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue;  // 0xC8 (0xC8)
	char pad_208_1 : 7;  // 0xD0 (0xD0)
	bool CallFunc_IsValid_ReturnValue : 1;  // 0xD0 (0xD0)
	char pad_209[7];  // 0xD1 (0xD1)
	struct FGameplayEventData K2Node_Event_TriggerEventData;  // 0xD8 (0xD8)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x188 (0x188)
	char pad_400_1 : 7;  // 0x190 (0x190)
	bool CallFunc_RandomBool_ReturnValue : 1;  // 0x190 (0x190)
	char pad_401[7];  // 0x191 (0x191)
	struct AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_2;  // 0x198 (0x198)
	struct ABP_DemonBerserker_C* K2Node_DynamicCast_AsBP_Demon_Berserker;  // 0x1A0 (0x1A0)
	char pad_424_1 : 7;  // 0x1A8 (0x1A8)
	bool K2Node_DynamicCast_bSuccess : 1;  // 0x1A8 (0x1A8)
	char pad_425[7];  // 0x1A9 (0x1A9)
	struct FGameplayEventData K2Node_CustomEvent_Payload;  // 0x1B0 (0x1B0)
	char pad_608_1 : 7;  // 0x260 (0x260)
	bool CallFunc_Get_Enemies_In_Range_And_Angle_Result : 1;  // 0x260 (0x260)
	char pad_609[7];  // 0x261 (0x261)
	struct TArray<struct ADCCharacterBase*> CallFunc_Get_Enemies_In_Range_And_Angle_DCCharacterBase;  // 0x268 (0x268)
	char pad_632_1 : 7;  // 0x278 (0x278)
	bool CallFunc_EqualEqual_ByteByte_ReturnValue : 1;  // 0x278 (0x278)


}; 
 
 